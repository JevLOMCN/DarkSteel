// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 340

// BakedResourcePrefix'' @ 14128b640

void __cdecl `dynamic_initializer_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ::FString::FString(&FBakingConfiguration::BakedResourcePrefix,L"BAKE_");
  atexit(`dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__);
  return;
}

// Bit'' @ 14128b670

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 14128b690

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE__
          (void)

{
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY =
       UE::Math::TTransform<double>::Identity.Rotation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW =
       UE::Math::TTransform<double>::Identity.Rotation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY =
       UE::Math::TTransform<double>::Identity.Translation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW =
       UE::Math::TTransform<double>::Identity.Translation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY =
       UE::Math::TTransform<double>::Identity.Scale3D.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 14128b6f0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE__(void)

{
  FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE = FLinearColor::Black;
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 14128b710

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
         DEFAULT_PARAMETER_VALUE_NAME__);
  return;
}

// Empty'' @ 14128b730

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__);
  return;
}

// Empty'' @ 14128b760

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  FDS_Urls::FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__);
  return;
}

// Empty'' @ 14128b790

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_RaidPartyRepo>::Empty__);
  return;
}

// StateName'' @ 14128b7b0

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 14128b7d0

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 14128b7f0

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 14128b810

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 14128b830

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 14128b850

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 14128b870

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 14128b890

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 14128b8b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 14128b8d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 14128b8f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 14128b910

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 14128b930

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 14128b950

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 14128b970

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 14128b990

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 14128b9b0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 14128b9d0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 14128b9f0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 14128ba10

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 14128ba30

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 14128ba50

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 14128ba70

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 14128ba90

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 14128bab0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 14128bad0

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 14128bb50

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

// `dynamic_initializer_for_'ErrorNamespace'' @ 14128bbd0

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 14128bc00

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 14128bc20

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 14128bc40

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 14128bc60

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 14128bc80

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 14128bca0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 14128bcc0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 14128bce0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 14128bd00

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 14128bd20

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 14128bd40

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 14128bd60

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 14128bd80

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 14128bda0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14128bdc0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 14128bde0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 14128be00

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 14128be90

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'__UDS_VM_MapSpawn___'' @ 14128beb0

void __cdecl _dynamic_initializer_for____UDS_VM_MapSpawn_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_MapSpawn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_MapSpawn,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_MapTexture___'' @ 14128bef0

void __cdecl _dynamic_initializer_for____UDS_VM_MapTexture_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_MapTexture_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_MapTexture,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_NameTag_BattleNPC___'' @ 14128bf30

