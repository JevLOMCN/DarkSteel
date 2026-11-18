// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 402

// AnimationNames'' @ 141288400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl `dynamic_initializer_for_'UDS_VM_HUD_ItemDrop::AnimationNames__(void)

{
  ForAnyElementType FVar1;
  undefined1 auStackY_88 [32];
  FName local_48;
  FName FStack_40;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  ::FName::FName(&local_48,"Start_Ani");
  ::FName::FName(&FStack_40,"Ani_Lucky_Drop_Grade_01");
  ::FName::FName(&local_38,"Ani_Lucky_Drop_Grade_02");
  ::FName::FName(&FStack_30,"Ani_Lucky_Drop_Grade_03");
  ::FName::FName(&local_28,"Ani_Lucky_Drop_Grade_04");
  ::FName::FName(&FStack_20,"Ani_Lucky_Drop_Grade_05");
  ::FName::FName(&local_18,"Ani_Lucky_Drop_Grade_06");
  UDS_VM_HUD_ItemDrop::AnimationNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UDS_VM_HUD_ItemDrop::AnimationNames.ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,7,0,&UDS_VM_HUD_ItemDrop::AnimationNames.AllocatorInstance,7,
             &UDS_VM_HUD_ItemDrop::AnimationNames.ArrayMax);
  FVar1 = UDS_VM_HUD_ItemDrop::AnimationNames.AllocatorInstance;
  *(FName *)UDS_VM_HUD_ItemDrop::AnimationNames.AllocatorInstance.Data = local_48;
  *(FName *)(FVar1.Data + 8) = FStack_40;
  *(FName *)(FVar1.Data + 0x10) = local_38;
  *(FName *)(FVar1.Data + 0x18) = FStack_30;
  *(FName *)(FVar1.Data + 0x20) = local_28;
  *(FName *)(FVar1.Data + 0x28) = FStack_20;
  *(FName *)(FVar1.Data + 0x30) = local_18;
  atexit(`dynamic_atexit_destructor_for_'UDS_VM_HUD_ItemDrop::AnimationNames__);
  return;
}

// Bit'' @ 141288530

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// Empty'' @ 141288550

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  FDS_Urls::FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__);
  return;
}

// Empty'' @ 141288580

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_PartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PartyRepo>::Empty__);
  return;
}

// Empty'' @ 1412885a0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__);
  return;
}

// Empty'' @ 1412885c0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__);
  return;
}

// Empty'' @ 1412885e0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_UIData>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_UIData>::Empty__);
  return;
}

// StateName'' @ 141288600

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 141288620

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 141288640

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 141288660

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 141288680

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 1412886a0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 1412886c0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 1412886e0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141288700

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141288720

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141288740

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141288760

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141288780

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 1412887a0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 1412887c0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 1412887e0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141288800

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141288820

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141288840

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141288860

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141288880

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 1412888a0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 1412888c0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 1412888e0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 141288900

void __cdecl _dynamic_initializer_for__CharSortingTypeList__(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  local_res8 = 0x605;
  local_resa = 7;
  CharSortingTypeList.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&CharSortingTypeList.AllocatorInstance,3,&CharSortingTypeList.ArrayMax);
  memcpy(CharSortingTypeList.AllocatorInstance.Data,&local_res8,3);
  atexit(_dynamic_atexit_destructor_for__CharSortingTypeList__);
  return;
}

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141288980

void __cdecl _dynamic_initializer_for__EquipCharSelectSortingTypeList__(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  local_res8 = 0xc0b;
  local_resa = 0xd;
  EquipCharSelectSortingTypeList.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&EquipCharSelectSortingTypeList.AllocatorInstance,3,
             &EquipCharSelectSortingTypeList.ArrayMax);
  memcpy(EquipCharSelectSortingTypeList.AllocatorInstance.Data,&local_res8,3);
  atexit(_dynamic_atexit_destructor_for__EquipCharSelectSortingTypeList__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 141288a00

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 141288a30

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141288a50

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 141288a70

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 141288a90

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 141288ab0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141288ad0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141288af0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141288b10

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 141288b30

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 141288b50

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 141288b70

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 141288b90

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 141288bb0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141288bd0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141288bf0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141288c10

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141288c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 141288cc0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'__UDS_VM_AcceptQuestListSlot___'' @ 141288ce0

void __cdecl _dynamic_initializer_for____UDS_VM_AcceptQuestListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_AcceptQuestListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (AcceptQuestListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_AcceptQuest___'' @ 141288d20

void __cdecl _dynamic_initializer_for____UDS_VM_AcceptQuest_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_AcceptQuest_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(AcceptQuest,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ContextMenuPopup___'' @ 141288d60

void __cdecl _dynamic_initializer_for____UDS_VM_ContextMenuPopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ContextMenuPopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(ContextMenuPopup,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_ActionProgress___'' @ 141288da0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_ActionProgress_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_ActionProgress_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (HUD_ActionProgress,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_BubbleTalk___'' @ 141288de0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_BubbleTalk_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_BubbleTalk_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_BubbleTalk,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_CheatBtn___'' @ 141288e20

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_CheatBtn_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_CheatBtn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_CheatKeyBtn,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_ItemDrop___'' @ 141288e60

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_ItemDrop_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_ItemDrop_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_ItemDrop,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_ItemGroup___'' @ 141288ea0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_ItemGroup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_ItemGroup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_ItemGroup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_MiniMap___'' @ 141288ee0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_MiniMap_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_MiniMap_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Minimap,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_Notification_Message_Slot___'' @ 141288f20

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_Notification_Message_Slot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_Notification_Message_Slot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_HUD_Notification_Message_Slot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_Notification___'' @ 141288f60

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_Notification_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_Notification_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_HUD_Notification_Message,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_PopupCharStatus___'' @ 141288fa0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_PopupCharStatus_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_PopupCharStatus_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (HUD_PopupCharStatus,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_PopupSkillGroup___'' @ 141288fe0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_PopupSkillGroup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_PopupSkillGroup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (HUD_PopupSkillGroup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_PopupSkillSlot___'' @ 141289020

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_PopupSkillSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_PopupSkillSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (HUD_PopupSkillSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_QuickChanger___'' @ 141289060

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_QuickChanger_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_QuickChanger_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_QuickChanger,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_ResurrectButton___'' @ 1412890a0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_ResurrectButton_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_ResurrectButton_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (HUD_ResurrectButton,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_SkillGroup___'' @ 1412890e0

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_SkillGroup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_SkillGroup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_SkillGroup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_SkillSlot___'' @ 141289120

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_SkillSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_SkillSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_SkillSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_HUD_SmallTalk___'' @ 141289160

void __cdecl _dynamic_initializer_for____UDS_VM_HUD_SmallTalk_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_HUD_SmallTalk_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_SmallTalk,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_PartySearchDropBox___'' @ 1412891a0

void __cdecl _dynamic_initializer_for____UDS_VM_PartySearchDropBox_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_PartySearchDropBox_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (PartySearchDropBox,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_PlayerIcon_Popup___'' @ 1412891e0

void __cdecl _dynamic_initializer_for____UDS_VM_PlayerIcon_Popup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_PlayerIcon_Popup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(PlayerIcon_Popup,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_PlayerSkillData___'' @ 141289220

void __cdecl _dynamic_initializer_for____UDS_VM_PlayerSkillData_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_PlayerSkillData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (Data_PlayerSkillData,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_PlayerSkillStatus___'' @ 141289260

void __cdecl _dynamic_initializer_for____UDS_VM_PlayerSkillStatus_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_PlayerSkillStatus_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (PlayerSkill_Status,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Player_IconSlot___'' @ 1412892a0

void __cdecl _dynamic_initializer_for____UDS_VM_Player_IconSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Player_IconSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Player_IconSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestDialogueScene_SelectTalkSlot___'' @ 1412892e0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestDialogueScene_SelectTalkSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestDialogueScene_SelectTalkSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestDialogueScene_SelectTalkSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestDialogueScene___'' @ 141289320

void __cdecl _dynamic_initializer_for____UDS_VM_QuestDialogueScene_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestDialogueScene_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestDialogueScene,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestInfo_Reward___'' @ 141289360

void __cdecl _dynamic_initializer_for____UDS_VM_QuestInfo_Reward_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestInfo_Reward_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestInfo_Reward,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestInfo___'' @ 1412893a0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestInstanceSlot___'' @ 1412893e0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestInstanceSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestInstanceSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestInstnaceSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestInstanceTracker___'' @ 141289420

void __cdecl _dynamic_initializer_for____UDS_VM_QuestInstanceTracker_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestInstanceTracker_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestInstanceTracker,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestLocalListSlot___'' @ 141289460

void __cdecl _dynamic_initializer_for____UDS_VM_QuestLocalListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestLocalListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestLocalListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestLocal___'' @ 1412894a0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestLocal_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestLocal_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestLocal,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMainChapterInfo___'' @ 1412894e0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMainChapterInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMainChapterInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestMainChapterInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMainChapterListSlot___'' @ 141289520

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMainChapterListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMainChapterListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestMainChapterListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMainChapterStepPopup___'' @ 141289560

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMainChapterStepPopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMainChapterStepPopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestMainChapterStepPopup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMainChapterStepSlot___'' @ 1412895a0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMainChapterStepSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMainChapterStepSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestMainChapterStepSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMainCompletePopup___'' @ 1412895e0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMainCompletePopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMainCompletePopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestMainCompletePopup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMainStoryInfo___'' @ 141289620

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMainStoryInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMainStoryInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestMainStoryInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMain___'' @ 141289660

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMain_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMain_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestMain,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMissionListSlot___'' @ 1412896a0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMissionListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMissionListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestMissionListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestMission___'' @ 1412896e0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestMission_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestMission_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestMission,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestRepeatAcceptPopup_ListSlot___'' @ 141289720

void __cdecl _dynamic_initializer_for____UDS_VM_QuestRepeatAcceptPopup_ListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestRepeatAcceptPopup_ListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestRepeatAccepPopup_ListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestRepeatAcceptPopup___'' @ 141289760

void __cdecl _dynamic_initializer_for____UDS_VM_QuestRepeatAcceptPopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestRepeatAcceptPopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestRepeatAcceptPopup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestRepeatData___'' @ 1412897a0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestRepeatData_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestRepeatData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestRepeatData,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestRepeatListSlot___'' @ 1412897e0

void __cdecl _dynamic_initializer_for____UDS_VM_QuestRepeatListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestRepeatListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (QuestRepeatListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestRepeat___'' @ 141289820

void __cdecl _dynamic_initializer_for____UDS_VM_QuestRepeat_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestRepeat_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestRepeat,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_QuestTracker___'' @ 141289860

void __cdecl _dynamic_initializer_for____UDS_VM_QuestTracker_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_QuestTracker_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(QuestTracker,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_SkillDetailSlot___'' @ 1412898a0

void __cdecl _dynamic_initializer_for____UDS_VM_SkillDetailSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_SkillDetailSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(SkillDetailSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_SkillInfo_Panel_DefaultInfo___'' @ 1412898e0

void __cdecl _dynamic_initializer_for____UDS_VM_SkillInfo_Panel_DefaultInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_SkillInfo_Panel_DefaultInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(SkillDetailInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_SkillModeControl___'' @ 141289920

void __cdecl _dynamic_initializer_for____UDS_VM_SkillModeControl_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_SkillModeControl_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(SkillModeControl,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_StackSkillCount___'' @ 141289960

void __cdecl _dynamic_initializer_for____UDS_VM_StackSkillCount_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_StackSkillCount_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(StackSkillCount,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_SummonBossListSlot___'' @ 1412899a0

void __cdecl _dynamic_initializer_for____UDS_VM_SummonBossListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_SummonBossListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (SummonBossListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_SummonBoss___'' @ 1412899e0

void __cdecl _dynamic_initializer_for____UDS_VM_SummonBoss_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_SummonBoss_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(SummonBoss,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_SwimControl___'' @ 141289a20

void __cdecl _dynamic_initializer_for____UDS_VM_SwimControl_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_SwimControl_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(SwimControl,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_SwimSlot___'' @ 141289a60

void __cdecl _dynamic_initializer_for____UDS_VM_SwimSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_SwimSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(SwimSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu_ItemSetList___'' @ 141289aa0

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_ItemSetList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_ItemSetList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (TotalMenu_ItemSetList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu_ItemSet___'' @ 141289ae0

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_ItemSet_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_ItemSet_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (TotalMenu_ItemSet,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu_Item___'' @ 141289b20

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_Item_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_Item_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(TotalMenu_Item,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu_PlayerInfo_IconSlot___'' @ 141289b60

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_PlayerInfo_IconSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_IconSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (TotalMenu_PlayerInfo_IconSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu_PlayerInfo_TabFrame___'' @ 141289ba0

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_PlayerInfo_TabFrame_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (TotalMenu_PlayerInfo_TabFrame,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu_PlayerInfo_Tab___'' @ 141289be0

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_PlayerInfo_Tab_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (TotalMenu_PlayerInfo_Tab,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu_PlayerInfo___'' @ 141289c20

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_PlayerInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (TotalMenu_PlayerInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TotalMenu___'' @ 141289c60

void __cdecl _dynamic_initializer_for____UDS_VM_TotalMenu_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TotalMenu_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(TotalMenu,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_Display_SkillSlot___'' @ 141289ca0

void __cdecl _dynamic_initializer_for____UDS_VM_W_Display_SkillSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_Display_SkillSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (Display_SkillSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_PlayerSkill_SkillInfo___'' @ 141289ce0

void __cdecl _dynamic_initializer_for____UDS_VM_W_PlayerSkill_SkillInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_PlayerSkill_SkillInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_PlayerSkill_SkillInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_PlayerSkill_SkillSlot___'' @ 141289d20

void __cdecl _dynamic_initializer_for____UDS_VM_W_PlayerSkill_SkillSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_PlayerSkill_SkillSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_PlayerSkill_SkillSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_PlayerSkill___'' @ 141289d60

void __cdecl _dynamic_initializer_for____UDS_VM_W_PlayerSkill_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_PlayerSkill_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_PlayerSkill,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_SkillDetailPopup___'' @ 141289da0

void __cdecl _dynamic_initializer_for____UDS_VM_W_SkillDetailPopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_SkillDetailPopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_SkillDetailPopup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_SkillInfo_SkillSlot___'' @ 141289de0

void __cdecl _dynamic_initializer_for____UDS_VM_W_SkillInfo_SkillSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_SkillInfo_SkillSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (SkillInfo_SkillSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_Skill___'' @ 141289e20

void __cdecl _dynamic_initializer_for____UDS_VM_W_Skill_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_Skill_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Skill,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// DestructItems<TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1>,int> @ 14bf334a0

void __cdecl
DestructItems<TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1>,int>
          (TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<FDS_PlayerSkillBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,`FDS_PlayerSkillBaseTableRow::GetByCategory'::__l2::<lambda_2>_>_> @ 14bf341e0

void __cdecl
AlgoImpl::
HeapSortInternal<FDS_PlayerSkillBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,_FDS_PlayerSkillBaseTableRow::GetByCategory_::__l2::<lambda_2>_>_>
          (FDS_PlayerSkillBaseTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,_public:_static_class_TArray<FDS_PlayerSkillBaseTableRow_const_*,TSizedDefaultAllocator<32>_>___cdecl_FDS_PlayerSkillBaseTableRow::GetByCategory(EDS_PlayerSkillCategoryType)_::_2_::<lambda_2>_>
          param_4)

{
  FDS_PlayerSkillBaseTableRow *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14bf342ce:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[(longlong)iVar9 + 2]->Order < param_1[iVar4]->Order) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar4]->Order <= pFVar1->Order) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Order < param_1[iVar6]->Order) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar6]->Order <= pFVar1->Order) goto LAB_14bf342ce;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// IntroSortInternal<FDS_PlayerSkillBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,`FDS_PlayerSkillBaseTableRow::GetByCategory'::__l2::<lambda_2>_>_> @ 14bf34390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDS_PlayerSkillBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,_FDS_PlayerSkillBaseTableRow::GetByCategory_::__l2::<lambda_2>_>_>
          (FDS_PlayerSkillBaseTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,_public:_static_class_TArray<FDS_PlayerSkillBaseTableRow_const_*,TSizedDefaultAllocator<32>_>___cdecl_FDS_PlayerSkillBaseTableRow::GetByCategory(EDS_PlayerSkillCategoryType)_::_2_::<lambda_2>_>
          param_4)