void __cdecl _dynamic_initializer_for____UDS_VM_NameTag_BattleNPC_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_NameTag_BattleNPC_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (NameTag_BattleNPC,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_NameTag_MountNPC___'' @ 14128bf70

void __cdecl _dynamic_initializer_for____UDS_VM_NameTag_MountNPC_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_NameTag_MountNPC_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(NameTag_MountNPC,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_NameTag_NPC___'' @ 14128bfb0

void __cdecl _dynamic_initializer_for____UDS_VM_NameTag_NPC_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_NameTag_NPC_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(NameTag_NPC,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_NameTag_Stuff___'' @ 14128bff0

void __cdecl _dynamic_initializer_for____UDS_VM_NameTag_Stuff_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_NameTag_Stuff_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(NameTag_Stuff,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_InventoryBagCategory___'' @ 14128c030

void __cdecl _dynamic_initializer_for____UDS_VM_W_InventoryBagCategory_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_InventoryBagCategory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_InventoryBagCategory,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_InventoryBagTabBtn___'' @ 14128c070

void __cdecl _dynamic_initializer_for____UDS_VM_W_InventoryBagTabBtn_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_InventoryBagTabBtn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_InventoryBagTabBtn,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_ItemDetailInfo___'' @ 14128c0b0

void __cdecl _dynamic_initializer_for____UDS_VM_W_ItemDetailInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_ItemDetailInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_ItemDetailInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_Key___'' @ 14128c0f0

void __cdecl _dynamic_initializer_for____UDS_VM_W_Key_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_Key_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Key,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_LockOnTarget___'' @ 14128c130

void __cdecl _dynamic_initializer_for____UDS_VM_W_LockOnTarget_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_LockOnTarget_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_LockOnTarget,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_LoginMenu___'' @ 14128c170

void __cdecl _dynamic_initializer_for____UDS_VM_W_LoginMenu_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_LoginMenu_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Login,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_LoginWorld___'' @ 14128c1b0

void __cdecl _dynamic_initializer_for____UDS_VM_W_LoginWorld_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_LoginWorld_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_LoginWorld,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_MenuInfoSlot___'' @ 14128c1f0

void __cdecl _dynamic_initializer_for____UDS_VM_W_MenuInfoSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_MenuInfoSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_MenuInfoSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_Mount_Status___'' @ 14128c230

void __cdecl _dynamic_initializer_for____UDS_VM_W_Mount_Status_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_Mount_Status_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Mount_Status,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_NpcRelation___'' @ 14128c270

void __cdecl _dynamic_initializer_for____UDS_VM_W_NpcRelation_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_NpcRelation_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_NpcGift,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_Patcher___'' @ 14128c2b0

void __cdecl _dynamic_initializer_for____UDS_VM_W_Patcher_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_Patcher_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Patcher,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_QuestDailyListSlot___'' @ 14128c2f0

void __cdecl _dynamic_initializer_for____UDS_VM_W_QuestDailyListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_QuestDailyListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_QuestDailyListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_RaidParty_Character_Slot___'' @ 14128c330

void __cdecl _dynamic_initializer_for____UDS_VM_W_RaidParty_Character_Slot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_RaidParty_Character_Slot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_RaidPartySlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_RingCmd_IconImg___'' @ 14128c370

void __cdecl _dynamic_initializer_for____UDS_VM_W_RingCmd_IconImg_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_RingCmd_IconImg_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_RingCmdSlotIcon,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_RingCmd_MenuSlot___'' @ 14128c3b0

void __cdecl _dynamic_initializer_for____UDS_VM_W_RingCmd_MenuSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_RingCmd_MenuSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_RingCmdSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_RingCmd_RingDeck___'' @ 14128c3f0

void __cdecl _dynamic_initializer_for____UDS_VM_W_RingCmd_RingDeck_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_RingCmd_RingDeck_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_RingCmd_DeckNumber,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_RingCommand_ToolTip_ActionInfo___'' @ 14128c430

void __cdecl _dynamic_initializer_for____UDS_VM_W_RingCommand_ToolTip_ActionInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Action_ToolTip,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_RingCommand_ToolTip_MenuInfo___'' @ 14128c470

void __cdecl _dynamic_initializer_for____UDS_VM_W_RingCommand_ToolTip_MenuInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_RingCommand_ToolTip_MenuInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Menu_ToolTip,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_ServerListSlot___'' @ 14128c4b0

void __cdecl _dynamic_initializer_for____UDS_VM_W_ServerListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_ServerListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_WorldInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_ServerList___'' @ 14128c4f0

void __cdecl _dynamic_initializer_for____UDS_VM_W_ServerList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_ServerList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_ServerInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_SmiteEffect___'' @ 14128c530

void __cdecl _dynamic_initializer_for____UDS_VM_W_SmiteEffect_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_SmiteEffect_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_SmiteEffect,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_StatusUpgradeInfo___'' @ 14128c570

void __cdecl _dynamic_initializer_for____UDS_VM_W_StatusUpgradeInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_StatusUpgradeInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_StatusUpgradeInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_TotalMenu___'' @ 14128c5b0

void __cdecl _dynamic_initializer_for____UDS_VM_W_TotalMenu_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_TotalMenu_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_TotalMenu,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_WarMap___'' @ 14128c5f0

void __cdecl _dynamic_initializer_for____UDS_VM_W_WarMap_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_WarMap_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_WarMap,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_WorldMap_MarkerNote___'' @ 14128c630

void __cdecl _dynamic_initializer_for____UDS_VM_W_WorldMap_MarkerNote_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_WorldMap_MarkerNote_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_WorldMapNote,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_ZoneInfo___'' @ 14128c670

void __cdecl _dynamic_initializer_for____UDS_VM_W_ZoneInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_ZoneInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_ZoneInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_ZoneMiddleInfo___'' @ 14128c6b0

void __cdecl _dynamic_initializer_for____UDS_VM_W_ZoneMiddleInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_ZoneMiddleInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_ZoneMiddleInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss_Info___'' @ 14128c6f0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_Info_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_Info_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(WorldBossInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss_RankingList___'' @ 14128c730

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_RankingList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_RankingList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (WorldBossRankingList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss_RankingSlot___'' @ 14128c770

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_RankingSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_RankingSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (WorldBossRankingListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss_Ranking___'' @ 14128c7b0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_Ranking_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_Ranking_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(WorldBossRanking,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss_SpawnInfo___'' @ 14128c7f0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_SpawnInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_SpawnInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (WorldBossSpawnInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss_WorldBossList___'' @ 14128c830

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_WorldBossList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_WorldBossList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(WorldBossList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss_WorldBossSlot___'' @ 14128c870

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_WorldBossSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_WorldBossSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (WorldBossListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldBoss___'' @ 14128c8b0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldBoss_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldBoss_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(WorldBoss,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMapMarkerListSlot___'' @ 14128c8f0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMapMarkerListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMapMarkerListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapMarkerListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMapMarkerList___'' @ 14128c930

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMapMarkerList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMapMarkerList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapMarkerList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMapZoneListSlot___'' @ 14128c970

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMapZoneListSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMapZoneListSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapZoneListSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMapZoneList___'' @ 14128c9b0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMapZoneList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMapZoneList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapZoneList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMap_BreachIcon___'' @ 14128c9f0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMap_BreachIcon_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMap_BreachIcon_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapBreachIcon,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMap_DetectionIcon___'' @ 14128ca30

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMap_DetectionIcon_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMap_DetectionIcon_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapDetectionIcon,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMap_IconAndText___'' @ 14128ca70

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMap_IconAndText_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMap_IconAndText_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapIconAndText,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMap_IconBtn___'' @ 14128cab0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMap_IconBtn_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMap_IconBtn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapIconBtn,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMap_IconToolTip___'' @ 14128caf0

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMap_IconToolTip_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMap_IconToolTip_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_WorldMapIconToolTip,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMap_Icon___'' @ 14128cb30

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMap_Icon_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMap_Icon_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_WorldMapIcon,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_WorldMap___'' @ 14128cb70

void __cdecl _dynamic_initializer_for____UDS_VM_WorldMap_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_WorldMap_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_WorldMap,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// GetFormatString<char_const_*> @ 14bff7e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
DS_Util::GetFormatString<char_const_*>
          (FString *__return_storage_ptr__,FString *param_1,char *param_2)

{
  uint *puVar1;
  longlong lVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar10;
  uint uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  undefined8 *puVar15;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  undefined1 auStackY_108 [32];
  uint local_d8 [2];
  FSparseArrayAllocationInfo local_d0;
  undefined4 local_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar10 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if ((param_1->Data).ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  iVar8 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                     (int *)(local_88 + 0xc));
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)local_78,1);
  FVar17 = (ForElementType<unsigned_int>)local_78;
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FVar17 = local_68;
  }
  uVar11 = iVar6 >> 0x1f & 0x1f;
  iVar6 = iVar6 + uVar11;
  puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar11 & 0x1f));
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_88,&local_d0,iVar5);
  pvVar3 = local_d0.Pointer;
  pTVar16 = pTVar10;
  if (local_d0.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_d0.Pointer,L"1");
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)((longlong)pvVar3 + 0x10),param_2);
    *(undefined4 *)((longlong)pvVar3 + 0x30) = 0xffffffff;
    pTVar16 = pvVar3;
  }
  local_d8[0] = local_d0.Index;
  if (*(int *)&pTVar16->field_0x8 == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = *(wchar_t **)pTVar16;
    iVar8 = *(int *)&pTVar16->field_0x8 + -1;
  }
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar13);
  bVar4 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                      *)local_88,uVar11,pTVar16,(int *)local_d8,(bool *)0x0);
  if (bVar4) goto LAB_14bff8214;
  uVar14 = 1;
  uVar12 = local_88._8_4_ - local_54;
  if (3 < uVar12) {
    uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar14 <= (int)local_40)) {
    uVar11 = local_40 - 1 & uVar11;
    *(uint *)&pTVar16->field_0x34 = uVar11;
    FVar9.Data = (FScriptContainerElement *)local_50;
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      FVar9.Data = local_48.Data;
    }
    uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
    *(undefined4 *)&pTVar16->field_0x30 = *(undefined4 *)((longlong)FVar9.Data + uVar18 * 4);
    *(uint *)((longlong)FVar9.Data + uVar18 * 4) = local_d8[0];
    goto LAB_14bff8214;
  }
  local_40 = uVar14;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar14 != 0) {
    uVar11 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_14bff8041;
      }
    }
    else {
LAB_14bff8041:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar11,4);
    }
    if (0 < (int)uVar14) {
      uVar18 = (ulonglong)uVar14;
      pTVar16 = pTVar10;
      do {
        FVar9.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar7 = (ulonglong)pTVar16 & (longlong)(int)uVar14 - 1U;
        pTVar16 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)&pTVar16->field_0x1;
        *(undefined4 *)((longlong)FVar9.Data + uVar7 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_40 != 0) {
    local_d0.Pointer = local_78;
    local_d0.Index = 0;
    local_d0._4_4_ = 1;
    uStack_bc = 0;
    uStack_b8 = 0;
    if (local_60 != 0) {
      FVar17 = (ForElementType<unsigned_int>)local_78;
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_68;
      }
      uVar11 = *(uint *)FVar17;
      pTVar16 = pTVar10;
      while (uVar11 == 0) {
        uStack_b8 = (int)pTVar16 + 0x20;
        pTVar16 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)uStack_b8;
        iVar8 = (int)pTVar10;
        local_d0.Index = iVar8 + 1;
        pTVar10 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                  (ulonglong)(uint)local_d0.Index;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < local_d0.Index)
        goto LAB_14bff8137;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar8];
      }
      local_d0._4_4_ = -uVar11 & uVar11;
      uVar18 = (ulonglong)(uint)local_d0._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_bc = (int)lVar2 + -1 + uStack_b8;
      pTVar10 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)uStack_bc;
      if ((int)local_60 < (int)uStack_bc) {
LAB_14bff8137:
        pTVar10 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)local_60;
        uStack_bc = local_60;
      }
    }
    local_c0 = 0xffffffff;
    local_b0 = (longlong *)local_88;
    local_a8._padding_ = CONCAT44(local_d0._4_4_,local_d0.Index);
    local_a8.CurrentBitIndex = uStack_bc;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_b4;
    local_a8.BaseBitIndex = uStack_b8;
    local_a8.Array = local_d0.Pointer;
    if ((int)pTVar10 < (int)local_60) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)pTVar10 * 0x38 + *local_b0);
        if (*(int *)(puVar15 + 1) == 0) {
          pwVar13 = L"";
          iVar8 = 0;
        }
        else {
          pwVar13 = (wchar_t *)*puVar15;
          iVar8 = *(int *)(puVar15 + 1) + -1;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar13);
        uVar11 = local_40 - 1 & uVar11;
        *(uint *)((longlong)puVar15 + 0x34) = uVar11;
        FVar9.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar15 + 6) = *(undefined4 *)((longlong)FVar9.Data + uVar18 * 4);
        *(int *)((longlong)FVar9.Data + uVar18 * 4) = (int)pTVar10;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        pTVar10 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                  (ulonglong)(uint)local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14bff8214:
  ::FString::FormatImpl
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_88);
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)local_78,0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UDS_VM_WorldBoss_WorldBossList::SetBossList'::__l2::<lambda_1>_>_> @ 14bff82f0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_VM_WorldBoss_WorldBossList::SetBossList_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_virtual_void___cdecl_UDS_VM_WorldBoss_WorldBossList::SetBossList(void)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar2 = iVar6;
  iVar7 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14bff83ce:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar9 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar2 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar2;
            if (1 < iVar6) {
              do {
                iVar2 = iVar5 * 2;
                iVar7 = iVar2 + 1;
                if (iVar2 + 2 < iVar6) {
                  if (param_1[(longlong)iVar2 + 2] < param_1[iVar7]) {
                    iVar7 = iVar2;
                  }
                  iVar7 = iVar7 + 1;
                }
                iVar2 = param_1[iVar5];
                if (param_1[iVar7] <= iVar2) break;
                param_1[iVar5] = param_1[iVar7];
                param_1[iVar7] = iVar2;
                iVar5 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar5 = iVar7 + -1;
      iVar6 = iVar2 + -2;
      iVar2 = iVar6;
      iVar7 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2] < param_1[iVar8]) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar1 = param_1[iVar5];
    if (param_1[iVar8] <= iVar1) goto LAB_14bff83ce;
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = iVar1;
    iVar5 = iVar8;
  } while( true );
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UDS_VM_WorldBoss_WorldBossList::SetBossList'::__l2::<lambda_1>_>_> @ 14bff8480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_VM_WorldBoss_WorldBossList::SetBossList_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_virtual_void___cdecl_UDS_VM_WorldBoss_WorldBossList::SetBossList(void)_::_2_::<lambda_1>_>
          param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  int *local_338;
  int *local_328;
  int *local_320;
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
    ppiVar5 = &local_328;
    do {
      piVar8 = ppiVar5[1];
      piVar4 = *ppiVar5;
      piVar1 = ppiVar5[2];
      iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
      local_338._0_4_ = (int)piVar1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_14bff8530:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar6 = piVar8 + 1;
          iVar2 = piVar9[iVar3 >> 1];
          piVar9[iVar3 >> 1] = *piVar9;
          *piVar9 = iVar2;
          piVar4 = piVar9;
LAB_14bff8560:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar8) goto code_r0x00014bff8569;
          goto LAB_14bff8570;
        }
        for (; piVar4 = piVar9, piVar1 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -1) {
          while (piVar1 = piVar1 + 1, piVar1 <= piVar8) {
            if (*piVar4 < *piVar1) {
              piVar4 = piVar1;
            }
          }
          iVar3 = *piVar4;
          *piVar4 = *piVar8;
          *piVar8 = iVar3;
        }
        goto LAB_14bff8628;
      }
LAB_14bff8617:
      local_338 = piVar1;
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_VM_WorldBoss_WorldBossList::SetBossList_::__l2::<lambda_1>_>_>
                (piVar4,iVar3,param_3,param_4);
LAB_14bff8628:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_328 <= ppiVar5);
  }
  return;
code_r0x00014bff8569:
  if (*piVar4 <= *piVar9) goto LAB_14bff8560;
LAB_14bff8570:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar9) break;
  } while (*piVar9 <= *piVar6);
  if (piVar4 <= piVar6) {
    iVar3 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar3;
    goto LAB_14bff8560;
  }
  iVar3 = *piVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *piVar9 = *piVar6;
  *piVar6 = iVar3;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar8) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar8;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar6 <= piVar9 + 1) goto LAB_14bff8628;
    piVar8 = piVar7 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar6) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar7 + -2;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_14bff8628;
  }
  iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_14bff8617;
  goto LAB_14bff8530;
}

// IsA<FDS_ViewModelConext_WorldMapIconToolTip,FDS_ViewModelContext> @ 14bff86a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelConext_WorldMapIconToolTip,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelConext_WorldMapIconToolTip::StaticStruct();
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

// IsA<FDS_ViewModelContext_DailyQuestListSlot,FDS_ViewModelContext> @ 14bff87d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_DailyQuestListSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_DailyQuestListSlot::StaticStruct();
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

// IsA<FDS_ViewModelContext_IconInfo,FDS_ViewModelContext> @ 14bff8900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_IconInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_IconInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_ItemDetailInfo,FDS_ViewModelContext> @ 14bff8a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ItemDetailInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ItemDetailInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_Key,FDS_ViewModelContext> @ 14bff8b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_Key,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_Key::StaticStruct();
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

// IsA<FDS_ViewModelContext_LockOnTarget,FDS_ViewModelContext> @ 14bff8c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_LockOnTarget,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_LockOnTarget::StaticStruct();
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

// IsA<FDS_ViewModelContext_MapTypeInfo,FDS_ViewModelContext> @ 14bff8dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_MapTypeInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_MapTypeInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_MenuInfoSlot,FDS_ViewModelContext> @ 14bff8ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_MenuInfoSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_MenuInfoSlot::StaticStruct();
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

// IsA<FDS_ViewModelContext_NpcGift,FDS_ViewModelContext> @ 14bff9020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_NpcGift,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_NpcGift::StaticStruct();
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

// IsA<FDS_ViewModelContext_RaidPartySlot,FDS_ViewModelContext> @ 14bff9150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_RaidPartySlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_RaidPartySlot::StaticStruct();
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

// IsA<FDS_ViewModelContext_RingCmdTooltip,FDS_ViewModelContext> @ 14bff9280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_RingCmdTooltip,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_RingCmdTooltip::StaticStruct();
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

// IsA<FDS_ViewModelContext_Smite,FDS_ViewModelContext> @ 14bff93b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_Smite,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_Smite::StaticStruct();
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

// IsA<FDS_ViewModelContext_StatusUpgradeInfo,FDS_ViewModelContext> @ 14bff94e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_StatusUpgradeInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_StatusUpgradeInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldBossSlot,FDS_ViewModelContext> @ 14bff9610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldBossSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_WorldBossSlot::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldInfo,FDS_ViewModelContext> @ 14bff9740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_WorldInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_WorldInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldMapBreachIconInfo,FDS_ViewModelContext> @ 14bff9870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldMapBreachIconInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_WorldMapBreachIconInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldMapDetectionIconInfo,FDS_ViewModelContext> @ 14bff99a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldMapDetectionIconInfo,FDS_ViewModelContext>
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
  pUVar6 = FDS_ViewModelContext_WorldMapDetectionIconInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldMapIconAndTextInfo,FDS_ViewModelContext> @ 14bff9ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldMapIconAndTextInfo,FDS_ViewModelContext>
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
  pUVar6 = FDS_ViewModelContext_WorldMapIconAndTextInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldMapIconInfo,FDS_ViewModelContext> @ 14bff9c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldMapIconInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_WorldMapIconInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldMapMarkerInfo,FDS_ViewModelContext> @ 14bff9d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldMapMarkerInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_WorldMapMarkerInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldMapMarkerListItemInfo,FDS_ViewModelContext> @ 14bff9e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldMapMarkerListItemInfo,FDS_ViewModelContext>
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
  pUVar6 = FDS_ViewModelContext_WorldMapMarkerListItemInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_WorldMapRegionCategory,FDS_ViewModelContext> @ 14bff9f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_WorldMapRegionCategory,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_WorldMapRegionCategory::StaticStruct();
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