{
  FDS_PlayerSkillBaseTableRow **ppFVar1;
  FDS_PlayerSkillBaseTableRow *pFVar2;
  int iVar3;
  FDS_PlayerSkillBaseTableRow ***pppFVar4;
  FDS_PlayerSkillBaseTableRow **ppFVar5;
  FDS_PlayerSkillBaseTableRow **ppFVar6;
  FDS_PlayerSkillBaseTableRow **ppFVar7;
  FDS_PlayerSkillBaseTableRow **ppFVar8;
  FDS_PlayerSkillBaseTableRow **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDS_PlayerSkillBaseTableRow **local_338;
  FDS_PlayerSkillBaseTableRow **local_328;
  FDS_PlayerSkillBaseTableRow **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_14bf34440:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_14bf34470:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x00014bf34479;
          goto LAB_14bf34487;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar1)->Order <= (*ppFVar6)->Order) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_14bf34543;
      }
LAB_14bf34532:
      local_338 = ppFVar1;
      HeapSortInternal<FDS_PlayerSkillBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerSkillBaseTableRow_const_*,_FDS_PlayerSkillBaseTableRow::GetByCategory_::__l2::<lambda_2>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14bf34543:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x00014bf34479:
  if ((*ppFVar5)->Order <= (*ppFVar8)->Order) goto LAB_14bf34470;
LAB_14bf34487:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar8)->Order <= (*ppFVar6)->Order);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_14bf34470;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_14bf34543;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_14bf34543;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_14bf34532;
  goto LAB_14bf34440;
}

// IsA<FDS_VMC_PlayerSkill_SkillInfo,FDS_ViewModelContext> @ 14bf345f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_VMC_PlayerSkill_SkillInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_VMC_PlayerSkill_SkillInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_VMC_PlayerSkill_SkillSlot,FDS_ViewModelContext> @ 14bf34720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_VMC_PlayerSkill_SkillSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_VMC_PlayerSkill_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_Display_SkillSlot,FDS_ViewModelContext> @ 14bf34850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_Display_SkillSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_Display_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_NotificationInfo,FDS_ViewModelContext> @ 14bf34980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_NotificationInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_NotificationInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_PartySearchDropBox,FDS_ViewModelContext> @ 14bf34ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_PartySearchDropBox,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_PartySearchDropBox::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_PlayerSkillData,FDS_ViewModelContext> @ 14bf34be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_PlayerSkillData,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_PlayerSkillData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_PlayerSkillStatus,FDS_ViewModelContext> @ 14bf34d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_PlayerSkillStatus,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_PlayerSkillStatus::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,FDS_ViewModelContext> @ 14bf34e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,FDS_ViewModelContext>
          (FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_QuestListSlot,FDS_ViewModelContext> @ 14bf34f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_QuestListSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_QuestListSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_QuestMainChapterInfo,FDS_ViewModelContext> @ 14bf350a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_QuestMainChapterInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_QuestMainChapterInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_QuestMainChapterListSlot,FDS_ViewModelContext> @ 14bf351d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_QuestMainChapterListSlot,FDS_ViewModelContext>
          (FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_QuestMainChapterListSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_QuestMainStoryInfo,FDS_ViewModelContext> @ 14bf35300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_QuestMainStoryInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_QuestMainStoryInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_QuickChanger,FDS_ViewModelContext> @ 14bf35430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_QuickChanger,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_QuickChanger::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_ResurrectButton,FDS_ViewModelContext> @ 14bf35560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ResurrectButton,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_ResurrectButton::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SkillData,FDS_ViewModelContext> @ 14bf35690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_SkillData,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SkillData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SkillDetailInfo,FDS_ViewModelContext> @ 14bf357c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_SkillDetailInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SkillDetailInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SkillDetailPopup,FDS_ViewModelContext> @ 14bf358f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_SkillDetailPopup,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SkillDetailPopup::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SkillInfoPanel,FDS_ViewModelContext> @ 14bf35a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_SkillInfoPanel,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SkillInfoPanel::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SkillInfo_SkillSlot,FDS_ViewModelContext> @ 14bf35b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_SkillInfo_SkillSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SkillInfo_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SkillSlot,FDS_ViewModelContext> @ 14bf35c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_SkillSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SwimControl,FDS_ViewModelContext> @ 14bf35db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_SwimControl,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SwimControl::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_SwimSlot,FDS_ViewModelContext> @ 14bf35ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_SwimSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_SwimSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_TotalMenuItem,FDS_ViewModelContext> @ 14bf36010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_TotalMenuItem,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_TotalMenuItem::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_TotalMenuItemSet,FDS_ViewModelContext> @ 14bf36140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_TotalMenuItemSet,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_TotalMenuItemSet::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot,FDS_ViewModelContext> @ 14bf36270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot,FDS_ViewModelContext>
          (FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsA<FDS_ViewModelContext_TotalMenuPlayerInfoTab,FDS_ViewModelContext> @ 14bf363a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_TotalMenuPlayerInfoTab,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = FDS_ViewModelContext_TotalMenuPlayerInfoTab::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar2 = param_1->DerivedStaticStruct, pUVar2 == (UStruct *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsObjectPtrEqual<UDS_VM_W_SkillInfo_SkillSlot,TWeakObjectPtr<UDS_VM_W_SkillInfo_SkillSlot,FWeakObjectPtr>,0> @ 14bf364d0

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<UDS_VM_W_SkillInfo_SkillSlot,TWeakObjectPtr<UDS_VM_W_SkillInfo_SkillSlot,FWeakObjectPtr>,0>
          (TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot> *param_1,
          TWeakObjectPtr<UDS_VM_W_SkillInfo_SkillSlot,FWeakObjectPtr> *param_2)

{
  UDS_VM_W_SkillInfo_SkillSlot *pUVar1;
  
  pUVar1 = (UDS_VM_W_SkillInfo_SkillSlot *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if ((param_1->field0_0x0).DebugPtr == (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
    return pUVar1 == (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == pUVar1;
}

// MakeContext<FDS_VMContext_SkillData> @ 14bf36510

TSharedPtr<FDS_VMContext_SkillData,1> * __cdecl
MakeContext<FDS_VMContext_SkillData>(TSharedPtr<FDS_VMContext_SkillData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_VMContext_SkillData *pFVar3;
  FDS_VMContext_SkillData *pFVar4;
  TSharedPtr<FDS_VMContext_SkillData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_VMContext_SkillData *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_VMContext_SkillData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_VMContext_SkillData *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_VMContext_SkillData__6B_;
    (pFVar3->SkillData).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_VMContext_SkillData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_VMContext_SkillData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_VMContext_SkillData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_VMContext_SkillData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_VMContext_SkillData::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_CharBuffData> @ 14bf36630

TSharedPtr<FDS_ViewModelContext_CharBuffData,1> * __cdecl
MakeContext<FDS_ViewModelContext_CharBuffData>
          (TSharedPtr<FDS_ViewModelContext_CharBuffData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_CharBuffData *pFVar3;
  FDS_ViewModelContext_CharBuffData *pFVar4;
  TSharedPtr<FDS_ViewModelContext_CharBuffData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_CharBuffData *pFVar7;
  undefined8 local_res8;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_CharBuffData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_CharBuffData *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_CharBuffData__6B_;
    pFVar3->NeedBuffCount = 0;
    (pFVar3->Value).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = 0;
    FWeakObjectPtr::operator=(&(pFVar3->Value).WeakPtr,(FObjectPtr)&local_res8);
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_CharBuffData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharBuffData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CharBuffData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_CharBuffData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_CharBuffData::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_CharInfoData> @ 14bf36760

TSharedPtr<FDS_ViewModelContext_CharInfoData,1> * __cdecl
MakeContext<FDS_ViewModelContext_CharInfoData>
          (TSharedPtr<FDS_ViewModelContext_CharInfoData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_CharInfoData *pFVar3;
  FDS_ViewModelContext_CharInfoData *pFVar4;
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_CharInfoData *pFVar7;
  undefined8 local_res8;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_CharInfoData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_CharInfoData *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->CharEntityID = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_CharInfoData__6B_;
    (pFVar3->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = 0;
    FWeakObjectPtr::operator=(&(pFVar3->CharInfoData).WeakPtr,(FObjectPtr)&local_res8);
    pFVar3->CharEntityID = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_CharInfoData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharInfoData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CharInfoData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_CharInfoData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_CharInfoData::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_DropData> @ 14bf36890

TSharedPtr<FDS_ViewModelContext_DropData,1> * __cdecl
MakeContext<FDS_ViewModelContext_DropData>
          (TSharedPtr<FDS_ViewModelContext_DropData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_DropData *pFVar3;
  FDS_ViewModelContext_DropData *pFVar4;
  TSharedPtr<FDS_ViewModelContext_DropData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_DropData *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_DropData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_DropData *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->field_0x24 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_DropData__6B_;
    pFVar3->SlotIndex = 0;
    pFVar3->DropDataUID = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_DropData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_DropData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_DropData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_DropData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_DropData::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_MapTypeInfo> @ 14bf369b0

TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> * __cdecl
MakeContext<FDS_ViewModelContext_MapTypeInfo>
          (TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_MapTypeInfo *pFVar3;
  FDS_ViewModelContext_MapTypeInfo *pFVar4;
  TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_MapTypeInfo *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_MapTypeInfo *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_MapTypeInfo *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->field_0x24 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_MapTypeInfo__6B_;
    pFVar3->MapType = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_MapTypeInfo *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MapTypeInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_MapTypeInfo *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_MapTypeInfo::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_NotificationInfo> @ 14bf36ad0

TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> * __cdecl
MakeContext<FDS_ViewModelContext_NotificationInfo>
          (TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_NotificationInfo *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x90);
  if (pFVar3 == (FDS_ViewModelContext_NotificationInfo *)0x0) {
    pFVar3 = (FDS_ViewModelContext_NotificationInfo *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    *(undefined8 *)&(pFVar3->OnClickNotificationSlot).field_0x14 = 0;
    *(undefined4 *)&pFVar3->field_0x3c = 0;
    *(undefined4 *)&(pFVar3->NotificationMessageText).field_0x1 = 0;
    *(undefined2 *)&(pFVar3->NotificationMessageText).field_0x5 = 0;
    (pFVar3->NotificationMessageText).field_0x7 = 0;
    *(undefined2 *)&(pFVar3->NotificationMessageText).field_0x2d = 0;
    (pFVar3->NotificationMessageText).field_0x2f = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_NotificationInfo__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined8 *)&pFVar3->OnClickNotificationSlot = 0;
    *(undefined8 *)&(pFVar3->OnClickNotificationSlot).field_0x8 = 0;
    *(undefined4 *)&(pFVar3->OnClickNotificationSlot).field_0x10 = 0;
    (pFVar3->NotificationMessageText).StringTableType = None;
    (pFVar3->NotificationMessageText).StringTableID = 0;
    (pFVar3->NotificationMessageText).StringEnumTableNameID.ComparisonIndex = 0;
    (pFVar3->NotificationMessageText).StringEnumTableNameID.Number = 0;
    (pFVar3->NotificationMessageText).DateTime.Ticks = 0;
    (pFVar3->NotificationMessageText).TimeSpan.Ticks = 0;
    (pFVar3->NotificationMessageText).TimeExpressionType = None;
    (pFVar3->NotificationMessageText).IsExpression = false;
    (pFVar3->NotificationMessageText).UniqueString.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar3->NotificationMessageText).UniqueString.Data.ArrayNum = 0;
    (pFVar3->NotificationMessageText).UniqueString.Data.ArrayMax = 0;
    (pFVar3->NotificationMessageText).FormatArgs.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar3->NotificationMessageText).FormatArgs.ArrayNum = 0;
    (pFVar3->NotificationMessageText).FormatArgs.ArrayMax = 0;
  }
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = pFVar3;
  pTVar4 = operator_new(0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NotificationInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_NotificationInfo **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_NotificationInfo *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelContext_NotificationInfo::StaticStruct();
  pFVar3->_padding_ = (longlong)pUVar7;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_PlayerData> @ 14bf36c40

TSharedPtr<FDS_ViewModelContext_PlayerData,1> * __cdecl
MakeContext<FDS_ViewModelContext_PlayerData>
          (TSharedPtr<FDS_ViewModelContext_PlayerData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_PlayerData *pFVar3;
  FDS_ViewModelContext_PlayerData *pFVar4;
  TSharedPtr<FDS_ViewModelContext_PlayerData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_PlayerData *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_PlayerData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_PlayerData *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerData__6B_;
    pFVar3->PlayerEntityID = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_PlayerData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_PlayerData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_PlayerData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_PlayerData::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_PlayerIconSlot> @ 14bf36d60

TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> * __cdecl
MakeContext<FDS_ViewModelContext_PlayerIconSlot>
          (TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_PlayerIconSlot *pFVar3;
  FDS_ViewModelContext_PlayerIconSlot *pFVar4;
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_PlayerIconSlot *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_PlayerIconSlot *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->PlayerIconSlotType = None;
    *(undefined4 *)&pFVar3->field_0x2c = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerIconSlot__6B_;
    pFVar3->PlayerIconID = 0;
    pFVar3->IsSelected = false;
    pFVar3->IsUnLockable = false;
    pFVar3->IsHave = false;
    pFVar3->IsUsing = false;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerIconSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_PlayerIconSlot::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_PlayerSkillStatus> @ 14bf36e80

TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> * __cdecl
MakeContext<FDS_ViewModelContext_PlayerSkillStatus>
          (TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_PlayerSkillStatus *pFVar3;
  FDS_ViewModelContext_PlayerSkillStatus *pFVar4;
  TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_PlayerSkillStatus *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_PlayerSkillStatus *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_PlayerSkillStatus *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x24 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerSkillStatus__6B_;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_PlayerSkillStatus *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerSkillStatus__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_PlayerSkillStatus *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_PlayerSkillStatus::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_QuestMainStoryInfo> @ 14bf36fa0

TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> * __cdecl
MakeContext<FDS_ViewModelContext_QuestMainStoryInfo>
          (TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_QuestMainStoryInfo *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0xc0);
  if (pFVar3 == (FDS_ViewModelContext_QuestMainStoryInfo *)0x0) {
    pFVar3 = (FDS_ViewModelContext_QuestMainStoryInfo *)0x0;
  }
  else {
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&(pFVar3->Title).field_0x1 = 0;
    *(undefined2 *)&(pFVar3->Title).field_0x5 = 0;
    (pFVar3->Title).field_0x7 = 0;
    *(undefined2 *)&(pFVar3->Title).field_0x2d = 0;
    (pFVar3->Title).field_0x2f = 0;
    *(undefined4 *)&(pFVar3->Story).field_0x1 = 0;
    *(undefined2 *)&(pFVar3->Story).field_0x5 = 0;
    (pFVar3->Story).field_0x7 = 0;
    *(undefined2 *)&(pFVar3->Story).field_0x2d = 0;
    (pFVar3->Story).field_0x2f = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_QuestMainStoryInfo__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    (pFVar3->Title).StringTableType = None;
    (pFVar3->Title).StringTableID = 0;
    (pFVar3->Title).StringEnumTableNameID.ComparisonIndex = 0;
    (pFVar3->Title).StringEnumTableNameID.Number = 0;
    (pFVar3->Title).DateTime.Ticks = 0;
    (pFVar3->Title).TimeSpan.Ticks = 0;
    (pFVar3->Title).TimeExpressionType = None;
    (pFVar3->Title).IsExpression = false;
    (pFVar3->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Title).UniqueString.Data.ArrayNum = 0;
    (pFVar3->Title).UniqueString.Data.ArrayMax = 0;
    (pFVar3->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Title).FormatArgs.ArrayNum = 0;
    (pFVar3->Title).FormatArgs.ArrayMax = 0;
    (pFVar3->Story).StringTableType = None;
    (pFVar3->Story).StringTableID = 0;
    (pFVar3->Story).StringEnumTableNameID.ComparisonIndex = 0;
    (pFVar3->Story).StringEnumTableNameID.Number = 0;
    (pFVar3->Story).DateTime.Ticks = 0;
    (pFVar3->Story).TimeSpan.Ticks = 0;
    (pFVar3->Story).TimeExpressionType = None;
    (pFVar3->Story).IsExpression = false;
    (pFVar3->Story).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Story).UniqueString.Data.ArrayNum = 0;
    (pFVar3->Story).UniqueString.Data.ArrayMax = 0;
    (pFVar3->Story).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Story).FormatArgs.ArrayNum = 0;
    (pFVar3->Story).FormatArgs.ArrayMax = 0;
  }
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = pFVar3;
  pTVar4 = operator_new(0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestMainStoryInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_QuestMainStoryInfo **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_QuestMainStoryInfo *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelContext_QuestMainStoryInfo::StaticStruct();
  pFVar3->_padding_ = (longlong)pUVar7;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_QuestObjectiveData> @ 14bf37160

TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> * __cdecl
MakeContext<FDS_ViewModelContext_QuestObjectiveData>
          (TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_QuestObjectiveData *pFVar3;
  FDS_ViewModelContext_QuestObjectiveData *pFVar4;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_QuestObjectiveData *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_QuestObjectiveData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_QuestObjectiveData__6B_;
    pFVar3->QuestID = 0;
    pFVar3->QuestObjectiveID = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestObjectiveData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_QuestObjectiveData::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_SkillData> @ 14bf37280

TSharedPtr<FDS_ViewModelContext_SkillData,1> * __cdecl
MakeContext<FDS_ViewModelContext_SkillData>
          (TSharedPtr<FDS_ViewModelContext_SkillData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_SkillData *pFVar3;
  FDS_ViewModelContext_SkillData *pFVar4;
  TSharedPtr<FDS_ViewModelContext_SkillData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_SkillData *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_SkillData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_SkillData *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillData__6B_;
    (pFVar3->SkillData).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_SkillData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_SkillData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_SkillData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_SkillData::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_SkillDetailInfo> @ 14bf373a0

TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> * __cdecl
MakeContext<FDS_ViewModelContext_SkillDetailInfo>
          (TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_SkillDetailInfo *pFVar3;
  FDS_ViewModelContext_SkillDetailInfo *pFVar4;
  TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_SkillDetailInfo *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_SkillDetailInfo *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_SkillDetailInfo *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x24 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillDetailInfo__6B_;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_SkillDetailInfo *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillDetailInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_SkillDetailInfo *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_SkillDetailInfo::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_SkillSlot> @ 14bf374c0

TSharedPtr<FDS_ViewModelContext_SkillSlot,1> * __cdecl
MakeContext<FDS_ViewModelContext_SkillSlot>
          (TSharedPtr<FDS_ViewModelContext_SkillSlot,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_SkillSlot *pFVar3;
  FDS_ViewModelContext_SkillSlot *pFVar4;
  TSharedPtr<FDS_ViewModelContext_SkillSlot,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_SkillSlot *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x38);
  pFVar4 = (FDS_ViewModelContext_SkillSlot *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_SkillSlot *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->field_0x31 = 0;
    *(undefined2 *)&pFVar3->field_0x35 = 0;
    pFVar3->field_0x37 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillSlot__6B_;
    (pFVar3->SkillData).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar3->SlotIndex = 0;
    pFVar3->StackCountPosition = 0;
    pFVar3->bShowInputKey = false;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_SkillSlot *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_SkillSlot *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_SkillSlot,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_SkillSlot::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_Smite> @ 14bf375f0

TSharedPtr<FDS_ViewModelContext_Smite,1> * __cdecl
MakeContext<FDS_ViewModelContext_Smite>
          (TSharedPtr<FDS_ViewModelContext_Smite,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_Smite *pFVar3;
  FDS_ViewModelContext_Smite *pFVar4;
  TSharedPtr<FDS_ViewModelContext_Smite,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_Smite *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_Smite *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_Smite *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined8 *)((longlong)&pFVar3->TargetEntityID + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x2c = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_Smite__6B_;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_Smite *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Smite__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_Smite *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_Smite,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_Smite::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_SwimControl> @ 14bf37710

TSharedPtr<FDS_ViewModelContext_SwimControl,1> * __cdecl
MakeContext<FDS_ViewModelContext_SwimControl>
          (TSharedPtr<FDS_ViewModelContext_SwimControl,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_SwimControl *pFVar3;
  FDS_ViewModelContext_SwimControl *pFVar4;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_SwimControl *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_SwimControl *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_SwimControl *)0x0) {
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x21 = 0;
    *(undefined2 *)&pFVar3->field_0x25 = 0;
    pFVar3->field_0x27 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_SwimControl__6B_;
    pFVar3->SwimControlType = Surface;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_SwimControl *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SwimControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_SwimControl *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_SwimControl,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_SwimControl::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_TotalMenuItemSet> @ 14bf37840

TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> * __cdecl
MakeContext<FDS_ViewModelContext_TotalMenuItemSet>
          (TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_TotalMenuItemSet *pFVar3;
  FDS_ViewModelContext_TotalMenuItemSet *pFVar4;
  TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_TotalMenuItemSet *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_TotalMenuItemSet *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_TotalMenuItemSet *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItemSet__6B_;
    (pFVar3->TotalMenuIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->TotalMenuIds).ArrayNum = 0;
    (pFVar3->TotalMenuIds).ArrayMax = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_TotalMenuItemSet *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItemSet__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_TotalMenuItemSet *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_TotalMenuItemSet::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MakeContext<FDS_ViewModelContext_TotalMenuPlayerInfoTab> @ 14bf37960

TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> * __cdecl
MakeContext<FDS_ViewModelContext_TotalMenuPlayerInfoTab>
          (TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_TotalMenuPlayerInfoTab *pFVar3;
  FDS_ViewModelContext_TotalMenuPlayerInfoTab *pFVar4;
  TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_TotalMenuPlayerInfoTab *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  pFVar4 = (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined8 *)&pFVar3->IsSelected = 0;
    *(undefined4 *)((longlong)&pFVar3->TabNameStringUiID + 4) = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuPlayerInfoTab__6B_;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuPlayerInfoTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_TotalMenuPlayerInfoTab::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Merge<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,`UDS_VM_TotalMenu::SetFunctionList'::__l2::<lambda_1>_>_> @ 14bf37a80

void __cdecl
AlgoImpl::
Merge<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu::SetFunctionList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTotalMenuTableRow **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu::SetFunctionList(void)_::_2_::<lambda_1>_>
          param_5)

{
  FDS_ContentsTotalMenuTableRow **ppFVar1;
  FDS_ContentsTotalMenuTableRow *pFVar2;
  int iVar3;
  FDS_ContentsTotalMenuTableRow **ppFVar4;
  FDS_ContentsTotalMenuTableRow **ppFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FDS_ContentsTotalMenuTableRow **ppFVar12;
  FDS_ContentsTotalMenuTableRow **ppFVar13;
  FDS_ContentsTotalMenuTableRow **ppFVar5;
  
  if (0 < param_2) {
    iVar8 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - iVar8) {
        uVar9 = param_2 - iVar8;
        do {
          iVar3 = (uVar9 >> 1) + iVar11;
          if (param_1[(longlong)iVar3 + (longlong)iVar8]->Order <= param_1[param_2]->Order) {
            iVar11 = iVar3 + (uVar9 & 1);
          }
          uVar10 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar10 != 0);
      }
      iVar8 = iVar8 + iVar11;
      if (param_2 <= iVar8) {
        return;
      }
      iVar11 = 0;
      ppFVar1 = param_1 + iVar8;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar11 = 0;
        do {
          uVar10 = uVar9 >> 1;
          if (param_1[(longlong)(int)(uVar10 + iVar11) + (longlong)param_2]->Order <
              (*ppFVar1)->Order) {
            iVar11 = uVar10 + iVar11 + (uVar9 & 1);
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      iVar7 = (iVar11 - iVar8) + param_2;
      iVar3 = param_2 - iVar8;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        ppFVar4 = ppFVar1 + iVar3;
        ppFVar12 = ppFVar1;
        ppFVar5 = ppFVar1 + iVar3;
        do {
          while( true ) {
            ppFVar6 = ppFVar4 + 1;
            ppFVar13 = ppFVar12 + 1;
            pFVar2 = *ppFVar12;
            *ppFVar12 = *ppFVar4;
            *ppFVar4 = pFVar2;
            ppFVar12 = ppFVar13;
            if (ppFVar6 == ppFVar1 + iVar7) break;
            ppFVar4 = ppFVar6;
            if (ppFVar13 == ppFVar5) {
              ppFVar5 = ppFVar6;
            }
          }
          ppFVar4 = ppFVar5;
        } while (ppFVar13 != ppFVar5);
      }
      param_2 = param_2 + iVar11;
      iVar8 = iVar8 + 1 + iVar11;
    } while (iVar8 < param_2);
  }
  return;
}

// Merge<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,`UDS_VM_TotalMenu_ItemSetList::SetMainList'::__l2::<lambda_1>_>_> @ 14bf37be0

void __cdecl
AlgoImpl::
Merge<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu_ItemSetList::SetMainList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTotalMenuTableRow **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu_ItemSetList::SetMainList(void)_::_2_::<lambda_1>_>
          param_5)

{
  FDS_ContentsTotalMenuTableRow **ppFVar1;
  FDS_ContentsTotalMenuTableRow *pFVar2;
  int iVar3;
  FDS_ContentsTotalMenuTableRow **ppFVar4;
  FDS_ContentsTotalMenuTableRow **ppFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FDS_ContentsTotalMenuTableRow **ppFVar12;
  FDS_ContentsTotalMenuTableRow **ppFVar13;
  FDS_ContentsTotalMenuTableRow **ppFVar5;
  
  if (0 < param_2) {
    iVar8 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - iVar8) {
        uVar9 = param_2 - iVar8;
        do {
          iVar3 = (uVar9 >> 1) + iVar11;
          if (param_1[(longlong)iVar3 + (longlong)iVar8]->Order <= param_1[param_2]->Order) {
            iVar11 = iVar3 + (uVar9 & 1);
          }
          uVar10 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar10 != 0);
      }
      iVar8 = iVar8 + iVar11;
      if (param_2 <= iVar8) {
        return;
      }
      iVar11 = 0;
      ppFVar1 = param_1 + iVar8;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar11 = 0;
        do {
          uVar10 = uVar9 >> 1;
          if (param_1[(longlong)(int)(uVar10 + iVar11) + (longlong)param_2]->Order <
              (*ppFVar1)->Order) {
            iVar11 = uVar10 + iVar11 + (uVar9 & 1);
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      iVar7 = (iVar11 - iVar8) + param_2;
      iVar3 = param_2 - iVar8;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        ppFVar4 = ppFVar1 + iVar3;
        ppFVar12 = ppFVar1;
        ppFVar5 = ppFVar1 + iVar3;
        do {
          while( true ) {
            ppFVar6 = ppFVar4 + 1;
            ppFVar13 = ppFVar12 + 1;
            pFVar2 = *ppFVar12;
            *ppFVar12 = *ppFVar4;
            *ppFVar4 = pFVar2;
            ppFVar12 = ppFVar13;
            if (ppFVar6 == ppFVar1 + iVar7) break;
            ppFVar4 = ppFVar6;
            if (ppFVar13 == ppFVar5) {
              ppFVar5 = ppFVar6;
            }
          }
          ppFVar4 = ppFVar5;
        } while (ppFVar13 != ppFVar5);
      }
      param_2 = param_2 + iVar11;
      iVar8 = iVar8 + 1 + iVar11;
    } while (iVar8 < param_2);
  }
  return;
}

// Merge<FDS_MoneyBaseTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,`UDS_VM_TotalMenu_PlayerInfo::SetCoin'::__l2::<lambda_1>_>_> @ 14bf37d40

void __cdecl
AlgoImpl::
Merge<FDS_MoneyBaseTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetCoin_::__l2::<lambda_1>_>_>
          (FDS_MoneyBaseTableRow **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu_PlayerInfo::SetCoin(void)_::_2_::<lambda_1>_>
          param_5)

{
  FDS_MoneyBaseTableRow **ppFVar1;
  FDS_MoneyBaseTableRow *pFVar2;
  int iVar3;
  FDS_MoneyBaseTableRow **ppFVar4;
  FDS_MoneyBaseTableRow **ppFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FDS_MoneyBaseTableRow **ppFVar12;
  FDS_MoneyBaseTableRow **ppFVar13;
  FDS_MoneyBaseTableRow **ppFVar5;
  
  if (0 < param_2) {
    iVar8 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - iVar8) {
        uVar9 = param_2 - iVar8;
        do {
          iVar3 = (uVar9 >> 1) + iVar11;
          if (param_1[(longlong)iVar3 + (longlong)iVar8]->VisibleOrder <=
              param_1[param_2]->VisibleOrder) {
            iVar11 = iVar3 + (uVar9 & 1);
          }
          uVar10 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar10 != 0);
      }
      iVar8 = iVar8 + iVar11;
      if (param_2 <= iVar8) {
        return;
      }
      iVar11 = 0;
      ppFVar1 = param_1 + iVar8;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar11 = 0;
        do {
          uVar10 = uVar9 >> 1;
          if (param_1[(longlong)(int)(uVar10 + iVar11) + (longlong)param_2]->VisibleOrder <
              (*ppFVar1)->VisibleOrder) {
            iVar11 = uVar10 + iVar11 + (uVar9 & 1);
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      iVar7 = (iVar11 - iVar8) + param_2;
      iVar3 = param_2 - iVar8;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        ppFVar4 = ppFVar1 + iVar3;
        ppFVar12 = ppFVar1;
        ppFVar5 = ppFVar1 + iVar3;
        do {
          while( true ) {
            ppFVar6 = ppFVar4 + 1;
            ppFVar13 = ppFVar12 + 1;
            pFVar2 = *ppFVar12;
            *ppFVar12 = *ppFVar4;
            *ppFVar4 = pFVar2;
            ppFVar12 = ppFVar13;
            if (ppFVar6 == ppFVar1 + iVar7) break;
            ppFVar4 = ppFVar6;
            if (ppFVar13 == ppFVar5) {
              ppFVar5 = ppFVar6;
            }
          }
          ppFVar4 = ppFVar5;
        } while (ppFVar13 != ppFVar5);
      }
      param_2 = param_2 + iVar11;
      iVar8 = iVar8 + 1 + iVar11;
    } while (iVar8 < param_2);
  }
  return;
}

// Merge<FDS_StatusTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_StatusTableRow_const_*,`UDS_VM_TotalMenu_PlayerInfo::SetStatus'::__l2::<lambda_1>_>_> @ 14bf37ea0

void __cdecl
AlgoImpl::
Merge<FDS_StatusTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_StatusTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetStatus_::__l2::<lambda_1>_>_>
          (FDS_StatusTableRow **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FDS_StatusTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu_PlayerInfo::SetStatus(void)_::_2_::<lambda_1>_>
          param_5)

{
  FDS_StatusTableRow **ppFVar1;
  FDS_StatusTableRow *pFVar2;
  int iVar3;
  FDS_StatusTableRow **ppFVar4;
  FDS_StatusTableRow **ppFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FDS_StatusTableRow **ppFVar12;
  FDS_StatusTableRow **ppFVar13;
  FDS_StatusTableRow **ppFVar5;
  
  if (0 < param_2) {
    iVar8 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - iVar8) {
        uVar9 = param_2 - iVar8;
        do {
          iVar3 = (uVar9 >> 1) + iVar11;
          if (param_1[param_2]->PlayerInfoViewOrder <=
              param_1[(longlong)iVar3 + (longlong)iVar8]->PlayerInfoViewOrder) {
            iVar11 = iVar3 + (uVar9 & 1);
          }
          uVar10 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar10 != 0);
      }
      iVar8 = iVar8 + iVar11;
      if (param_2 <= iVar8) {
        return;
      }
      iVar11 = 0;
      ppFVar1 = param_1 + iVar8;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar11 = 0;
        do {
          uVar10 = uVar9 >> 1;
          if ((*ppFVar1)->PlayerInfoViewOrder <
              param_1[(longlong)(int)(uVar10 + iVar11) + (longlong)param_2]->PlayerInfoViewOrder) {
            iVar11 = uVar10 + iVar11 + (uVar9 & 1);
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      iVar7 = (iVar11 - iVar8) + param_2;
      iVar3 = param_2 - iVar8;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        ppFVar4 = ppFVar1 + iVar3;
        ppFVar12 = ppFVar1;
        ppFVar5 = ppFVar1 + iVar3;
        do {
          while( true ) {
            ppFVar6 = ppFVar4 + 1;
            ppFVar13 = ppFVar12 + 1;
            pFVar2 = *ppFVar12;
            *ppFVar12 = *ppFVar4;
            *ppFVar4 = pFVar2;
            ppFVar12 = ppFVar13;
            if (ppFVar6 == ppFVar1 + iVar7) break;
            ppFVar4 = ppFVar6;
            if (ppFVar13 == ppFVar5) {
              ppFVar5 = ppFVar6;
            }
          }
          ppFVar4 = ppFVar5;
        } while (ppFVar13 != ppFVar5);
      }
      param_2 = param_2 + iVar11;
      iVar8 = iVar8 + 1 + iVar11;
    } while (iVar8 < param_2);
  }
  return;
}

// NewObject<UDS_M_SummonBoss> @ 14bf38010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_M_SummonBoss * __cdecl NewObject<UDS_M_SummonBoss>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_M_SummonBoss *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_M_SummonBoss_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_M_SummonBoss *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PlayerIconSlotImplBase> @ 14bf380b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PlayerIconSlotImplBase * __cdecl NewObject<UDS_PlayerIconSlotImplBase>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PlayerIconSlotImplBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PlayerIconSlotImplBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PlayerIconSlotImplBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PlayerIconSlotImplChangeable> @ 14bf38150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PlayerIconSlotImplChangeable * __cdecl
NewObject<UDS_PlayerIconSlotImplChangeable>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PlayerIconSlotImplChangeable *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PlayerIconSlotImplChangeable_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PlayerIconSlotImplChangeable *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PlayerIconSlotImplSelectable> @ 14bf381f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PlayerIconSlotImplSelectable * __cdecl
NewObject<UDS_PlayerIconSlotImplSelectable>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PlayerIconSlotImplSelectable *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PlayerIconSlotImplSelectable_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PlayerIconSlotImplSelectable *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_TotalMenuEvent> @ 14bf38290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_TotalMenuEvent * __cdecl NewObject<UDS_TotalMenuEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_TotalMenuEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_TotalMenuEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_TotalMenuEvent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_CharBuffData> @ 14bf38330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_CharBuffData * __cdecl
NewObject<UDS_VM_CharBuffData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_CharBuffData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_CharBuffData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_CharBuffData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_CharInfoData> @ 14bf38430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_CharInfoData * __cdecl
NewObject<UDS_VM_CharInfoData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_CharInfoData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_CharInfoData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_CharInfoData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_DropData> @ 14bf38530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_DropData * __cdecl
NewObject<UDS_VM_DropData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_DropData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_DropData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_DropData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_HUD_Notification_Icon> @ 14bf38630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_HUD_Notification_Icon * __cdecl
NewObject<UDS_VM_HUD_Notification_Icon>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_HUD_Notification_Icon *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_HUD_Notification_Icon_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_HUD_Notification_Icon *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_HUD_QuickChanger> @ 14bf38730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_HUD_QuickChanger * __cdecl
NewObject<UDS_VM_HUD_QuickChanger>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_HUD_QuickChanger *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_HUD_QuickChanger_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_HUD_QuickChanger *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_HUD_SkillSlot> @ 14bf38830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_HUD_SkillSlot * __cdecl
NewObject<UDS_VM_HUD_SkillSlot>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_HUD_SkillSlot *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_HUD_SkillSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_HUD_SkillSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_MapSpawn> @ 14bf38930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MapSpawn * __cdecl
NewObject<UDS_VM_MapSpawn>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_MapSpawn *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_MapSpawn_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_MapSpawn *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_MapTexture> @ 14bf38a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MapTexture * __cdecl
NewObject<UDS_VM_MapTexture>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_MapTexture *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_MapTexture_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_MapTexture *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_MountControl> @ 14bf38b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MountControl * __cdecl
NewObject<UDS_VM_MountControl>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_MountControl *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_MountControl_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_MountControl *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_OpenPopupTicketCharge> @ 14bf38c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_OpenPopupTicketCharge * __cdecl
NewObject<UDS_VM_OpenPopupTicketCharge>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_OpenPopupTicketCharge *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_OpenPopupTicketCharge_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_OpenPopupTicketCharge *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_PlayerSkillStatus> @ 14bf38d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_PlayerSkillStatus * __cdecl
NewObject<UDS_VM_PlayerSkillStatus>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_PlayerSkillStatus *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_PlayerSkillStatus_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_PlayerSkillStatus *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_Player_IconSlot> @ 14bf38e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Player_IconSlot * __cdecl
NewObject<UDS_VM_Player_IconSlot>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_Player_IconSlot *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_Player_IconSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_Player_IconSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_QuestInfo_Reward> @ 14bf38f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestInfo_Reward * __cdecl
NewObject<UDS_VM_QuestInfo_Reward>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_QuestInfo_Reward *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_QuestInfo_Reward_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_QuestInfo_Reward *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_QuestMainChapterInfo> @ 14bf39030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestMainChapterInfo * __cdecl
NewObject<UDS_VM_QuestMainChapterInfo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_QuestMainChapterInfo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_QuestMainChapterInfo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_QuestMainChapterInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_QuestMainChapterStepPopup> @ 14bf39130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestMainChapterStepPopup * __cdecl
NewObject<UDS_VM_QuestMainChapterStepPopup>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_QuestMainChapterStepPopup *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_QuestMainChapterStepPopup_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_QuestMainChapterStepPopup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_QuestMainStoryInfo> @ 14bf39230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestMainStoryInfo * __cdecl
NewObject<UDS_VM_QuestMainStoryInfo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_QuestMainStoryInfo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_QuestMainStoryInfo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_QuestMainStoryInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_QuestObjectiveData> @ 14bf39330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestObjectiveData * __cdecl
NewObject<UDS_VM_QuestObjectiveData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_QuestObjectiveData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_QuestObjectiveData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_QuestObjectiveData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_QuestRepeatData> @ 14bf39430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestRepeatData * __cdecl
NewObject<UDS_VM_QuestRepeatData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_QuestRepeatData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_QuestRepeatData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_QuestRepeatData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_SkillData> @ 14bf39530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SkillData * __cdecl
NewObject<UDS_VM_SkillData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_SkillData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_SkillData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_SkillData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_SkillInfo_Panel> @ 14bf39630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SkillInfo_Panel * __cdecl
NewObject<UDS_VM_SkillInfo_Panel>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_SkillInfo_Panel *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_SkillInfo_Panel_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_SkillInfo_Panel *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_SkillModeControl> @ 14bf39730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SkillModeControl * __cdecl
NewObject<UDS_VM_SkillModeControl>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_SkillModeControl *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_SkillModeControl_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_SkillModeControl *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_StackSkillCount> @ 14bf39830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_StackSkillCount * __cdecl
NewObject<UDS_VM_StackSkillCount>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_StackSkillCount *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_StackSkillCount_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_StackSkillCount *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_SwimControl> @ 14bf39930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SwimControl * __cdecl
NewObject<UDS_VM_SwimControl>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_SwimControl *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_SwimControl_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_SwimControl *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_SwimSlot> @ 14bf39a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SwimSlot * __cdecl
NewObject<UDS_VM_SwimSlot>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_SwimSlot *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_SwimSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_SwimSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_TotalMenu_ItemSetList> @ 14bf39b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TotalMenu_ItemSetList * __cdecl
NewObject<UDS_VM_TotalMenu_ItemSetList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_TotalMenu_ItemSetList *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_ItemSetList_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_TotalMenu_ItemSetList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_TotalMenu_PlayerInfo_Tab> @ 14bf39c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TotalMenu_PlayerInfo_Tab * __cdecl
NewObject<UDS_VM_TotalMenu_PlayerInfo_Tab>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_TotalMenu_PlayerInfo_Tab *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_TotalMenu_PlayerInfo_Tab *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_TotalMenu_PlayerInfo_TabFrame> @ 14bf39d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TotalMenu_PlayerInfo_TabFrame * __cdecl
NewObject<UDS_VM_TotalMenu_PlayerInfo_TabFrame>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_TotalMenu_PlayerInfo_TabFrame *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_W_AirWalk> @ 14bf39e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_AirWalk * __cdecl
NewObject<UDS_VM_W_AirWalk>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_AirWalk *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_W_AirWalk_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_W_AirWalk *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_W_AirWalkSlot_Jump> @ 14bf39f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_AirWalkSlot_Jump * __cdecl
NewObject<UDS_VM_W_AirWalkSlot_Jump>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_AirWalkSlot_Jump *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Jump_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_W_AirWalkSlot_Jump *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_W_Avoid> @ 14bf3a030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_Avoid * __cdecl
NewObject<UDS_VM_W_Avoid>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_Avoid *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_W_Avoid_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_W_Avoid *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_W_HUD_QuestMenu> @ 14bf3a130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_HUD_QuestMenu * __cdecl
NewObject<UDS_VM_W_HUD_QuestMenu>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_HUD_QuestMenu *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_W_HUD_QuestMenu_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_W_HUD_QuestMenu *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_W_InventoryBag> @ 14bf3a230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_InventoryBag * __cdecl
NewObject<UDS_VM_W_InventoryBag>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_InventoryBag *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_W_InventoryBag_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_W_InventoryBag *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_VM_W_PlayerSkill_SkillInfo> @ 14bf3a330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_PlayerSkill_SkillInfo * __cdecl
NewObject<UDS_VM_W_PlayerSkill_SkillInfo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_PlayerSkill_SkillInfo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_VM_W_PlayerSkill_SkillInfo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDS_VM_W_PlayerSkill_SkillInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RotateInternal<FDS_ContentsTotalMenuTableRow_const_*> @ 14bf3acb0

int __cdecl
AlgoImpl::RotateInternal<FDS_ContentsTotalMenuTableRow_const_*>
          (FDS_ContentsTotalMenuTableRow **param_1,int param_2,int param_3)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  FDS_ContentsTotalMenuTableRow **ppFVar2;
  FDS_ContentsTotalMenuTableRow **ppFVar4;
  FDS_ContentsTotalMenuTableRow **ppFVar5;
  FDS_ContentsTotalMenuTableRow **ppFVar6;
  FDS_ContentsTotalMenuTableRow **ppFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    ppFVar2 = param_1 + param_3;
    ppFVar5 = param_1;
    ppFVar3 = param_1 + param_3;
    do {
      while( true ) {
        ppFVar4 = ppFVar2 + 1;
        ppFVar6 = ppFVar5 + 1;
        pFVar1 = *ppFVar5;
        *ppFVar5 = *ppFVar2;
        *ppFVar2 = pFVar1;
        ppFVar5 = ppFVar6;
        if (ppFVar4 == param_1 + param_2) break;
        ppFVar2 = ppFVar4;
        if (ppFVar6 == ppFVar3) {
          ppFVar3 = ppFVar4;
        }
      }
      ppFVar2 = ppFVar3;
    } while (ppFVar6 != ppFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<FDS_MoneyBaseTableRow_const_*> @ 14bf3ad30

int __cdecl
AlgoImpl::RotateInternal<FDS_MoneyBaseTableRow_const_*>
          (FDS_MoneyBaseTableRow **param_1,int param_2,int param_3)

{
  FDS_MoneyBaseTableRow *pFVar1;
  FDS_MoneyBaseTableRow **ppFVar2;
  FDS_MoneyBaseTableRow **ppFVar4;
  FDS_MoneyBaseTableRow **ppFVar5;
  FDS_MoneyBaseTableRow **ppFVar6;
  FDS_MoneyBaseTableRow **ppFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    ppFVar2 = param_1 + param_3;
    ppFVar5 = param_1;
    ppFVar3 = param_1 + param_3;
    do {
      while( true ) {
        ppFVar4 = ppFVar2 + 1;
        ppFVar6 = ppFVar5 + 1;
        pFVar1 = *ppFVar5;
        *ppFVar5 = *ppFVar2;
        *ppFVar2 = pFVar1;
        ppFVar5 = ppFVar6;
        if (ppFVar4 == param_1 + param_2) break;
        ppFVar2 = ppFVar4;
        if (ppFVar6 == ppFVar3) {
          ppFVar3 = ppFVar4;
        }
      }
      ppFVar2 = ppFVar3;
    } while (ppFVar6 != ppFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<FDS_StatusTableRow_const_*> @ 14bf3adb0

int __cdecl
AlgoImpl::RotateInternal<FDS_StatusTableRow_const_*>
          (FDS_StatusTableRow **param_1,int param_2,int param_3)

{
  FDS_StatusTableRow *pFVar1;
  FDS_StatusTableRow **ppFVar2;
  FDS_StatusTableRow **ppFVar4;
  FDS_StatusTableRow **ppFVar5;
  FDS_StatusTableRow **ppFVar6;
  FDS_StatusTableRow **ppFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    ppFVar2 = param_1 + param_3;
    ppFVar5 = param_1;
    ppFVar3 = param_1 + param_3;
    do {
      while( true ) {
        ppFVar4 = ppFVar2 + 1;
        ppFVar6 = ppFVar5 + 1;
        pFVar1 = *ppFVar5;
        *ppFVar5 = *ppFVar2;
        *ppFVar2 = pFVar1;
        ppFVar5 = ppFVar6;
        if (ppFVar4 == param_1 + param_2) break;
        ppFVar2 = ppFVar4;
        if (ppFVar6 == ppFVar3) {
          ppFVar3 = ppFVar4;
        }
      }
      ppFVar2 = ppFVar3;
    } while (ppFVar6 != ppFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// SafeCast<FDS_VMC_PlayerSkill_SkillInfo> @ 14bf3ae30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_VMC_PlayerSkill_SkillInfo,1> * __cdecl
SafeCast<FDS_VMC_PlayerSkill_SkillInfo>
          (TSharedPtr<FDS_VMC_PlayerSkill_SkillInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_VMC_PlayerSkill_SkillInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_VMC_PlayerSkill_SkillInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3af7f;
  }
  pUVar6 = FDS_VMC_PlayerSkill_SkillInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_VMC_PlayerSkill_SkillInfo,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3af74:
    __return_storage_ptr__->Object = (FDS_VMC_PlayerSkill_SkillInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3af74;
    __return_storage_ptr__->Object = (FDS_VMC_PlayerSkill_SkillInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3af7f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_VMC_PlayerSkill_SkillSlot> @ 14bf3afc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1> * __cdecl
SafeCast<FDS_VMC_PlayerSkill_SkillSlot>
          (TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_VMC_PlayerSkill_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3b10f;
  }
  pUVar6 = FDS_VMC_PlayerSkill_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3b104:
    __return_storage_ptr__->Object = (FDS_VMC_PlayerSkill_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3b104;
    __return_storage_ptr__->Object = (FDS_VMC_PlayerSkill_SkillSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3b10f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_Display_SkillSlot> @ 14bf3b150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_Display_SkillSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_Display_SkillSlot>
          (TSharedPtr<FDS_ViewModelContext_Display_SkillSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Display_SkillSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Display_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3b29f;
  }
  pUVar6 = FDS_ViewModelContext_Display_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_Display_SkillSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3b294:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Display_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3b294;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Display_SkillSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3b29f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_NotificationInfo> @ 14bf3b2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_NotificationInfo>
          (TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_NotificationInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3b42f;
  }
  pUVar6 = FDS_ViewModelContext_NotificationInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3b424:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_NotificationInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3b424;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_NotificationInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3b42f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_PartySearchDropBox> @ 14bf3b470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_PartySearchDropBox,1> * __cdecl
SafeCast<FDS_ViewModelContext_PartySearchDropBox>
          (TSharedPtr<FDS_ViewModelContext_PartySearchDropBox,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_PartySearchDropBox,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PartySearchDropBox *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3b5bf;
  }
  pUVar6 = FDS_ViewModelContext_PartySearchDropBox::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_PartySearchDropBox,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3b5b4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PartySearchDropBox *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3b5b4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PartySearchDropBox *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3b5bf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_PlayerSkillData> @ 14bf3b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_PlayerSkillData,1> * __cdecl
SafeCast<FDS_ViewModelContext_PlayerSkillData>
          (TSharedPtr<FDS_ViewModelContext_PlayerSkillData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_PlayerSkillData,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PlayerSkillData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3b74f;
  }
  pUVar6 = FDS_ViewModelContext_PlayerSkillData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_PlayerSkillData,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3b744:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PlayerSkillData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3b744;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PlayerSkillData *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3b74f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_PlayerSkillStatus> @ 14bf3b790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> * __cdecl
SafeCast<FDS_ViewModelContext_PlayerSkillStatus>
          (TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PlayerSkillStatus *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3b8df;
  }
  pUVar6 = FDS_ViewModelContext_PlayerSkillStatus::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3b8d4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PlayerSkillStatus *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3b8d4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_PlayerSkillStatus *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3b8df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot> @ 14bf3b920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot>
          (TSharedPtr<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,1>
           *__return_storage_ptr__,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3ba6f;
  }
  pUVar6 = FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3ba64:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3ba64;
    __return_storage_ptr__->Object =
         (FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3ba6f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_QuestListSlot> @ 14bf3bab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_QuestListSlot>
          (TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestListSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3bbff;
  }
  pUVar6 = FDS_ViewModelContext_QuestListSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3bbf4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestListSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3bbf4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestListSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3bbff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_QuestMainChapterInfo> @ 14bf3bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_QuestMainChapterInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_QuestMainChapterInfo>
          (TSharedPtr<FDS_ViewModelContext_QuestMainChapterInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_QuestMainChapterInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainChapterInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3bd8f;
  }
  pUVar6 = FDS_ViewModelContext_QuestMainChapterInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_QuestMainChapterInfo,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3bd84:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainChapterInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3bd84;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainChapterInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3bd8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_QuestMainChapterListSlot> @ 14bf3bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_QuestMainChapterListSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_QuestMainChapterListSlot>
          (TSharedPtr<FDS_ViewModelContext_QuestMainChapterListSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_QuestMainChapterListSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainChapterListSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3bf1f;
  }
  pUVar6 = FDS_ViewModelContext_QuestMainChapterListSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_QuestMainChapterListSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3bf14:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainChapterListSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3bf14;
    __return_storage_ptr__->Object =
         (FDS_ViewModelContext_QuestMainChapterListSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3bf1f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_QuestMainStoryInfo> @ 14bf3bf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_QuestMainStoryInfo>
          (TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainStoryInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3c0af;
  }
  pUVar6 = FDS_ViewModelContext_QuestMainStoryInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3c0a4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainStoryInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3c0a4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuestMainStoryInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3c0af:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_QuickChanger> @ 14bf3c0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_QuickChanger,1> * __cdecl
SafeCast<FDS_ViewModelContext_QuickChanger>
          (TSharedPtr<FDS_ViewModelContext_QuickChanger,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_QuickChanger,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuickChanger *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3c23f;
  }
  pUVar6 = FDS_ViewModelContext_QuickChanger::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_QuickChanger,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3c234:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuickChanger *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3c234;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_QuickChanger *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3c23f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ResurrectButton> @ 14bf3c280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ResurrectButton,1> * __cdecl
SafeCast<FDS_ViewModelContext_ResurrectButton>
          (TSharedPtr<FDS_ViewModelContext_ResurrectButton,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ResurrectButton,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ResurrectButton *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3c3cf;
  }
  pUVar6 = FDS_ViewModelContext_ResurrectButton::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ResurrectButton,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3c3c4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ResurrectButton *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3c3c4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ResurrectButton *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3c3cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SkillData> @ 14bf3c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SkillData,1> * __cdecl
SafeCast<FDS_ViewModelContext_SkillData>
          (TSharedPtr<FDS_ViewModelContext_SkillData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SkillData,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3c55f;
  }
  pUVar6 = FDS_ViewModelContext_SkillData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SkillData,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3c554:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3c554;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillData *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3c55f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SkillDetailInfo> @ 14bf3c5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_SkillDetailInfo>
          (TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillDetailInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3c6ef;
  }
  pUVar6 = FDS_ViewModelContext_SkillDetailInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3c6e4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillDetailInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3c6e4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillDetailInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3c6ef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SkillDetailPopup> @ 14bf3c730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SkillDetailPopup,1> * __cdecl
SafeCast<FDS_ViewModelContext_SkillDetailPopup>
          (TSharedPtr<FDS_ViewModelContext_SkillDetailPopup,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SkillDetailPopup,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillDetailPopup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3c87f;
  }
  pUVar6 = FDS_ViewModelContext_SkillDetailPopup::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SkillDetailPopup,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3c874:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillDetailPopup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3c874;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillDetailPopup *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3c87f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SkillInfoPanel> @ 14bf3c8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SkillInfoPanel,1> * __cdecl
SafeCast<FDS_ViewModelContext_SkillInfoPanel>
          (TSharedPtr<FDS_ViewModelContext_SkillInfoPanel,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SkillInfoPanel,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillInfoPanel *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3ca0f;
  }
  pUVar6 = FDS_ViewModelContext_SkillInfoPanel::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SkillInfoPanel,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3ca04:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillInfoPanel *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3ca04;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillInfoPanel *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3ca0f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SkillInfo_SkillSlot> @ 14bf3ca50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SkillInfo_SkillSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_SkillInfo_SkillSlot>
          (TSharedPtr<FDS_ViewModelContext_SkillInfo_SkillSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SkillInfo_SkillSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillInfo_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3cb9f;
  }
  pUVar6 = FDS_ViewModelContext_SkillInfo_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SkillInfo_SkillSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3cb94:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillInfo_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3cb94;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillInfo_SkillSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3cb9f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SkillSlot> @ 14bf3cbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SkillSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_SkillSlot>
          (TSharedPtr<FDS_ViewModelContext_SkillSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SkillSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3cd2f;
  }
  pUVar6 = FDS_ViewModelContext_SkillSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SkillSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3cd24:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3cd24;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SkillSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3cd2f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SwimControl> @ 14bf3cd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SwimControl,1> * __cdecl
SafeCast<FDS_ViewModelContext_SwimControl>
          (TSharedPtr<FDS_ViewModelContext_SwimControl,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SwimControl *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3cebf;
  }
  pUVar6 = FDS_ViewModelContext_SwimControl::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SwimControl,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3ceb4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SwimControl *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3ceb4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SwimControl *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3cebf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_SwimSlot> @ 14bf3cf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_SwimSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_SwimSlot>
          (TSharedPtr<FDS_ViewModelContext_SwimSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_SwimSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SwimSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3d04f;
  }
  pUVar6 = FDS_ViewModelContext_SwimSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_SwimSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3d044:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SwimSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3d044;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_SwimSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3d04f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_TotalMenuItem> @ 14bf3d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_TotalMenuItem,1> * __cdecl
SafeCast<FDS_ViewModelContext_TotalMenuItem>
          (TSharedPtr<FDS_ViewModelContext_TotalMenuItem,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_TotalMenuItem,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuItem *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3d1df;
  }
  pUVar6 = FDS_ViewModelContext_TotalMenuItem::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_TotalMenuItem,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3d1d4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuItem *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3d1d4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuItem *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3d1df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_TotalMenuItemSet> @ 14bf3d220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> * __cdecl
SafeCast<FDS_ViewModelContext_TotalMenuItemSet>
          (TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuItemSet *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3d36f;
  }
  pUVar6 = FDS_ViewModelContext_TotalMenuItemSet::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3d364:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuItemSet *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3d364;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuItemSet *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3d36f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot> @ 14bf3d3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot>
          (TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3d4ff;
  }
  pUVar6 = FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3d4f4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3d4f4;
    __return_storage_ptr__->Object =
         (FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3d4ff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_TotalMenuPlayerInfoTab> @ 14bf3d540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> * __cdecl
SafeCast<FDS_ViewModelContext_TotalMenuPlayerInfoTab>
          (TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bf3d68f;
  }
  pUVar6 = FDS_ViewModelContext_TotalMenuPlayerInfoTab::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> *)(*pcVar4)();
      return pTVar7;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"IsA",3,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x2f7,
                 L"FDS_ViewModelContext IsA() - Invalid Structs (nullptr detected)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bf3d684:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bf3d684;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bf3d68f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// StableSortInternal<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,`UDS_VM_TotalMenu::SetFunctionList'::__l2::<lambda_1>_>_> @ 14bf3d6d0

void __cdecl
AlgoImpl::
StableSortInternal<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu::SetFunctionList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTotalMenuTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu::SetFunctionList(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar6 = 1;
    do {
      if (iVar6 < param_2) {
        pFVar1 = param_1[lVar3];
        if (param_1[lVar3 + 1]->Order < pFVar1->Order) {
          param_1[lVar3] = param_1[lVar3 + 1];
          param_1[lVar3 + 1] = pFVar1;
        }
      }
      iVar6 = iVar6 + 2;
      lVar3 = lVar3 + 2;
    } while (lVar3 < param_2);
  }
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar2 <= iVar5) {
          iVar7 = iVar2;
        }
        Merge<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu::SetFunctionList_::__l2::<lambda_1>_>_>
                  (param_1 + iVar4,iVar6,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 + iVar6 * -2;
      } while (iVar4 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,`UDS_VM_TotalMenu_ItemSetList::SetMainList'::__l2::<lambda_1>_>_> @ 14bf3d7d0

void __cdecl
AlgoImpl::
StableSortInternal<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu_ItemSetList::SetMainList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTotalMenuTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu_ItemSetList::SetMainList(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar6 = 1;
    do {
      if (iVar6 < param_2) {
        pFVar1 = param_1[lVar3];
        if (param_1[lVar3 + 1]->Order < pFVar1->Order) {
          param_1[lVar3] = param_1[lVar3 + 1];
          param_1[lVar3 + 1] = pFVar1;
        }
      }
      iVar6 = iVar6 + 2;
      lVar3 = lVar3 + 2;
    } while (lVar3 < param_2);
  }
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar2 <= iVar5) {
          iVar7 = iVar2;
        }
        Merge<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu_ItemSetList::SetMainList_::__l2::<lambda_1>_>_>
                  (param_1 + iVar4,iVar6,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 + iVar6 * -2;
      } while (iVar4 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<FDS_MoneyBaseTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,`UDS_VM_TotalMenu_PlayerInfo::SetCoin'::__l2::<lambda_1>_>_> @ 14bf3d8d0

void __cdecl
AlgoImpl::
StableSortInternal<FDS_MoneyBaseTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetCoin_::__l2::<lambda_1>_>_>
          (FDS_MoneyBaseTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu_PlayerInfo::SetCoin(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_MoneyBaseTableRow *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar6 = 1;
    do {
      if (iVar6 < param_2) {
        pFVar1 = param_1[lVar3];
        if (param_1[lVar3 + 1]->VisibleOrder < pFVar1->VisibleOrder) {
          param_1[lVar3] = param_1[lVar3 + 1];
          param_1[lVar3 + 1] = pFVar1;
        }
      }
      iVar6 = iVar6 + 2;
      lVar3 = lVar3 + 2;
    } while (lVar3 < param_2);
  }
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar2 <= iVar5) {
          iVar7 = iVar2;
        }
        Merge<FDS_MoneyBaseTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetCoin_::__l2::<lambda_1>_>_>
                  (param_1 + iVar4,iVar6,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 + iVar6 * -2;
      } while (iVar4 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<FDS_StatusTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_StatusTableRow_const_*,`UDS_VM_TotalMenu_PlayerInfo::SetStatus'::__l2::<lambda_1>_>_> @ 14bf3d9d0

void __cdecl
AlgoImpl::
StableSortInternal<FDS_StatusTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_StatusTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetStatus_::__l2::<lambda_1>_>_>
          (FDS_StatusTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_StatusTableRow_const_*,_protected:_void___cdecl_UDS_VM_TotalMenu_PlayerInfo::SetStatus(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_StatusTableRow *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar6 = 1;
    do {
      if (iVar6 < param_2) {
        pFVar1 = param_1[lVar3];
        if (pFVar1->PlayerInfoViewOrder < param_1[lVar3 + 1]->PlayerInfoViewOrder) {
          param_1[lVar3] = param_1[lVar3 + 1];
          param_1[lVar3 + 1] = pFVar1;
        }
      }
      iVar6 = iVar6 + 2;
      lVar3 = lVar3 + 2;
    } while (lVar3 < param_2);
  }
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar2 <= iVar5) {
          iVar7 = iVar2;
        }
        Merge<FDS_StatusTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_StatusTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetStatus_::__l2::<lambda_1>_>_>
                  (param_1 + iVar4,iVar6,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 + iVar6 * -2;
      } while (iVar4 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// `scalar_deleting_destructor' @ 14bf3e050

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e080

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e0b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e0e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e110

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_ActionProgressType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e140

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_ContentsTabFrameType,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e170

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_PlayerIconSlotType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e1a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e1d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_AcceptQuest,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_AcceptQuest,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e200

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_AcceptQuestListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_AcceptQuestListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e230

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_ContextMenuPopup,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_ContextMenuPopup,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e260

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e290

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e2c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e2f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e320

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ActionProgress,void___cdecl(enum_EDS_ActionProgressType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e350

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_CheatBtn,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_CheatBtn,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e380

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ItemDrop,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_ItemDrop,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e3b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_MiniMap,void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e3e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_MiniMap,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_MiniMap,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e410

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_MiniMap,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_MiniMap,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e440

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_Notification,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_Notification,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e470

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupCharStatus,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupCharStatus,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e4a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupCharStatus,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupCharStatus,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e4d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupSkillGroup,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupSkillGroup,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e500

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupSkillSlot,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_PopupSkillSlot,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e530

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e560

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e590

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e5c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e5f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e620

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillGroup,void___cdecl(enum_EDS_WeaponType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e650

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillSlot,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillSlot,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e680

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillSlot,void___cdecl(int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillSlot,void___cdecl(int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e6b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillSlot,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SkillSlot,void___cdecl(float,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e6e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SmallTalk,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SmallTalk,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e710

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SmallTalk,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_HUD_SmallTalk,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e740

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_PartySearchDropBox,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_PartySearchDropBox,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e770

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_PlayerIcon_Popup,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_PlayerIcon_Popup,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e7a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Player_IconSlot,void___cdecl(enum_EDS_PlayerIconSlotType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e7d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Progress,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Progress,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e800

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestDialogueScene,void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestDialogueScene,void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e830

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestDialogueScene,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestDialogueScene,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e860

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestDialogueScene,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestDialogueScene,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e890

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestInstanceSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestInstanceSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e8c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestInstanceTracker,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestInstanceTracker,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e8f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestLocal,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestLocal,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e920

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestLocal,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestLocal,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e950

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestLocalListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestLocalListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e980

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMain,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMain,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e9b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMainChapterInfo,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMainChapterInfo,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3e9e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMainChapterListSlot,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMainChapterListSlot,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ea10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMission,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestMission,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ea40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeat,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeat,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ea70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeat,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeat,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eaa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeat,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeat,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ead0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatAcceptPopup,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatAcceptPopup,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eb00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatAcceptPopup,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatAcceptPopup,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eb30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatAcceptPopup_ListSlot,void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eb60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatData,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatData,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eb90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatData,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatData,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ebc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ebf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestRepeatListSlot,void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ec20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ec50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ec80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ecb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_QuestTracker,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ece0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SkillModeControl,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_SkillModeControl,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ed10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SkillModeControl,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_SkillModeControl,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ed40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SkillModeControl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_SkillModeControl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ed70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_StackSkillCount,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_StackSkillCount,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eda0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SummonBoss,void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3edd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimControl,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimControl,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ee00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimControl,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimControl,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ee30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimControl,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimControl,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ee60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimSlot,void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimSlot,void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ee90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_SwimSlot,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eec0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_Item,void___cdecl(enum_EDS_ContentsTabFrameType,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3eef0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo,void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo,void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ef20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ef50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3ef80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo_Tab,void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_TotalMenu_PlayerInfo_Tab,void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3efb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Display_SkillSlot,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Display_SkillSlot,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3efe0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LevelUpPopup,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LevelUpPopup,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f010

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LevelUpPopup,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LevelUpPopup,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f040

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LevelUpPopup,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LevelUpPopup,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f070

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f0a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f0d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill,void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f100

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill,void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f130

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f160

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f190

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f1c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f1f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillSlot,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillSlot,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f220

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_PlayerSkill_SkillSlot,void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f250

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f280

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(UObject_*),FDefaultDelegateUserPolicy,UDS_VM_W_SkillInfo_SkillSlot_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(UObject_*),FDefaultDelegateUserPolicy,UDS_VM_W_SkillInfo_SkillSlot_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f2b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f2e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Skill,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f310

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SkillInfo_SkillSlot,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SkillInfo_SkillSlot,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f340

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SkillInfo_SkillSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SkillInfo_SkillSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f370

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f3a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f3d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f400

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f430

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f460

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_*),FDefaultDelegateUserPolicy,UDS_VM_W_SkillInfo_SkillSlot_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UObject_*),FDefaultDelegateUserPolicy,UDS_VM_W_SkillInfo_SkillSlot_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f490

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_ActionProgressType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f4c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_ContentsTabFrameType,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f4f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_PlayerIconSlotType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f520

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f550

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_VMC_PlayerSkill_SkillInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_VMC_PlayerSkill_SkillInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f590

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_VMC_PlayerSkill_SkillSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_VMC_PlayerSkill_SkillSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f5d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_VMContext_MountControl,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_VMContext_MountControl,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f610

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CharBuffData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CharBuffData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f650

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_DropData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_DropData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f690

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_MapTypeInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_MapTypeInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f6d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_NotificationInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_NotificationInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f710

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_PlayerSkillData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_PlayerSkillData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f750

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_PlayerSkillStatus,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_PlayerSkillStatus,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f790

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f7d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestListSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestListSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f810

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestMainChapterInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestMainChapterInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f850

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestMainChapterListSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestMainChapterListSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f890

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestMainStoryInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_QuestMainStoryInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f8d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_QuickChanger,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_QuickChanger,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f910

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ScriptMissionTracker,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ScriptMissionTracker,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f950

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f990

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillDetailInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillDetailInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3f9d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillDetailPopup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillDetailPopup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fa10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillInfoPanel,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillInfoPanel,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fa50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillInfo_SkillSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillInfo_SkillSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fa90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fad0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_Smite,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_Smite,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fb10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_StatusCategoryList,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_StatusCategoryList,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fb50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SwimControl,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SwimControl,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fb90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SwimSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SwimSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fbd0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuItem,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuItem,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fc10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuItemSet,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuItemSet,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fc50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuItemSetList,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuItemSetList,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fc90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuPlayerInfoTab,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuPlayerInfoTab,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fcd0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::_scalar_deleting_destructor_
          (TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bf3fd00

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// BindViewModel @ 14bf43270

void __cdecl
DS_ViewModelTemplateUtil::BindViewModel
          (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1,
          TSharedPtr<FDS_ViewModelContext,1> *param_2,bool param_3)

{
  FDS_ViewModelContext *pFVar1;
  longlong lVar2;
  bool bVar3;
  TSubclassOf<UDS_ViewModelBase> TVar4;
  UClass *pUVar5;
  FName *pFVar6;
  UDS_UserWidget *pUVar7;
  UObject *pUVar8;
  UDS_ViewModelBase *pUVar9;
  int iVar10;
  FName FVar11;
  longlong *plVar12;
  FWeakObjectPtr local_res8;
  UDS_ViewModelBase *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  FName local_88;
  EDS_ViewModelTemplateKey local_80 [2];
  FName local_78;
  FString local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_60;
  UDS_ViewModelBase *local_50;
  longlong *local_48;
  
  local_res20 = (UDS_ViewModelBase *)((ulonglong)local_res20 & 0xffffffff00000000);
  local_res8 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if ((bVar3) && (pFVar1 = param_2->Object, pFVar1 != (FDS_ViewModelContext *)0x0)) {
    TVar4 = GetViewModelClass(local_80);
    lVar2 = *(longlong *)TVar4.Class.field0_0x0;
    if ((lVar2 != 0) &&
       (pUVar5 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar10 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar10) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (pUVar5 = *(UClass **)TVar4.Class.field0_0x0, pUVar5 != (UClass *)0x0)) &&
         (bVar3 = FWeakObjectPtr::IsValid(&local_res8), bVar3)) {
        FVar11 = pFVar1->ViewModelName;
        plVar12 = (longlong *)0x0;
        if (FVar11 == (FName)0x0) {
          local_88 = (FName)pUVar5->_padding_;
          ::FName::ToString(&local_88,&local_70);
          plVar12 = (longlong *)&DAT_00000001;
          iVar10 = local_70.Data.ArrayNum + -1;
          if (local_70.Data.ArrayNum == 0) {
            iVar10 = 0;
          }
          pFVar6 = ::FName::FName(&local_78,iVar10,(wchar_t *)local_70.Data.AllocatorInstance.Data,
                                  FNAME_Add);
          FVar11 = *pFVar6;
        }
        if ((plVar12 != (longlong *)0x0) &&
           (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        pUVar7 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_res8);
        UDS_UserWidget::GetViewModel(pUVar7,(FName)&local_res20,FVar11.ComparisonIndex.Value._0_1_);
        if (local_res20 == (UDS_ViewModelBase *)0x0) {
          local_98.Object = (FDS_ViewModelContext *)0x0;
          pUVar8 = FWeakObjectPtr::Get(&local_res8);
          pUVar9 = NewObject<UDS_ViewModelBase>
                             (pUVar8,pUVar5,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UDS_ViewModelBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          local_60.Object = param_2->Object;
          local_60.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          if (local_60.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_res20 = pUVar9;
          UDS_ViewModelBase::SetViewModel(pUVar9,&local_60);
          (**(code **)(local_res20->_padding_ + 0x2f0))();
          local_res20->bIsCloseInit = false;
          if (pFVar1->ViewModelName == (FName)0x0) {
            pUVar7 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_res8);
            UDS_UserWidget::SetViewModel(pUVar7,local_res20,param_3);
          }
          else {
            pUVar7 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_res8);
            pUVar9 = local_res20;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (local_res20 != (UDS_ViewModelBase *)0x0) {
                UE::GC::MarkAsReachable((UObject *)local_res20);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar9 != (UDS_ViewModelBase *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar9);
              }
            }
            local_50 = pUVar9;
            local_48 = &pUVar9->_padding_;
            if (pUVar9 == (UDS_ViewModelBase *)0x0) {
              local_48 = (longlong *)0x0;
            }
            UDS_UserWidget::SetViewModel
                      (pUVar7,pFVar1->ViewModelName,
                       (TScriptInterface<INotifyFieldValueChanged> *)&local_50,param_3);
          }
        }
        else {
          local_98.Object = param_2->Object;
          local_98.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_ViewModelBase::SetContext(local_res20,&local_98);
          local_res20->bIsCloseInit = false;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// CreateViewModel @ 14bf4ea60

TObjectPtr<UDS_ViewModelBase> __cdecl
DS_ViewModelTemplateUtil::CreateViewModel
          (UObject *param_1,TSharedPtr<FDS_ViewModelContext,1> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  TSubclassOf<UDS_ViewModelBase> TVar4;
  UClass *pUVar5;
  UDS_ViewModelBase *this;
  int iVar6;
  bool bVar7;
  longlong *in_R8;
  FName local_res18;
  EDS_ViewModelTemplateKey local_res20 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  bVar7 = false;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  lVar1 = *in_R8;
  if (lVar1 == 0) {
    *(undefined8 *)param_1 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)in_R8[1]);
    return (TObjectPtr<UDS_ViewModelBase>)(TObjectPtr<UDS_ViewModelBase>_u_0)param_1;
  }
  TVar4 = GetViewModelClass(local_res20);
  lVar2 = *(longlong *)TVar4.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar6 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (pUVar5 = *(UClass **)TVar4.Class.field0_0x0, pUVar5 != (UClass *)0x0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
          local_res18 = (FName)pUVar5->_padding_;
          ::FName::ToString(&local_res18,(FString *)&local_48);
          bVar7 = true;
          iVar6 = (int)local_48.SharedReferenceCount.ReferenceController + -1;
          if ((int)local_48.SharedReferenceCount.ReferenceController == 0) {
            iVar6 = 0;
          }
          ::FName::FName(&local_res18,iVar6,(wchar_t *)local_48.Object,FNAME_Add);
        }
        if ((bVar7) && (local_48.Object != (FDS_ViewModelContext *)0x0)) {
          FMemory::Free(local_48.Object);
        }
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        this = NewObject<UDS_ViewModelBase>
                         ((UObject *)param_2,pUVar5,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_ViewModelBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
        local_48.Object = (FDS_ViewModelContext *)*in_R8;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetViewModel(this,&local_48);
        (**(code **)(this->_padding_ + 0x2f0))(this);
        this->bIsCloseInit = false;
        *(UDS_ViewModelBase **)param_1 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        goto LAB_14bf4ec14;
      }
    }
  }
  *(undefined8 *)param_1 = 0;
LAB_14bf4ec14:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_R8[1]);
  return (TObjectPtr<UDS_ViewModelBase>)(TObjectPtr<UDS_ViewModelBase>_u_0)param_1;
}

// GetViewModelClass @ 14bf58730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSubclassOf<UDS_ViewModelBase> __cdecl
DS_ViewModelTemplateUtil::GetViewModelClass(EDS_ViewModelTemplateKey *param_1)

{
  uint uVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  undefined8 *puVar8;
  TSubclassOf<UDS_ViewModelBase> TVar9;
  undefined8 *puVar10;
  uint *in_RDX;
  undefined1 *puVar11;
  int iVar12;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar1 = *in_RDX;
  if (*(int *)&ViewModelClassMap->field_0x8 != *(int *)&ViewModelClassMap->field_0x34) {
    puVar11 = *(undefined1 **)&ViewModelClassMap->field_0x40;
    if (*(undefined1 **)&ViewModelClassMap->field_0x40 == (undefined1 *)0x0) {
      puVar11 = &ViewModelClassMap->field_0x38;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)&ViewModelClassMap->field_0x48 - 1U & uVar1) * 4
                     );
    if (iVar12 != -1) {
      lVar2 = *(longlong *)ViewModelClassMap;
      iVar6 = iVar12;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x18) == uVar1) goto LAB_14bf58800;
        iVar6 = *(int *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    uVar1 = *in_RDX;
    ::FString::FString(&local_168,L"EDS_ViewModelTemplateKey");
    DS_Util::GetEnumToString(&local_158,&local_168,(longlong)(int)uVar1);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"DS_ViewModelTemplateUtil::GetViewModelClass",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_148.Ptr,100,
               L"ViewModelClassMap.Contains(InKey) == false. InKey : %s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8286962977555349605>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Template\\DS_ViewModelTemplateUtil.cpp"
                     ,0x65,"false");
  if (!bVar5) {
    param_1[0] = None;
    param_1[1] = None;
    return (TSubclassOf<UDS_ViewModelBase>)(TObjectPtr<UClass>)param_1;
  }
  pcVar4 = (code *)swi(3);
  TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar4)();
  return (TSubclassOf<UDS_ViewModelBase>)TVar9.Class.field0_0x0;
  while (iVar12 = *(int *)(puVar8 + 2), puVar8 = (undefined8 *)0x0, iVar12 != -1) {
LAB_14bf58800:
    puVar8 = (undefined8 *)(lVar2 + (longlong)iVar12 * 0x18);
    if (*(uint *)(lVar2 + (longlong)iVar12 * 0x18) == uVar1) break;
  }
  puVar10 = puVar8 + 1;
  if (puVar8 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  pUVar3 = (UObject *)*puVar10;
  *(UObject **)param_1 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return (TSubclassOf<UDS_ViewModelBase>)(TObjectPtr<UClass>)param_1;
}

// RegistClass @ 14bf78d90

void __cdecl
DS_ViewModelTemplateUtil::RegistClass
          (EDS_ViewModelTemplateKey param_1,TSubclassOf<UDS_ViewModelBase> param_2)

{
  TMap<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,0>_>
  *pTVar1;
  EDS_ViewModelTemplateKey local_res8 [2];
  TPairInitializer<EDS_ViewModelTemplateKey_&,TSubclassOf<UDS_ViewModelBase>_&> local_res10;
  EDS_ViewModelTemplateKey *local_18;
  TObjectPtr<UClass> local_10;
  
  local_res8[0] = param_1;
  if (ViewModelClassMap ==
      (TMap<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,0>_>
       *)0x0) {
    pTVar1 = ::operator_new(0x50);
    ViewModelClassMap =
         (TMap<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,0>_>
          *)0x0;
    if (pTVar1 != (TMap<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,0>_>
                   *)0x0) {
      *(undefined8 *)pTVar1 = 0;
      *(undefined8 *)&pTVar1->field_0x8 = 0;
      *(undefined8 *)&pTVar1->field_0x20 = 0;
      *(undefined4 *)&pTVar1->field_0x28 = 0;
      *(undefined4 *)&pTVar1->field_0x2c = 0x80;
      *(undefined4 *)&pTVar1->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar1->field_0x34 = 0;
      *(undefined8 *)&pTVar1->field_0x40 = 0;
      *(undefined4 *)&pTVar1->field_0x48 = 0;
      ViewModelClassMap = pTVar1;
    }
  }
  local_18 = local_res8;
  local_10.field0_0x0 = (TObjectPtr<UClass>_u_0)param_2.Class.field0_0x0;
  TSet<TTuple<enum_EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey,TSubclassOf<UDS_ViewModelBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ViewModelTemplateKey_&,TSubclassOf<UDS_ViewModelBase>_&>_>
            (ViewModelClassMap,&local_res10,(bool *)&local_18);
  return;
}

// AnimationNames'' @ 15043f870

void __cdecl `dynamic_atexit_destructor_for_'UDS_VM_HUD_ItemDrop::AnimationNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UDS_VM_HUD_ItemDrop::AnimationNames.AllocatorInstance.Data;
  if (UDS_VM_HUD_ItemDrop::AnimationNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (UDS_VM_HUD_ItemDrop::AnimationNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Empty'' @ 15043f890

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  TDS_Singleton<FDS_HttpServer>::Empty._padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  return;
}

// Empty'' @ 15043f8b0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PartyRepo>::Empty__(void)

{
  FDS_PartyInfo::~FDS_PartyInfo(&TDS_Singleton<FDS_PartyRepo>::Empty.PartyInfo);
  return;
}

// Empty'' @ 15043f8d0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_PlayerRepo>::Empty__(void)

{
  DestructItems<misc::Player,int>
            ((Player *)TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.AllocatorInstance.Data,
             TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.ArrayNum);
  if (TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_PlayerRepo>::Empty.PlayerList.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)
             TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.AllocatorInstance.Data,
             TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.ArrayNum);
  if (TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_PlayerRepo>::Empty.SearchedPlayerNameList.AllocatorInstance.Data
                 );
    return;
  }
  return;
}

// Empty'' @ 15043f930

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  if (TDS_Singleton<FDS_RaidPartyRepo>::Empty.Password.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_RaidPartyRepo>::Empty.Password.Data.AllocatorInstance.Data);
  }
  DestructItems<FDS_RaidPartyMemberInfo,int>
            ((FDS_RaidPartyMemberInfo *)
             TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.AllocatorInstance.Data,
             TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.ArrayNum);
  if (TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.Members.AllocatorInstance.
                  Data);
  }
  if (TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.PartyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TDS_Singleton<FDS_RaidPartyRepo>::Empty.RaidPartyInfo.PartyName.Data.
                  AllocatorInstance.Data);
    return;
  }
  return;
}

// Empty'' @ 15043f990

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_UIData>::Empty__(void)

{
  TDS_Singleton<FDS_UIData>::Empty._padding_ = (longlong)&___7FDS_UIData__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 15043f9b0

void __cdecl _dynamic_atexit_destructor_for__CharSortingTypeList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CharSortingTypeList.AllocatorInstance.Data;
  if (CharSortingTypeList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CharSortingTypeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 15043f9d0

void __cdecl _dynamic_atexit_destructor_for__EquipCharSelectSortingTypeList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EquipCharSelectSortingTypeList.AllocatorInstance.Data;
  if (EquipCharSelectSortingTypeList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EquipCharSelectSortingTypeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 15043f9f0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