// IsA<FDS_ViewModelContext_ZoneInfo,FDS_ViewModelContext> @ 14bffa0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_ZoneInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ZoneInfo::StaticStruct();
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

// MakeContext<FDS_ViewModelConext_WorldMapIconToolTip> @ 14bffa1f0

TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> * __cdecl
MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>
          (TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelConext_WorldMapIconToolTip *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x88);
  if (pFVar3 == (FDS_ViewModelConext_WorldMapIconToolTip *)0x0) {
    pFVar3 = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    *(undefined2 *)&pFVar3->field_0x45 = 0;
    pFVar3->field_0x47 = 0;
    *(undefined2 *)&pFVar3->field_0x4d = 0;
    pFVar3->field_0x4f = 0;
    *(undefined8 *)&pFVar3->BreachBaseID = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelConext_WorldMapIconToolTip__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->MapIndexBaseID = 0;
    pFVar3->MapIndexSpawnID = 0;
    pFVar3->NpcBaseID = 0;
    pFVar3->ZoneID = 0;
    (pFVar3->PartyMemberName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->PartyMemberName).Data.ArrayNum = 0;
    (pFVar3->PartyMemberName).Data.ArrayMax = 0;
    pFVar3->DetectionTableID = 0;
    pFVar3->IsStuff = false;
    pFVar3->MarkerIndex = 0;
    pFVar3->IsSharedMarker = false;
    (pFVar3->MarkerMemo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->MarkerMemo).Data.ArrayNum = 0;
    (pFVar3->MarkerMemo).Data.ArrayMax = 0;
    pFVar3->BreachEntityID = 0;
    pFVar3->WorldBossID = 0;
    pFVar3->QuestBoardID = 0;
    pFVar3->QuestID = 0;
    pFVar3->QuestObjectiveID = 0;
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
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelConext_WorldMapIconToolTip__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelConext_WorldMapIconToolTip **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelConext_WorldMapIconToolTip *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelConext_WorldMapIconToolTip::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_CharSlotByRaidPartyData> @ 14bffa350

TSharedPtr<FDS_ViewModelContext_CharSlotByRaidPartyData,1> * __cdecl
MakeContext<FDS_ViewModelContext_CharSlotByRaidPartyData>
          (TSharedPtr<FDS_ViewModelContext_CharSlotByRaidPartyData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_CharSlotByRaidPartyData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext_CharSlotByRaidPartyData,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0xa8);
  if (pFVar3 == (FDS_ViewModelContext_CharSlotByRaidPartyData *)0x0) {
    pFVar3 = (FDS_ViewModelContext_CharSlotByRaidPartyData *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->field_0x32 = 0;
    *(undefined2 *)&pFVar3->field_0x36 = 0;
    *(undefined8 *)&(pFVar3->OnClickSlotButtonUpDelegate).field_0x10 = 0;
    *(undefined8 *)&(pFVar3->OnDropModeChangeDelegate).field_0x10 = 0;
    *(undefined8 *)&(pFVar3->AddClickDel).field_0x10 = 0;
    *(undefined8 *)&(pFVar3->ChangeClickDel).field_0x10 = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_CharSlotByRaidPartyData__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->RaidPartySlotIndex = 0;
    pFVar3->CharSlotIndex = 0;
    pFVar3->IsDropMode = false;
    pFVar3->IsEmptySlot = false;
    (pFVar3->RaidPartySlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
    (pFVar3->RaidPartySlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&pFVar3->OnClickSlotButtonUpDelegate = 0;
    *(undefined8 *)&(pFVar3->OnClickSlotButtonUpDelegate).field_0x8 = 0;
    *(undefined8 *)&pFVar3->OnDropModeChangeDelegate = 0;
    *(undefined8 *)&(pFVar3->OnDropModeChangeDelegate).field_0x8 = 0;
    *(undefined8 *)&pFVar3->AddClickDel = 0;
    *(undefined8 *)&(pFVar3->AddClickDel).field_0x8 = 0;
    *(undefined8 *)&pFVar3->ChangeClickDel = 0;
    *(undefined8 *)&(pFVar3->ChangeClickDel).field_0x8 = 0;
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
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharSlotByRaidPartyData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_CharSlotByRaidPartyData **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CharSlotByRaidPartyData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_CharSlotByRaidPartyData,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelContext_CharSlotByRaidPartyData::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_CommonEditableText> @ 14bffa4c0

TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> * __cdecl
MakeContext<FDS_ViewModelContext_CommonEditableText>
          (TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_CommonEditableText *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x98);
  if (pFVar3 == (FDS_ViewModelContext_CommonEditableText *)0x0) {
    pFVar3 = (FDS_ViewModelContext_CommonEditableText *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    *(undefined4 *)&(pFVar3->DefaultText).field_0x1 = 0;
    *(undefined2 *)&(pFVar3->DefaultText).field_0x5 = 0;
    (pFVar3->DefaultText).field_0x7 = 0;
    *(undefined2 *)&(pFVar3->DefaultText).field_0x2d = 0;
    (pFVar3->DefaultText).field_0x2f = 0;
    *(undefined8 *)&(pFVar3->OnTextChangedDelegate).field_0x10 = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonEditableText__6B_;
    pFVar3->MaxTextLength = 1000;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    (pFVar3->DefaultText).StringTableType = None;
    (pFVar3->DefaultText).StringTableID = 0;
    (pFVar3->DefaultText).StringEnumTableNameID.ComparisonIndex = 0;
    (pFVar3->DefaultText).StringEnumTableNameID.Number = 0;
    (pFVar3->DefaultText).DateTime.Ticks = 0;
    (pFVar3->DefaultText).TimeSpan.Ticks = 0;
    (pFVar3->DefaultText).TimeExpressionType = None;
    (pFVar3->DefaultText).IsExpression = false;
    (pFVar3->DefaultText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->DefaultText).UniqueString.Data.ArrayNum = 0;
    (pFVar3->DefaultText).UniqueString.Data.ArrayMax = 0;
    (pFVar3->DefaultText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->DefaultText).FormatArgs.ArrayNum = 0;
    (pFVar3->DefaultText).FormatArgs.ArrayMax = 0;
    *(undefined8 *)&pFVar3->OnTextChangedDelegate = 0;
    *(undefined8 *)&(pFVar3->OnTextChangedDelegate).field_0x8 = 0;
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
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonEditableText__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_CommonEditableText **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonEditableText *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelContext_CommonEditableText::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_CommonVariation> @ 14bffa630

TSharedPtr<FDS_ViewModelContext_CommonVariation,1> * __cdecl
MakeContext<FDS_ViewModelContext_CommonVariation>
          (TSharedPtr<FDS_ViewModelContext_CommonVariation,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FLinearColor FVar2;
  bool bVar3;
  FDS_ViewModelContext_CommonVariation *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FDS_ViewModelContext_CommonVariation,1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar4 = operator_new(0x60);
  if (pFVar4 == (FDS_ViewModelContext_CommonVariation *)0x0) {
    pFVar4 = (FDS_ViewModelContext_CommonVariation *)0x0;
  }
  else {
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar4->field_0x22 = 0;
    *(undefined2 *)&pFVar4->field_0x26 = 0;
    *(undefined4 *)&pFVar4->field_0x5c = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonVariation__6B_;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    pFVar4->Visibility = Collapsed;
    pFVar4->VisibilityVariation = Collapsed;
    (pFVar4->Variation).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Variation).Data.ArrayNum = 0;
    (pFVar4->Variation).Data.ArrayMax = 0;
    (pFVar4->Variation2).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Variation2).Data.ArrayNum = 0;
    FVar2 = FLinearColor::White;
    (pFVar4->Variation2).Data.ArrayMax = 0;
    pFVar4->VariationStyleID = 0;
    (pFVar4->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = pFVar4;
  pTVar5 = operator_new(0x20);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonVariation__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_CommonVariation **)&pTVar5[1].SharedReferenceCount = pFVar4;
    pTVar6 = pTVar5;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonVariation *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonVariation,1> *)(*pcVar1)();
    return pTVar7;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar8 = FDS_ViewModelContext_CommonVariation::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar8;
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

// MakeContext<FDS_ViewModelContext_Entity> @ 14bffa780

TSharedPtr<FDS_ViewModelContext_Entity,1> * __cdecl
MakeContext<FDS_ViewModelContext_Entity>
          (TSharedPtr<FDS_ViewModelContext_Entity,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_Entity *pFVar3;
  FDS_ViewModelContext_Entity *pFVar4;
  TSharedPtr<FDS_ViewModelContext_Entity,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_Entity *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_Entity *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_Entity *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_Entity__6B_;
    pFVar3->EntityID = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_Entity *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Entity__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_Entity *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_Entity,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_Entity::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_WorldMapMarkerInfo> @ 14bffa8a0

TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> * __cdecl
MakeContext<FDS_ViewModelContext_WorldMapMarkerInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> *__return_storage_ptr__)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this;
  code *pcVar1;
  TVector2<double> TVar2;
  bool bVar3;
  FDS_ViewModelContext_WorldMapMarkerInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  undefined8 local_res8;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar4 = operator_new(0x120);
  if (pFVar4 == (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0) {
    pFVar4 = (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0;
  }
  else {
    this = &(pFVar4->WorldMapMarkerInfo).Widget;
    local_res8 = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 1) = 0;
    *(undefined2 *)((longlong)&pFVar4->_padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pFVar4->_padding_ + 7) = 0;
    (pFVar4->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->WorldMapMarkerInfo).Memo.Data.ArrayNum = 0;
    (pFVar4->WorldMapMarkerInfo).Memo.Data.ArrayMax = 0;
    pFVar4->Index = 0;
    pFVar4->iconID = 0;
    pFVar4->IsSharedMarker = false;
    pFVar4->IsNewCreate = false;
    *(undefined6 *)&pFVar4->field_0xfa = 0;
    (pFVar4->FirstPanelTranslation).field0_0x0._s_0.X = 0.0;
    (pFVar4->FirstPanelTranslation).field0_0x0._s_0.Y = 0.0;
    (pFVar4->CurPanelTranslation).field0_0x0._s_0.X = 0.0;
    (pFVar4->CurPanelTranslation).field0_0x0._s_0.Y = 0.0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    TVar2 = UE::Math::TVector2<double>::ZeroVector;
    *(undefined1 *)&pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(TVector2<double>_u_0 *)&pFVar4->_padding_ = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapMarkerInfo__6B_;
    (pFVar4->MapStartPos).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (pFVar4->ReferencePosition).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (pFVar4->WorldMapMarkerInfo).key = 0;
    (pFVar4->WorldMapMarkerInfo).Floor = 0;
    (pFVar4->WorldMapMarkerInfo).IslandID = 0;
    (pFVar4->WorldMapMarkerInfo).IndoorGroupID = 0;
    (pFVar4->WorldMapMarkerInfo).SavedScale = 0.0;
    (pFVar4->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->WorldMapMarkerInfo).Memo.Data.ArrayNum = 0;
    (pFVar4->WorldMapMarkerInfo).Memo.Data.ArrayMax = 0;
    (pFVar4->WorldMapMarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (pFVar4->WorldMapMarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (pFVar4->WorldMapMarkerInfo).MakerVector2D.field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    this->WeakPtr = (FWeakObjectPtr)0x0;
    FWeakObjectPtr::operator=(&this->WeakPtr,(FObjectPtr)&local_res8);
    pFVar4->Index = 0;
    pFVar4->iconID = 0;
    pFVar4->IsSharedMarker = false;
    pFVar4->IsNewCreate = false;
    (pFVar4->FirstPanelTranslation).field0_0x0._s_0.X = 0.0;
    (pFVar4->FirstPanelTranslation).field0_0x0._s_0.Y = 0.0;
    (pFVar4->CurPanelTranslation).field0_0x0._s_0.X = 0.0;
    (pFVar4->CurPanelTranslation).field0_0x0._s_0.Y = 0.0;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = pFVar4;
  pTVar5 = operator_new(0x20);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapMarkerInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_WorldMapMarkerInfo **)&pTVar5[1].SharedReferenceCount = pFVar4;
    pTVar6 = pTVar5;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> *)(*pcVar1)();
    return pTVar7;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar8 = FDS_ViewModelContext_WorldMapMarkerInfo::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar8;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
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
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// NewObject<UDS_M_CommonLevelGauge_NpcRelation> @ 14bffaab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_M_CommonLevelGauge_NpcRelation * __cdecl
NewObject<UDS_M_CommonLevelGauge_NpcRelation>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_M_CommonLevelGauge_NpcRelation *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_M_CommonLevelGauge_NpcRelation_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_M_CommonLevelGauge_NpcRelation *)
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

// NewObject<UDS_UserObjectTreeItem> @ 14bffab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_UserObjectTreeItem * __cdecl NewObject<UDS_UserObjectTreeItem>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_UserObjectTreeItem *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_UserObjectTreeItem_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_UserObjectTreeItem *)
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

// NewObject<UDS_VM_ActionFunction> @ 14bffabf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_ActionFunction * __cdecl
NewObject<UDS_VM_ActionFunction>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_ActionFunction *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_ActionFunction_NoRegister();
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
  pUVar2 = (UDS_VM_ActionFunction *)
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

// NewObject<UDS_VM_EnvironmentInfo> @ 14bffacf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_EnvironmentInfo * __cdecl
NewObject<UDS_VM_EnvironmentInfo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_EnvironmentInfo *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_EnvironmentInfo_NoRegister();
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
  pUVar2 = (UDS_VM_EnvironmentInfo *)
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

// NewObject<UDS_VM_MountData> @ 14bffadf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MountData * __cdecl
NewObject<UDS_VM_MountData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_MountData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_MountData_NoRegister();
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
  pUVar2 = (UDS_VM_MountData *)
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

// NewObject<UDS_VM_TotalMenu> @ 14bffaef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TotalMenu * __cdecl
NewObject<UDS_VM_TotalMenu>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_TotalMenu *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_NoRegister();
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
  pUVar2 = (UDS_VM_TotalMenu *)
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

// NewObject<UDS_VM_TotalMenu_Item> @ 14bffaff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TotalMenu_Item * __cdecl
NewObject<UDS_VM_TotalMenu_Item>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_TotalMenu_Item *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_Item_NoRegister();
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
  pUVar2 = (UDS_VM_TotalMenu_Item *)
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

// NewObject<UDS_VM_TotalMenu_PlayerInfo> @ 14bffb0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TotalMenu_PlayerInfo * __cdecl
NewObject<UDS_VM_TotalMenu_PlayerInfo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_TotalMenu_PlayerInfo *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_NoRegister();
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
  pUVar2 = (UDS_VM_TotalMenu_PlayerInfo *)
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

// NewObject<UDS_VM_WorldBoss_Info> @ 14bffb1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldBoss_Info * __cdecl
NewObject<UDS_VM_WorldBoss_Info>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldBoss_Info *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_Info_NoRegister();
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
  pUVar2 = (UDS_VM_WorldBoss_Info *)
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

// NewObject<UDS_VM_WorldBoss_Ranking> @ 14bffb2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldBoss_Ranking * __cdecl
NewObject<UDS_VM_WorldBoss_Ranking>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldBoss_Ranking *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_Ranking_NoRegister();
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
  pUVar2 = (UDS_VM_WorldBoss_Ranking *)
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

// NewObject<UDS_VM_WorldBoss_RankingList> @ 14bffb3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldBoss_RankingList * __cdecl
NewObject<UDS_VM_WorldBoss_RankingList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldBoss_RankingList *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_RankingList_NoRegister();
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
  pUVar2 = (UDS_VM_WorldBoss_RankingList *)
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

// NewObject<UDS_VM_WorldBoss_SpawnInfo> @ 14bffb4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldBoss_SpawnInfo * __cdecl
NewObject<UDS_VM_WorldBoss_SpawnInfo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldBoss_SpawnInfo *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_SpawnInfo_NoRegister();
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
  pUVar2 = (UDS_VM_WorldBoss_SpawnInfo *)
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

// NewObject<UDS_VM_WorldBoss_WorldBossList> @ 14bffb5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldBoss_WorldBossList * __cdecl
NewObject<UDS_VM_WorldBoss_WorldBossList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldBoss_WorldBossList *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_WorldBossList_NoRegister();
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
  pUVar2 = (UDS_VM_WorldBoss_WorldBossList *)
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

// NewObject<UDS_VM_WorldMapMarkerList> @ 14bffb6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldMapMarkerList * __cdecl
NewObject<UDS_VM_WorldMapMarkerList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldMapMarkerList *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldMapMarkerList_NoRegister();
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
  pUVar2 = (UDS_VM_WorldMapMarkerList *)
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

// NewObject<UDS_VM_WorldMapZoneList> @ 14bffb7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldMapZoneList * __cdecl
NewObject<UDS_VM_WorldMapZoneList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldMapZoneList *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldMapZoneList_NoRegister();
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
  pUVar2 = (UDS_VM_WorldMapZoneList *)
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

// NewObject<UDS_VM_WorldMap_IndoorFloorInfoList> @ 14bffb8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldMap_IndoorFloorInfoList * __cdecl
NewObject<UDS_VM_WorldMap_IndoorFloorInfoList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldMap_IndoorFloorInfoList *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldMap_IndoorFloorInfoList_NoRegister();
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
  pUVar2 = (UDS_VM_WorldMap_IndoorFloorInfoList *)
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

// NewObject<UDS_VM_WorldMap_MapIndexFilter> @ 14bffb9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WorldMap_MapIndexFilter * __cdecl
NewObject<UDS_VM_WorldMap_MapIndexFilter>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WorldMap_MapIndexFilter *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WorldMap_MapIndexFilter_NoRegister();
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
  pUVar2 = (UDS_VM_WorldMap_MapIndexFilter *)
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

// SafeCast<FDS_ViewModelConext_WorldMapIconToolTip> @ 14bffd470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> * __cdecl
SafeCast<FDS_ViewModelConext_WorldMapIconToolTip>
          (TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffd5bf;
  }
  pUVar6 = FDS_ViewModelConext_WorldMapIconToolTip::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)(*pcVar4)();
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
LAB_14bffd5b4:
    __return_storage_ptr__->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
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
    if (!bVar5) goto LAB_14bffd5b4;
    __return_storage_ptr__->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffd5bf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_DailyQuestListSlot> @ 14bffd600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_DailyQuestListSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_DailyQuestListSlot>
          (TSharedPtr<FDS_ViewModelContext_DailyQuestListSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_DailyQuestListSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_DailyQuestListSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffd74f;
  }
  pUVar6 = FDS_ViewModelContext_DailyQuestListSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_DailyQuestListSlot,1> *)(*pcVar4)();
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
LAB_14bffd744:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_DailyQuestListSlot *)0x0;
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
    if (!bVar5) goto LAB_14bffd744;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_DailyQuestListSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffd74f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_IconInfo> @ 14bffd790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_IconInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_IconInfo>
          (TSharedPtr<FDS_ViewModelContext_IconInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_IconInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_IconInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffd8df;
  }
  pUVar6 = FDS_ViewModelContext_IconInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_IconInfo,1> *)(*pcVar4)();
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
LAB_14bffd8d4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_IconInfo *)0x0;
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
    if (!bVar5) goto LAB_14bffd8d4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_IconInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffd8df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ItemDetailInfo> @ 14bffd920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_ItemDetailInfo>
          (TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ItemDetailInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffda6f;
  }
  pUVar6 = FDS_ViewModelContext_ItemDetailInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> *)(*pcVar4)();
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
LAB_14bffda64:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ItemDetailInfo *)0x0;
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
    if (!bVar5) goto LAB_14bffda64;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ItemDetailInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffda6f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_Key> @ 14bffdab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_Key,1> * __cdecl
SafeCast<FDS_ViewModelContext_Key>
          (TSharedPtr<FDS_ViewModelContext_Key,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Key,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Key *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffdbff;
  }
  pUVar6 = FDS_ViewModelContext_Key::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_Key,1> *)(*pcVar4)();
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
LAB_14bffdbf4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Key *)0x0;
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
    if (!bVar5) goto LAB_14bffdbf4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Key *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffdbff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_LockOnTarget> @ 14bffdc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_LockOnTarget,1> * __cdecl
SafeCast<FDS_ViewModelContext_LockOnTarget>
          (TSharedPtr<FDS_ViewModelContext_LockOnTarget,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_LockOnTarget,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_LockOnTarget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffdd8f;
  }
  pUVar6 = FDS_ViewModelContext_LockOnTarget::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_LockOnTarget,1> *)(*pcVar4)();
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
LAB_14bffdd84:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_LockOnTarget *)0x0;
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
    if (!bVar5) goto LAB_14bffdd84;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_LockOnTarget *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffdd8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_MapTypeInfo> @ 14bffddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_MapTypeInfo>
          (TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MapTypeInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffdf1f;
  }
  pUVar6 = FDS_ViewModelContext_MapTypeInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> *)(*pcVar4)();
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
LAB_14bffdf14:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MapTypeInfo *)0x0;
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
    if (!bVar5) goto LAB_14bffdf14;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MapTypeInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffdf1f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_MenuInfoSlot> @ 14bffdf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_MenuInfoSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_MenuInfoSlot>
          (TSharedPtr<FDS_ViewModelContext_MenuInfoSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_MenuInfoSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MenuInfoSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffe0af;
  }
  pUVar6 = FDS_ViewModelContext_MenuInfoSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_MenuInfoSlot,1> *)(*pcVar4)();
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
LAB_14bffe0a4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MenuInfoSlot *)0x0;
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
    if (!bVar5) goto LAB_14bffe0a4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MenuInfoSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffe0af:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_NpcGift> @ 14bffe0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_NpcGift,1> * __cdecl
SafeCast<FDS_ViewModelContext_NpcGift>
          (TSharedPtr<FDS_ViewModelContext_NpcGift,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_NpcGift,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_NpcGift *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffe23f;
  }
  pUVar6 = FDS_ViewModelContext_NpcGift::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_NpcGift,1> *)(*pcVar4)();
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
LAB_14bffe234:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_NpcGift *)0x0;
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
    if (!bVar5) goto LAB_14bffe234;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_NpcGift *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffe23f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_RaidPartySlot> @ 14bffe280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_RaidPartySlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_RaidPartySlot>
          (TSharedPtr<FDS_ViewModelContext_RaidPartySlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_RaidPartySlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_RaidPartySlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffe3cf;
  }
  pUVar6 = FDS_ViewModelContext_RaidPartySlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_RaidPartySlot,1> *)(*pcVar4)();
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
LAB_14bffe3c4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_RaidPartySlot *)0x0;
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
    if (!bVar5) goto LAB_14bffe3c4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_RaidPartySlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffe3cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_RingCmdTooltip> @ 14bffe410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> * __cdecl
SafeCast<FDS_ViewModelContext_RingCmdTooltip>
          (TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_RingCmdTooltip *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffe55f;
  }
  pUVar6 = FDS_ViewModelContext_RingCmdTooltip::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> *)(*pcVar4)();
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
LAB_14bffe554:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_RingCmdTooltip *)0x0;
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
    if (!bVar5) goto LAB_14bffe554;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_RingCmdTooltip *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffe55f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_Smite> @ 14bffe5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_Smite,1> * __cdecl
SafeCast<FDS_ViewModelContext_Smite>
          (TSharedPtr<FDS_ViewModelContext_Smite,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Smite,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Smite *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffe6ef;
  }
  pUVar6 = FDS_ViewModelContext_Smite::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_Smite,1> *)(*pcVar4)();
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
LAB_14bffe6e4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Smite *)0x0;
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
    if (!bVar5) goto LAB_14bffe6e4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Smite *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffe6ef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_StatusUpgradeInfo> @ 14bffe730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_StatusUpgradeInfo>
          (TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_StatusUpgradeInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffe87f;
  }
  pUVar6 = FDS_ViewModelContext_StatusUpgradeInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> *)(*pcVar4)();
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
LAB_14bffe874:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_StatusUpgradeInfo *)0x0;
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
    if (!bVar5) goto LAB_14bffe874;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_StatusUpgradeInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffe87f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldBossSlot> @ 14bffe8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldBossSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldBossSlot>
          (TSharedPtr<FDS_ViewModelContext_WorldBossSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldBossSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldBossSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffea0f;
  }
  pUVar6 = FDS_ViewModelContext_WorldBossSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldBossSlot,1> *)(*pcVar4)();
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
LAB_14bffea04:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldBossSlot *)0x0;
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
    if (!bVar5) goto LAB_14bffea04;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldBossSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffea0f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldInfo> @ 14bffea50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffeb9f;
  }
  pUVar6 = FDS_ViewModelContext_WorldInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldInfo,1> *)(*pcVar4)();
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
LAB_14bffeb94:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldInfo *)0x0;
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
    if (!bVar5) goto LAB_14bffeb94;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffeb9f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldMapBreachIconInfo> @ 14bffebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldMapBreachIconInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldMapBreachIconInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldMapBreachIconInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapBreachIconInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffed2f;
  }
  pUVar6 = FDS_ViewModelContext_WorldMapBreachIconInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapBreachIconInfo,1> *)(*pcVar4)();
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
LAB_14bffed24:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0;
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
    if (!bVar5) goto LAB_14bffed24;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapBreachIconInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffed2f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldMapDetectionIconInfo> @ 14bffed70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldMapDetectionIconInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldMapDetectionIconInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldMapDetectionIconInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapDetectionIconInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapDetectionIconInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bffeebf;
  }
  pUVar6 = FDS_ViewModelContext_WorldMapDetectionIconInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapDetectionIconInfo,1> *)(*pcVar4)();
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
LAB_14bffeeb4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapDetectionIconInfo *)0x0;
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
    if (!bVar5) goto LAB_14bffeeb4;
    __return_storage_ptr__->Object =
         (FDS_ViewModelContext_WorldMapDetectionIconInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bffeebf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldMapIconAndTextInfo> @ 14bffef00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldMapIconAndTextInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldMapIconAndTextInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldMapIconAndTextInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapIconAndTextInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapIconAndTextInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bfff04f;
  }
  pUVar6 = FDS_ViewModelContext_WorldMapIconAndTextInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapIconAndTextInfo,1> *)(*pcVar4)();
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
LAB_14bfff044:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapIconAndTextInfo *)0x0;
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
    if (!bVar5) goto LAB_14bfff044;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapIconAndTextInfo *)param_1->Object
    ;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bfff04f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldMapIconInfo> @ 14bfff090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldMapIconInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapIconInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bfff1df;
  }
  pUVar6 = FDS_ViewModelContext_WorldMapIconInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> *)(*pcVar4)();
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
LAB_14bfff1d4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapIconInfo *)0x0;
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
    if (!bVar5) goto LAB_14bfff1d4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapIconInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bfff1df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldMapMarkerInfo> @ 14bfff220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldMapMarkerInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bfff36f;
  }
  pUVar6 = FDS_ViewModelContext_WorldMapMarkerInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> *)(*pcVar4)();
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
LAB_14bfff364:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0;
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
    if (!bVar5) goto LAB_14bfff364;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapMarkerInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bfff36f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldMapMarkerListItemInfo> @ 14bfff3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldMapMarkerListItemInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldMapMarkerListItemInfo>
          (TSharedPtr<FDS_ViewModelContext_WorldMapMarkerListItemInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerListItemInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapMarkerListItemInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bfff4ff;
  }
  pUVar6 = FDS_ViewModelContext_WorldMapMarkerListItemInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapMarkerListItemInfo,1> *)(*pcVar4)();
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
LAB_14bfff4f4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapMarkerListItemInfo *)0x0;
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
    if (!bVar5) goto LAB_14bfff4f4;
    __return_storage_ptr__->Object =
         (FDS_ViewModelContext_WorldMapMarkerListItemInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bfff4ff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_WorldMapRegionCategory> @ 14bfff540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> * __cdecl
SafeCast<FDS_ViewModelContext_WorldMapRegionCategory>
          (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapRegionCategory *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bfff68f;
  }
  pUVar6 = FDS_ViewModelContext_WorldMapRegionCategory::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar4)();
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
LAB_14bfff684:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapRegionCategory *)0x0;
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
    if (!bVar5) goto LAB_14bfff684;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_WorldMapRegionCategory *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bfff68f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ZoneInfo> @ 14bfff6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_ZoneInfo>
          (TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ZoneInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bfff81f;
  }
  pUVar6 = FDS_ViewModelContext_ZoneInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ZoneInfo,1> *)(*pcVar4)();
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
LAB_14bfff814:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ZoneInfo *)0x0;
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
    if (!bVar5) goto LAB_14bfff814;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ZoneInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bfff81f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// `vcall'{824,{flat}}'_}' @ 14c0000f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]: __cdecl UDS_VM_W_RaidParty_Slot::`vcall'{824,{flat}}' }' */

void __thiscall UDS_VM_W_RaidParty_Slot::_vcall__824__flat______(UDS_VM_W_RaidParty_Slot *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c0000f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x338))();
  return;
}

// `vcall'{816,{flat}}'_}' @ 14c000100

/* [thunk]: __cdecl UDS_VM_WorldMapIndexBase::`vcall'{816,{flat}}' }' */

void __thiscall UDS_VM_WorldMapIndexBase::_vcall__816__flat______(UDS_VM_WorldMapIndexBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c000103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))();
  return;
}

// `vcall'{688,{flat}}'_}' @ 14c000110

/* [thunk]: __cdecl UDS_VM_WorldMap_DetectionIcon::`vcall'{688,{flat}}' }' */

void __thiscall
UDS_VM_WorldMap_DetectionIcon::_vcall__688__flat______(UDS_VM_WorldMap_DetectionIcon *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c000113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))();
  return;
}

// `vcall'{688,{flat}}'_}' @ 14c000120

/* [thunk]: __cdecl UDS_VM_WorldMap_Icon::`vcall'{688,{flat}}' }' */

void __thiscall UDS_VM_WorldMap_Icon::_vcall__688__flat______(UDS_VM_WorldMap_Icon *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c000123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))();
  return;
}

// `vcall'{824,{flat}}'_}' @ 14c000130

/* [thunk]: __cdecl UDS_VM_WorldMap_Icon::`vcall'{824,{flat}}' }' */

void __thiscall UDS_VM_WorldMap_Icon::_vcall__824__flat______(UDS_VM_WorldMap_Icon *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c000133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x338))();
  return;
}

// `vcall'{832,{flat}}'_}' @ 14c000140

/* [thunk]: __cdecl UDS_VM_WorldMap_Icon::`vcall'{832,{flat}}' }' */

void __thiscall UDS_VM_WorldMap_Icon::_vcall__832__flat______(UDS_VM_WorldMap_Icon *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c000143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))();
  return;
}

// `scalar_deleting_destructor' @ 14c000150

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000180

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0001b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0001e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000210

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_WorldBossSpawnStatus_const_&,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000240

void * __thiscall
IBaseDelegateInstance<void___cdecl(float),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(float),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000270

void * __thiscall
IBaseDelegateInstance<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0002a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0002d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000300

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000330

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_ItemDetailOption),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000360

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_LeftMenuType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000390

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0003c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(__int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(__int64,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0003f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000420

void * __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000450

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UDS_UserObjectTreeItem_const_,bool_const___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UDS_UserObjectTreeItem_const_,bool_const___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000480

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_MapSpawn,void___cdecl(float),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_MapSpawn,void___cdecl(float),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0004b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_MapTexture,void___cdecl(float),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_MapTexture,void___cdecl(float),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0004e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_MapTexture,void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_MapTexture,void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000510

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000540

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000570

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0005a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(float,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0005d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000600

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000630

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000660

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000690

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_BattleNPC,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0006c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0006f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000720

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000750

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_MountNPC,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000780

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0007b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0007e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000810

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000840

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_NPC,void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000870

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0008a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(enum_EDS_StuffState_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0008d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000900

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000930

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000960

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000990

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_NameTag_Stuff,void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0009c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_InventoryBagTabBtn,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_InventoryBagTabBtn,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0009f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_ItemDetailInfo,void___cdecl(enum_EDS_ItemDetailOption),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000a20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000a50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000a80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000ab0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000ae0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginMenu,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000b10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginWorld,void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginWorld,void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000b40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginWorld,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginWorld,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000b70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginWorld,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_LoginWorld,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000ba0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Mount_Status,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Mount_Status,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000bd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Mount_Status,void___cdecl(FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Mount_Status,void___cdecl(FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000c00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Mount_Status,void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000c30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Mount_Status,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Mount_Status,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000c60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_NpcRelation,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_NpcRelation,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000c90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_NpcRelation,void___cdecl(enum_EDS_ItemBasketType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000cc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_NpcRelation,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_NpcRelation,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000cf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Patcher,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Patcher,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000d20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Patcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_Patcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000d50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_QuestDailyListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_QuestDailyListSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000d80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RaidParty_Character_Slot,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RaidParty_Character_Slot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000db0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RaidParty_Slot,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RaidParty_Slot,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000de0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RaidParty_Slot,void___cdecl(enum_EDS_RaidPartyNotifyType,__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000e10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd,void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000e40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000e70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000ea0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd_IconImg,void___cdecl(int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd_IconImg,void___cdecl(int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000ed0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd_MenuSlot,void___cdecl(int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_RingCmd_MenuSlot,void___cdecl(int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000f00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SmiteEffect,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SmiteEffect,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000f30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SmiteEffect,void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_W_SmiteEffect,void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000f60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000f90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_Info,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_Info,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000fc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_SpawnInfo,void___cdecl(enum_EDS_WorldBossSpawnStatus_const_&,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c000ff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_SpawnInfo,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_SpawnInfo,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_SpawnInfo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_SpawnInfo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001050

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_WorldBossSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldBoss_WorldBossSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0010b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0010e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001110

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0011a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0011d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FDS_WarpDeviceIconData>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FDS_WarpDeviceIconData>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001200

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001230

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001260

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001290

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0012c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0012f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,UDS_UserWidget_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,UDS_UserWidget_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001320

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001350

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001380

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0013b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(void),FDefaultDelegateUserPolicy,UDS_UserWidget_*,UDS_UserWidget_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(void),FDefaultDelegateUserPolicy,UDS_UserWidget_*,UDS_UserWidget_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0013e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapIndexBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001410

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapMarkerList,void___cdecl(enum_EDS_LeftMenuType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001440

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapMarkerList,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapMarkerList,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001470

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapMarkerListSlot,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapMarkerListSlot,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0014a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapZoneList,void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapZoneList,void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0014d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMapZoneList,void___cdecl(enum_EDS_LeftMenuType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001500

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_BreachIcon,void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001530

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_BreachIcon,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_BreachIcon,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001560

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_BreachIcon,void___cdecl(__int64,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_BreachIcon,void___cdecl(__int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001590

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_DetectionIcon,void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0015c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_DetectionIcon,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_DetectionIcon,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0015f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_DetectionIcon,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_DetectionIcon,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001620

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001650

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001680

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0016b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0016e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_Icon,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001710

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_IconAndText,void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001740

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_IconAndText,void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_WorldMap_IconAndText,void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001770

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Math::TVector2<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0017a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0017d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001800

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001830

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_WorldBossSpawnStatus_const_&,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001860

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(float),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001890

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0018c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0018f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001920

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FDS_WarpDeviceIconData>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy,FDS_WarpDeviceIconData>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001950

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_WarpDeviceIconData),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001980

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_ItemDetailOption),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0019b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_LeftMenuType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0019e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001a10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UDS_UserWidget_*,UDS_UserWidget_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UDS_UserWidget_*,UDS_UserWidget_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001a40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(__int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(__int64,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001a70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,unsigned___int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001aa0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDS_CharacterSlotInfo,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDS_CharacterSlotInfo,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001ae0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelConext_WorldMapIconToolTip,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelConext_WorldMapIconToolTip,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001b20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ActionFunction,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ActionFunction,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001b60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CharSlotByRaidPartyData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CharSlotByRaidPartyData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001ba0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonEditableText,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonEditableText,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001be0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenu,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenu,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001c20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuPlayerInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_TotalMenuPlayerInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001c60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldBossSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldBossSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001ca0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001ce0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldMapMarkerInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldMapMarkerInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001d20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldMapMarkerListItemInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldMapMarkerListItemInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001d60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldMapRegionCategory,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_WorldMapRegionCategory,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c001da0

void * __thiscall
FDS_CharacterSlotInfo::_scalar_deleting_destructor_(FDS_CharacterSlotInfo *this,uint param_1)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7FDS_CharacterSlotInfo__6B_;
  pIVar1 = (this->CharacterName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->CharacterLevel).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FDS_SlotInfoBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// BakedResourcePrefix'' @ 15043fab0

void __cdecl `dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data;
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// DEFAULT_PARAMETER_VALUE_NAME'' @ 15043fad0

void __cdecl
`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
DEFAULT_PARAMETER_VALUE_NAME__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.
               AllocatorInstance.Data;
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
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

// Empty'' @ 15043faf0

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::~FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  return;
}

// Empty'' @ 15043fb10

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_HttpServer>::Empty__(void)

{
  TDS_Singleton<FDS_HttpServer>::Empty._padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&TDS_Singleton<FDS_HttpServer>::Empty.Urls);
  return;
}

// Empty'' @ 15043fb30

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

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 15043fb90

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 15043fbb0

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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 15043fbd0

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

