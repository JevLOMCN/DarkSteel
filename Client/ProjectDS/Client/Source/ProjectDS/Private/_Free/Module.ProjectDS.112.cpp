// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 370

// BakedResourcePrefix'' @ 1412829f0

void __cdecl `dynamic_initializer_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ::FString::FString(&FBakingConfiguration::BakedResourcePrefix,L"BAKE_");
  atexit(`dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__);
  return;
}

// Bit'' @ 141282a20

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 141282a40

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

// DEFAULT_PARAMETER_VALUE'' @ 141282aa0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE__(void)

{
  FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE = FLinearColor::Black;
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 141282ac0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
         DEFAULT_PARAMETER_VALUE_NAME__);
  return;
}

// Empty'' @ 141282ae0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_UIData>::Empty__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_UIData>::Empty__);
  return;
}

// StateName'' @ 141282b00

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 141282b20

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 141282b40

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 141282b60

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 141282b80

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 141282ba0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 141282bc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 141282be0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 141282c00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 141282c20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 141282c40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 141282c60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 141282c80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 141282ca0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 141282cc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 141282ce0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 141282d00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 141282d20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 141282d40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 141282d60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 141282d80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 141282da0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 141282dc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 141282de0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 141282e00

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 141282e20

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

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141282ea0

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

// `dynamic_initializer_for_'ErrorNamespace'' @ 141282f20

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 141282f50

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141282f70

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 141282f90

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 141282fb0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 141282fd0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141282ff0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141283010

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141283030

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 141283050

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 141283070

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 141283090

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 1412830b0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 1412830d0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 1412830f0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141283110

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141283130

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141283150

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

// `dynamic_initializer_for_'UnixSocketPath'' @ 1412831e0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'__UDS_VM_AchievementData___'' @ 141283200

void __cdecl _dynamic_initializer_for____UDS_VM_AchievementData_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_AchievementData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_Achievement,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ActionFunction___'' @ 141283240

void __cdecl _dynamic_initializer_for____UDS_VM_ActionFunction_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ActionFunction_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_Action,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_BuffInfo___'' @ 141283280

void __cdecl _dynamic_initializer_for____UDS_VM_BuffInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_BuffInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_BuffInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharBuffData___'' @ 1412832c0

void __cdecl _dynamic_initializer_for____UDS_VM_CharBuffData_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharBuffData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_CharBuff,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharDetailInfoGroup___'' @ 141283300

void __cdecl _dynamic_initializer_for____UDS_VM_CharDetailInfoGroup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharDetailInfoGroup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (CharDetailInfoGroup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharEvolveLevelList___'' @ 141283340

void __cdecl _dynamic_initializer_for____UDS_VM_CharEvolveLevelList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharEvolveLevelList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (CharEvolveLevelList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharEvolveLevel___'' @ 141283380

void __cdecl _dynamic_initializer_for____UDS_VM_CharEvolveLevel_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharEvolveLevel_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(CharEvolveLevel,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharInfoData___'' @ 1412833c0

void __cdecl _dynamic_initializer_for____UDS_VM_CharInfoData_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharInfoData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_CharInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharSkillList___'' @ 141283400

void __cdecl _dynamic_initializer_for____UDS_VM_CharSkillList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharSkillList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(SkillInfoList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharStatusUpgrade___'' @ 141283440

void __cdecl _dynamic_initializer_for____UDS_VM_CharStatusUpgrade_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharStatusUpgrade_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (CharacterStatusUpgrade,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharacterAscend___'' @ 141283480

void __cdecl _dynamic_initializer_for____UDS_VM_CharacterAscend_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharacterAscend_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_CharacterLevelupInfoMaterial,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharacterCreate___'' @ 1412834c0

void __cdecl _dynamic_initializer_for____UDS_VM_CharacterCreate_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharacterCreate_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_CharacterCreate,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CharacterLevelup___'' @ 141283500

void __cdecl _dynamic_initializer_for____UDS_VM_CharacterLevelup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CharacterLevelup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_CharacterLevelupInfoMaterial,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_MacroSlot___'' @ 141283540

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_MacroSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_MacroSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_MacroSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_MessageList___'' @ 141283580

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_MessageList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_MessageList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_MessageList,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_MessageSlot___'' @ 1412835c0

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_MessageSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_MessageSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_MessageSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_RecentWhisperSlot___'' @ 141283600

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_RecentWhisperSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_RecentWhisperSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (Chat_RecentWhisperSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_RecentWhispers___'' @ 141283640

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_RecentWhispers_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_RecentWhispers_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (Chat_RecentWhispers,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_SubTabSlot___'' @ 141283680

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_SubTabSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_SubTabSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_SubTabSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_SubTabs___'' @ 1412836c0

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_SubTabs_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_SubTabs_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_SubTabs,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_TabSlot___'' @ 141283700

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_TabSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_TabSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_TabSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_Tabs___'' @ 141283740

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_Tabs_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_Tabs_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_Tabs,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Chat_Viewer___'' @ 141283780

void __cdecl _dynamic_initializer_for____UDS_VM_Chat_Viewer_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Chat_Viewer_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Chat_Viewer,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CommonAsset___'' @ 1412837c0

void __cdecl _dynamic_initializer_for____UDS_VM_CommonAsset_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CommonAsset_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_CommonAsset,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CommonEditableText___'' @ 141283800

void __cdecl _dynamic_initializer_for____UDS_VM_CommonEditableText_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CommonEditableText_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (CommonEditableText,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CommonEditorbleTextPopup___'' @ 141283840

void __cdecl _dynamic_initializer_for____UDS_VM_CommonEditorbleTextPopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CommonEditorbleTextPopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_CommonEditorbleTextPopup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CommonPopup___'' @ 141283880

void __cdecl _dynamic_initializer_for____UDS_VM_CommonPopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CommonPopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_CommonPopup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_CommonProgress___'' @ 1412838c0

void __cdecl _dynamic_initializer_for____UDS_VM_CommonProgress_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_CommonProgress_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_CommonProgress,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_Check_Text___'' @ 141283900

void __cdecl _dynamic_initializer_for____UDS_VM_Common_Check_Text_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_Check_Text_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_CommonCheckText,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_Check___'' @ 141283940

void __cdecl _dynamic_initializer_for____UDS_VM_Common_Check_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_Check_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_CommonCheck,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_ConsumeMoneyPopup___'' @ 141283980

void __cdecl _dynamic_initializer_for____UDS_VM_Common_ConsumeMoneyPopup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_ConsumeMoneyPopup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (Common_ConsumeMoneyPopup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_DeckIndex___'' @ 1412839c0

void __cdecl _dynamic_initializer_for____UDS_VM_Common_DeckIndex_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_DeckIndex_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Common_DeckIndex,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_IconSlot___'' @ 141283a00

void __cdecl _dynamic_initializer_for____UDS_VM_Common_IconSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_IconSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Common_IconSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_TabGroup___'' @ 141283a40

void __cdecl _dynamic_initializer_for____UDS_VM_Common_TabGroup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(CommonTabGroup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_Tab___'' @ 141283a80

void __cdecl _dynamic_initializer_for____UDS_VM_Common_Tab_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_Tab_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(CommonTab,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Common_Variation___'' @ 141283ac0

void __cdecl _dynamic_initializer_for____UDS_VM_Common_Variation_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Common_Variation_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Common_Variation,(TSubclassOf<UDS_ViewModelBase>)local_res8)
  ;
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ContentsFrame_ButtonList___'' @ 141283b00

void __cdecl _dynamic_initializer_for____UDS_VM_ContentsFrame_ButtonList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ContentsFrame_ButtonList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (ContentsFrame_ButtonList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ContentsFrame_Button___'' @ 141283b40

void __cdecl _dynamic_initializer_for____UDS_VM_ContentsFrame_Button_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ContentsFrame_Button_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (ContentsFrame_Button,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ContentsFrame_SubButtonList___'' @ 141283b80

void __cdecl _dynamic_initializer_for____UDS_VM_ContentsFrame_SubButtonList_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ContentsFrame_SubButtonList_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (ContentsFrame_SubButtonList,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ContentsFrame___'' @ 141283bc0

void __cdecl _dynamic_initializer_for____UDS_VM_ContentsFrame_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ContentsFrame_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(ContentsFrame,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ContentsStatus___'' @ 141283c00

void __cdecl _dynamic_initializer_for____UDS_VM_ContentsStatus_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ContentsStatus_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(ContentsStatus,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Cooking___'' @ 141283c40

void __cdecl _dynamic_initializer_for____UDS_VM_Cooking_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Cooking_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Cooking,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_DailyQuestStatus___'' @ 141283c80

void __cdecl _dynamic_initializer_for____UDS_VM_DailyQuestStatus_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_DailyQuestStatus_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_DaliyQuestStatus,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Death___'' @ 141283cc0

void __cdecl _dynamic_initializer_for____UDS_VM_Death_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Death_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(HUD_Death,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_DropData___'' @ 141283d00

void __cdecl _dynamic_initializer_for____UDS_VM_DropData_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_DropData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Data_Drop,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Dropdown___'' @ 141283d40

void __cdecl _dynamic_initializer_for____UDS_VM_Dropdown_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Dropdown_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(Dropdown,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_EnvironmentInfo___'' @ 141283d80

void __cdecl _dynamic_initializer_for____UDS_VM_EnvironmentInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_EnvironmentInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(EnvironmentInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_EquipItemSlot___'' @ 141283dc0

void __cdecl _dynamic_initializer_for____UDS_VM_EquipItemSlot_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_EquipItemSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(EquipItemSlot,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_EquipSlotGroup___'' @ 141283e00

void __cdecl _dynamic_initializer_for____UDS_VM_EquipSlotGroup_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_EquipSlotGroup_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(EquipSlotGroup,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ExpDisplay___'' @ 141283e40

void __cdecl _dynamic_initializer_for____UDS_VM_ExpDisplay_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ExpDisplay_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(ExpDisplay,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_FadeInOut___'' @ 141283e80

void __cdecl _dynamic_initializer_for____UDS_VM_FadeInOut_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_FadeInOut_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_Common_FadeInOut,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_Filter___'' @ 141283ec0

void __cdecl _dynamic_initializer_for____UDS_VM_Filter_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_Filter_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(W_Filter,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_GameOptionCategory___'' @ 141283f00

void __cdecl _dynamic_initializer_for____UDS_VM_GameOptionCategory_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_GameOptionCategory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_GameOptionCategory,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_GameOptionColorPicker___'' @ 141283f40

void __cdecl _dynamic_initializer_for____UDS_VM_GameOptionColorPicker_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_GameOptionColorPicker_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_GameOptionColorPicker,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_MaxStatusInfo___'' @ 141283f80

void __cdecl _dynamic_initializer_for____UDS_VM_MaxStatusInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_MaxStatusInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(MaxStatusInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_MoneyTooltipDetector___'' @ 141283fc0

void __cdecl _dynamic_initializer_for____UDS_VM_MoneyTooltipDetector_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (MoneyTooltipDetector,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ResultUI_Lite___'' @ 141284000

void __cdecl _dynamic_initializer_for____UDS_VM_ResultUI_Lite_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ResultUI_Lite_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(ResultUI_Lite,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_ResultUI_Normal___'' @ 141284040

void __cdecl _dynamic_initializer_for____UDS_VM_ResultUI_Normal_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_ResultUI_Normal_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(ResultUI_Normal,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_StatusCompareInfo___'' @ 141284080

void __cdecl _dynamic_initializer_for____UDS_VM_StatusCompareInfo_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_StatusCompareInfo_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (Common_StatusCompareInfo,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_TextModel___'' @ 1412840c0

void __cdecl _dynamic_initializer_for____UDS_VM_TextModel_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_TextModel_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass(TextModel,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_CommonQuantityControl___'' @ 141284100

void __cdecl _dynamic_initializer_for____UDS_VM_W_CommonQuantityControl_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_CommonQuantityControl,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// `dynamic_initializer_for_'__UDS_VM_W_Common_Coin_ToolTip___'' @ 141284140

void __cdecl _dynamic_initializer_for____UDS_VM_W_Common_Coin_ToolTip_____(void)

{
  UClass *local_res8 [4];
  
  local_res8[0] = Z_Construct_UClass_UDS_VM_W_Common_Coin_ToolTip_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  DS_ViewModelTemplateUtil::RegistClass
            (W_Common_Coin_ToolTip,(TSubclassOf<UDS_ViewModelBase>)local_res8);
  return;
}

// ConstructItems<TObjectPtr<UDS_UserObjectTreeItem>,TObjectPtr<UDS_UserObjectTreeItem>,int> @ 14bd9d3e0

void __cdecl
ConstructItems<TObjectPtr<UDS_UserObjectTreeItem>,TObjectPtr<UDS_UserObjectTreeItem>,int>
          (void *param_1,TObjectPtr<UDS_UserObjectTreeItem> *param_2,int param_3)

{
  TObjectPtr<UDS_UserObjectTreeItem> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UDS_UserObjectTreeItem>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UDS_UserObjectTreeItem>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UDS_UserObjectTreeItem *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UDS_UserObjectTreeItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// HeapSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,`UDS_VM_CharacterLevelup::OnAutoMaterialAdd'::__l2::<lambda_1>_>_> @ 14bda0a70

void __cdecl
AlgoImpl::
HeapSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::OnAutoMaterialAdd_::__l2::<lambda_1>_>_>
          (FDS_CharacterLevelUpCostTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_protected:_void___cdecl_UDS_VM_CharacterLevelup::OnAutoMaterialAdd(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_CharacterLevelUpCostTableRow *pFVar1;
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
LAB_14bda0b60:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            iVar8 = 0;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[iVar4]->RewardCharExp < param_1[(longlong)iVar9 + 2]->RewardCharExp) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (pFVar1->RewardCharExp <= param_1[iVar4]->RewardCharExp) break;
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
      if (param_1[iVar6]->RewardCharExp < param_1[(longlong)iVar5 + 2]->RewardCharExp) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (pFVar1->RewardCharExp <= param_1[iVar6]->RewardCharExp) goto LAB_14bda0b60;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,`UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>_>_> @ 14bda0c30

void __cdecl
AlgoImpl::
HeapSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::UpdateMaterialItemList_::__l2::<lambda_1>_>_>
          (FDS_CharacterLevelUpCostTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_protected:_void___cdecl_UDS_VM_CharacterLevelup::UpdateMaterialItemList(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_CharacterLevelUpCostTableRow *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14bda0d4e:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::
                          operator()(param_4.Predicate,param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::
                        operator()(param_4.Predicate,param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pFVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14bda0d4e;
    pFVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// IntroSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,`UDS_VM_CharacterLevelup::OnAutoMaterialAdd'::__l2::<lambda_1>_>_> @ 14bda0fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::OnAutoMaterialAdd_::__l2::<lambda_1>_>_>
          (FDS_CharacterLevelUpCostTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_protected:_void___cdecl_UDS_VM_CharacterLevelup::OnAutoMaterialAdd(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_CharacterLevelUpCostTableRow **ppFVar1;
  FDS_CharacterLevelUpCostTableRow *pFVar2;
  int iVar3;
  FDS_CharacterLevelUpCostTableRow ***pppFVar4;
  FDS_CharacterLevelUpCostTableRow **ppFVar5;
  FDS_CharacterLevelUpCostTableRow **ppFVar6;
  FDS_CharacterLevelUpCostTableRow **ppFVar7;
  FDS_CharacterLevelUpCostTableRow **ppFVar8;
  FDS_CharacterLevelUpCostTableRow **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDS_CharacterLevelUpCostTableRow **local_338;
  FDS_CharacterLevelUpCostTableRow **local_328;
  FDS_CharacterLevelUpCostTableRow **local_320;
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
LAB_14bda1070:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_14bda10a0:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x00014bda10a9;
          goto LAB_14bda10c0;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar6)->RewardCharExp <= (*ppFVar1)->RewardCharExp) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_14bda117e;
      }
LAB_14bda116d:
      local_338 = ppFVar1;
      HeapSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::OnAutoMaterialAdd_::__l2::<lambda_1>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14bda117e:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x00014bda10a9:
  if ((*ppFVar8)->RewardCharExp <= (*ppFVar5)->RewardCharExp) goto LAB_14bda10a0;
LAB_14bda10c0:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar6)->RewardCharExp <= (*ppFVar8)->RewardCharExp);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_14bda10a0;
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
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_14bda117e;
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
    if (ppFVar9 <= ppFVar5) goto LAB_14bda117e;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_14bda116d;
  goto LAB_14bda1070;
}

// IntroSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,`UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>_>_> @ 14bda1220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::UpdateMaterialItemList_::__l2::<lambda_1>_>_>
          (FDS_CharacterLevelUpCostTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_protected:_void___cdecl_UDS_VM_CharacterLevelup::UpdateMaterialItemList(void)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_CharacterLevelUpCostTableRow *pFVar1;
  bool bVar2;
  int iVar3;
  FDS_CharacterLevelUpCostTableRow **ppFVar4;
  FDS_CharacterLevelUpCostTableRow **ppFVar5;
  int iVar6;
  FDS_CharacterLevelUpCostTableRow ***pppFVar7;
  FDS_CharacterLevelUpCostTableRow **ppFVar8;
  FDS_CharacterLevelUpCostTableRow **ppFVar9;
  FDS_CharacterLevelUpCostTableRow **ppFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FDS_CharacterLevelUpCostTableRow **local_358;
  FDS_CharacterLevelUpCostTableRow **local_348;
  FDS_CharacterLevelUpCostTableRow **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppFVar7 = &local_348;
    do {
      ppFVar4 = pppFVar7[1];
      ppFVar5 = *pppFVar7;
      local_358 = pppFVar7[2];
      iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
      ppFVar10 = ppFVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14bda12e0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar8 = ppFVar4 + 1;
          pFVar1 = ppFVar10[iVar3 >> 1];
          ppFVar10[iVar3 >> 1] = *ppFVar10;
          *ppFVar10 = pFVar1;
          ppFVar5 = ppFVar10;
LAB_14bda1310:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar4) goto code_r0x00014bda1319;
          goto LAB_14bda1330;
        }
        for (; ppFVar8 = ppFVar10, ppFVar5 = ppFVar10, ppFVar10 < ppFVar4; ppFVar4 = ppFVar4 + -1) {
          while (ppFVar9 = ppFVar8, ppFVar5 = ppFVar5 + 1, ppFVar5 <= ppFVar4) {
            bVar2 = `UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,*ppFVar9,*ppFVar5);
            ppFVar8 = ppFVar5;
            if (!bVar2) {
              ppFVar8 = ppFVar9;
            }
          }
          pFVar1 = *ppFVar9;
          *ppFVar9 = *ppFVar4;
          *ppFVar4 = pFVar1;
        }
        goto LAB_14bda13f6;
      }
LAB_14bda13e5:
      HeapSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::UpdateMaterialItemList_::__l2::<lambda_1>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14bda13f6:
      pppFVar7 = pppFVar7 + -3;
    } while (&local_348 <= pppFVar7);
  }
  return;
code_r0x00014bda1319:
  bVar2 = `UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,*ppFVar10,*ppFVar5);
  if (!bVar2) goto LAB_14bda1310;
LAB_14bda1330:
  do {
    ppFVar9 = ppFVar8;
    ppFVar8 = ppFVar9 + -1;
    if (ppFVar8 <= ppFVar10) break;
    bVar2 = `UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,*ppFVar8,*ppFVar10);
  } while (!bVar2);
  if (ppFVar5 <= ppFVar8) {
    pFVar1 = *ppFVar5;
    *ppFVar5 = *ppFVar8;
    *ppFVar8 = pFVar1;
    goto LAB_14bda1310;
  }
  pFVar1 = *ppFVar10;
  iVar6 = iVar6 + -1;
  *ppFVar10 = *ppFVar8;
  *ppFVar8 = pFVar1;
  if ((longlong)((longlong)ppFVar8 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar4 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar4) {
      *pppFVar7 = ppFVar5;
      pppFVar7[1] = ppFVar4;
      *(int *)(pppFVar7 + 2) = iVar6;
      pppFVar7 = pppFVar7 + 3;
    }
    if (ppFVar8 <= ppFVar10 + 1) goto LAB_14bda13f6;
    ppFVar4 = ppFVar9 + -2;
    ppFVar5 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar8) {
      *pppFVar7 = ppFVar10;
      pppFVar7[1] = ppFVar9 + -2;
      *(int *)(pppFVar7 + 2) = iVar6;
      pppFVar7 = pppFVar7 + 3;
    }
    if (ppFVar4 <= ppFVar5) goto LAB_14bda13f6;
  }
  iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar10 = ppFVar5;
  if (iVar6 == 0) goto LAB_14bda13e5;
  goto LAB_14bda12e0;
}

// IsA<FDS_VMContext_AchievementData,FDS_ViewModelContext> @ 14bda14c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_VMContext_AchievementData,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_VMContext_AchievementData::StaticStruct();
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

// IsA<FDS_ViewModelContext_ActionFunction,FDS_ViewModelContext> @ 14bda15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ActionFunction,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ActionFunction::StaticStruct();
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

// IsA<FDS_ViewModelContext_BuffInfo,FDS_ViewModelContext> @ 14bda1720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_BuffInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_BuffInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharAscend,FDS_ViewModelContext> @ 14bda1850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharAscend,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharAscend::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharBuffData,FDS_ViewModelContext> @ 14bda1980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharBuffData,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharBuffData::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharDetailInfoGroup,FDS_ViewModelContext> @ 14bda1ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharDetailInfoGroup,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharDetailInfoGroup::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharEvolveLevel,FDS_ViewModelContext> @ 14bda1be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharEvolveLevel,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharEvolveLevel::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharEvolveLevelList,FDS_ViewModelContext> @ 14bda1d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharEvolveLevelList,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharEvolveLevelList::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharInfoData,FDS_ViewModelContext> @ 14bda1e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharInfoData,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharInfoData::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharLevelUp,FDS_ViewModelContext> @ 14bda1f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharLevelUp,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharLevelUp::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharSkillList,FDS_ViewModelContext> @ 14bda20a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharSkillList,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharSkillList::StaticStruct();
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

// IsA<FDS_ViewModelContext_CharStatusUpgrade,FDS_ViewModelContext> @ 14bda21d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CharStatusUpgrade,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CharStatusUpgrade::StaticStruct();
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

// IsA<FDS_ViewModelContext_ChatMessage,FDS_ViewModelContext> @ 14bda2300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ChatMessage,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ChatMessage::StaticStruct();
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

// IsA<FDS_ViewModelContext_ChatWhisper,FDS_ViewModelContext> @ 14bda2430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ChatWhisper,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ChatWhisper::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonCheck,FDS_ViewModelContext> @ 14bda2560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonCheck,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonCheck::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonCheckText,FDS_ViewModelContext> @ 14bda2690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonCheckText,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonCheckText::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonCoinTooltip,FDS_ViewModelContext> @ 14bda27c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonCoinTooltip,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonCoinTooltip::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonDeck,FDS_ViewModelContext> @ 14bda28f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonDeck,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonDeck::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonEditableText,FDS_ViewModelContext> @ 14bda2a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonEditableText,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonEditableText::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonEditorblePopup,FDS_ViewModelContext> @ 14bda2b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonEditorblePopup,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonEditorblePopup::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonMessage,FDS_ViewModelContext> @ 14bda2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonMessage,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonMessage::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonQuantityControl,FDS_ViewModelContext> @ 14bda2db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonQuantityControl,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonQuantityControl::StaticStruct();
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

// IsA<FDS_ViewModelContext_CommonVariation,FDS_ViewModelContext> @ 14bda2ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_CommonVariation,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_CommonVariation::StaticStruct();
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

// IsA<FDS_ViewModelContext_Common_ConsumeMoneyPopup,FDS_ViewModelContext> @ 14bda3010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_Common_ConsumeMoneyPopup,FDS_ViewModelContext>
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
  pUVar6 = FDS_ViewModelContext_Common_ConsumeMoneyPopup::StaticStruct();
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

// IsA<FDS_ViewModelContext_ContentsFrame,FDS_ViewModelContext> @ 14bda3140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ContentsFrame,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ContentsFrame::StaticStruct();
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

// IsA<FDS_ViewModelContext_ContentsFrameButton,FDS_ViewModelContext> @ 14bda3270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ContentsFrameButton,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ContentsFrameButton::StaticStruct();
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

// IsA<FDS_ViewModelContext_ContentsFrameButtonList,FDS_ViewModelContext> @ 14bda33a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ContentsFrameButtonList,FDS_ViewModelContext>
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
  pUVar6 = FDS_ViewModelContext_ContentsFrameButtonList::StaticStruct();
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

// IsA<FDS_ViewModelContext_ContentsStatus,FDS_ViewModelContext> @ 14bda34d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_ContentsStatus,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ContentsStatus::StaticStruct();
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

// IsA<FDS_ViewModelContext_DropData,FDS_ViewModelContext> @ 14bda3600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_DropData,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_DropData::StaticStruct();
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

// IsA<FDS_ViewModelContext_Dropdown,FDS_ViewModelContext> @ 14bda3730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_Dropdown,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_Dropdown::StaticStruct();
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

// IsA<FDS_ViewModelContext_EquipItemSlot,FDS_ViewModelContext> @ 14bda3860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_EquipItemSlot,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_EquipItemSlot::StaticStruct();
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

// IsA<FDS_ViewModelContext_EquipSlotGroup,FDS_ViewModelContext> @ 14bda3990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_EquipSlotGroup,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_EquipSlotGroup::StaticStruct();
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

// IsA<FDS_ViewModelContext_Exp,FDS_ViewModelContext> @ 14bda3ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_Exp,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_Exp::StaticStruct();
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

// IsA<FDS_ViewModelContext_MaxStatusInfo,FDS_ViewModelContext> @ 14bda3bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_MaxStatusInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_MaxStatusInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_ModelBase,FDS_ViewModelContext> @ 14bda3d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_ModelBase,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_ModelBase::StaticStruct();
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

// IsA<FDS_ViewModelContext_MoneyTooltipDetector,FDS_ViewModelContext> @ 14bda3e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_MoneyTooltipDetector,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_MoneyTooltipDetector::StaticStruct();
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

// IsA<FDS_ViewModelContext_OptionCategory,FDS_ViewModelContext> @ 14bda3f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_OptionCategory,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_OptionCategory::StaticStruct();
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

// IsA<FDS_ViewModelContext_OptionColorPicker,FDS_ViewModelContext> @ 14bda40b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_OptionColorPicker,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_OptionColorPicker::StaticStruct();
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

// IsA<FDS_ViewModelContext_StatusCompareInfo,FDS_ViewModelContext> @ 14bda41e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsA<FDS_ViewModelContext_StatusCompareInfo,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_StatusCompareInfo::StaticStruct();
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

// IsA<FDS_ViewModelContext_Tab,FDS_ViewModelContext> @ 14bda4310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_Tab,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_Tab::StaticStruct();
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

// IsA<FDS_ViewModelContext_TabGroup,FDS_ViewModelContext> @ 14bda4440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsA<FDS_ViewModelContext_TabGroup,FDS_ViewModelContext>(FDS_ViewModelContext *param_1)

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
  pUVar6 = FDS_ViewModelContext_TabGroup::StaticStruct();
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

// LowerBoundInternal<FDS_ContentsTabFrameTableRow_const_*,int,FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,`FDS_ContentsTabFrameTableRow::GetMainTabList'::__l2::<lambda_1>_>_> @ 14bda4570

int __cdecl
AlgoImpl::
LowerBoundInternal<FDS_ContentsTabFrameTableRow_const_*,int,FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_FDS_ContentsTabFrameTableRow::GetMainTabList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTabFrameTableRow **param_1,int param_2,FDS_ContentsTabFrameTableRow **param_3
          ,FIdentityFunctor param_4,
          TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_public:_static_class_TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_>___cdecl_FDS_ContentsTabFrameTableRow::GetMainTabList(int_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1]->MainTab < (*param_3)->MainTab) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeContext<FDS_VMContext_RewardSlot> @ 14bda45d0

TSharedPtr<FDS_VMContext_RewardSlot,1> * __cdecl
MakeContext<FDS_VMContext_RewardSlot>
          (TSharedPtr<FDS_VMContext_RewardSlot,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_VMContext_RewardSlot *pFVar3;
  FDS_VMContext_RewardSlot *pFVar4;
  TSharedPtr<FDS_VMContext_RewardSlot,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_VMContext_RewardSlot *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_VMContext_RewardSlot *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_VMContext_RewardSlot *)0x0) {
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x22 = 0;
    *(undefined2 *)&pFVar3->field_0x26 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_VMContext_RewardSlot__6B_;
    pFVar3->RewardSlotType = None;
    pFVar3->bIsReward = false;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_VMContext_RewardSlot *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_VMContext_RewardSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_VMContext_RewardSlot *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_VMContext_RewardSlot,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_VMContext_RewardSlot::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_ChatMessage> @ 14bda46f0

TSharedPtr<FDS_ViewModelContext_ChatMessage,1> * __cdecl
MakeContext<FDS_ViewModelContext_ChatMessage>
          (TSharedPtr<FDS_ViewModelContext_ChatMessage,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_ChatMessage *pFVar3;
  FDS_ViewModelContext_ChatMessage *pFVar4;
  TSharedPtr<FDS_ViewModelContext_ChatMessage,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_ChatMessage *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_ChatMessage *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_ChatMessage *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatMessage__6B_;
    (pFVar3->ChattingData).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_ChatMessage *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatMessage__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_ChatMessage *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_ChatMessage,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_ChatMessage::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_ChatTab> @ 14bda4810

TSharedPtr<FDS_ViewModelContext_ChatTab,1> * __cdecl
MakeContext<FDS_ViewModelContext_ChatTab>
          (TSharedPtr<FDS_ViewModelContext_ChatTab,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_ChatTab *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x30);
  if (pFVar3 == (FDS_ViewModelContext_ChatTab *)0x0) {
    pFVar3 = (FDS_ViewModelContext_ChatTab *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->ChattingTabType = None;
    *(undefined3 *)&pFVar3->field_0x21 = 0;
    pFVar3->SubTabIndex = 0;
    *(undefined8 *)&pFVar3->IsSelected = 0;
    pFVar3->SubTabIndex = -1;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
  }
  __return_storage_ptr__->Object = pFVar3;
  pTVar4 = operator_new(0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_ChatTab **)&pTVar4[1].SharedReferenceCount = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (__return_storage_ptr__->Object == (FDS_ViewModelContext_ChatTab *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FDS_ViewModelContext_ChatTab,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_ChatTab::StaticStruct();
  pFVar3->_padding_ = (longlong)pUVar6;
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

// MakeContext<FDS_ViewModelContext_CommonEditorblePopup> @ 14bda4920

TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> * __cdecl
MakeContext<FDS_ViewModelContext_CommonEditorblePopup>
          (TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_CommonEditorblePopup *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x110);
  if (pFVar3 == (FDS_ViewModelContext_CommonEditorblePopup *)0x0) {
    pFVar3 = (FDS_ViewModelContext_CommonEditorblePopup *)0x0;
  }
  else {
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&(pFVar3->TitleText).field_0x1 = 0;
    *(undefined2 *)&(pFVar3->TitleText).field_0x5 = 0;
    (pFVar3->TitleText).field_0x7 = 0;
    *(undefined2 *)&(pFVar3->TitleText).field_0x2d = 0;
    (pFVar3->TitleText).field_0x2f = 0;
    *(undefined4 *)&(pFVar3->ContextText).field_0x1 = 0;
    *(undefined2 *)&(pFVar3->ContextText).field_0x5 = 0;
    (pFVar3->ContextText).field_0x7 = 0;
    *(undefined2 *)&(pFVar3->ContextText).field_0x2d = 0;
    (pFVar3->ContextText).field_0x2f = 0;
    *(undefined4 *)&(pFVar3->HintText).field_0x1 = 0;
    *(undefined2 *)&(pFVar3->HintText).field_0x5 = 0;
    (pFVar3->HintText).field_0x7 = 0;
    *(undefined2 *)&(pFVar3->HintText).field_0x2d = 0;
    (pFVar3->HintText).field_0x2f = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonEditorblePopup__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    (pFVar3->TitleText).StringTableType = None;
    (pFVar3->TitleText).StringTableID = 0;
    (pFVar3->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
    (pFVar3->TitleText).StringEnumTableNameID.Number = 0;
    (pFVar3->TitleText).DateTime.Ticks = 0;
    (pFVar3->TitleText).TimeSpan.Ticks = 0;
    (pFVar3->TitleText).TimeExpressionType = None;
    (pFVar3->TitleText).IsExpression = false;
    (pFVar3->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->TitleText).UniqueString.Data.ArrayNum = 0;
    (pFVar3->TitleText).UniqueString.Data.ArrayMax = 0;
    (pFVar3->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->TitleText).FormatArgs.ArrayNum = 0;
    (pFVar3->TitleText).FormatArgs.ArrayMax = 0;
    (pFVar3->ContextText).StringTableType = None;
    (pFVar3->ContextText).StringTableID = 0;
    (pFVar3->ContextText).StringEnumTableNameID.ComparisonIndex = 0;
    (pFVar3->ContextText).StringEnumTableNameID.Number = 0;
    (pFVar3->ContextText).DateTime.Ticks = 0;
    (pFVar3->ContextText).TimeSpan.Ticks = 0;
    (pFVar3->ContextText).TimeExpressionType = None;
    (pFVar3->ContextText).IsExpression = false;
    (pFVar3->ContextText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ContextText).UniqueString.Data.ArrayNum = 0;
    (pFVar3->ContextText).UniqueString.Data.ArrayMax = 0;
    (pFVar3->ContextText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ContextText).FormatArgs.ArrayNum = 0;
    (pFVar3->ContextText).FormatArgs.ArrayMax = 0;
    (pFVar3->HintText).StringTableType = None;
    (pFVar3->HintText).StringTableID = 0;
    (pFVar3->HintText).StringEnumTableNameID.ComparisonIndex = 0;
    (pFVar3->HintText).StringEnumTableNameID.Number = 0;
    (pFVar3->HintText).DateTime.Ticks = 0;
    (pFVar3->HintText).TimeSpan.Ticks = 0;
    (pFVar3->HintText).TimeExpressionType = None;
    (pFVar3->HintText).IsExpression = false;
    (pFVar3->HintText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->HintText).UniqueString.Data.ArrayNum = 0;
    (pFVar3->HintText).UniqueString.Data.ArrayMax = 0;
    (pFVar3->HintText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->HintText).FormatArgs.ArrayNum = 0;
    (pFVar3->HintText).FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&pFVar3->HintText,StringUi,0x55756);
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
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonEditorblePopup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_CommonEditorblePopup **)&pTVar4[1].SharedReferenceCount = pFVar3;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonEditorblePopup *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> *)(*pcVar1)();
    return pTVar6;
  }
  pFVar3 = __return_storage_ptr__->Object;
  pUVar7 = FDS_ViewModelContext_CommonEditorblePopup::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_ContentsFrameButton> @ 14bda4b30

TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> * __cdecl
MakeContext<FDS_ViewModelContext_ContentsFrameButton>
          (TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_ContentsFrameButton *pFVar3;
  FDS_ViewModelContext_ContentsFrameButton *pFVar4;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_ContentsFrameButton *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_ContentsFrameButton *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_ContentsFrameButton *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->IsSelected = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ContentsFrameButton__6B_;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_ContentsFrameButton *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ContentsFrameButton__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_ContentsFrameButton *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_ContentsFrameButton::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_ContentsFrameButtonList> @ 14bda4c50

TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> * __cdecl
MakeContext<FDS_ViewModelContext_ContentsFrameButtonList>
          (TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_ContentsFrameButtonList *pFVar3;
  FDS_ViewModelContext_ContentsFrameButtonList *pFVar4;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_ContentsFrameButtonList *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_ContentsFrameButtonList *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_ContentsFrameButtonList *)0x0) {
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x24 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ContentsFrameButtonList__6B_;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_ContentsFrameButtonList *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ContentsFrameButtonList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_ContentsFrameButtonList *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_ContentsFrameButtonList::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_MoneyData> @ 14bda4d70

TSharedPtr<FDS_ViewModelContext_MoneyData,1> * __cdecl
MakeContext<FDS_ViewModelContext_MoneyData>
          (TSharedPtr<FDS_ViewModelContext_MoneyData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_MoneyData *pFVar3;
  FDS_ViewModelContext_MoneyData *pFVar4;
  TSharedPtr<FDS_ViewModelContext_MoneyData,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_MoneyData *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_MoneyData *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_MoneyData *)0x0) {
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar3->field_0x21 = 0;
    *(undefined2 *)&pFVar3->field_0x25 = 0;
    pFVar3->field_0x27 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyData__6B_;
    pFVar3->MoneyType = None;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_MoneyData *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_MoneyData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_MoneyData,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_MoneyData::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_MoneyDisplay> @ 14bda4ea0

TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> * __cdecl
MakeContext<FDS_ViewModelContext_MoneyDisplay>
          (TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_MoneyDisplay *pFVar3;
  FDS_ViewModelContext_MoneyDisplay *pFVar4;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_MoneyDisplay *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x40);
  pFVar4 = (FDS_ViewModelContext_MoneyDisplay *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined2 *)&pFVar3->field_0x3e = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyDisplay__6B_;
    pFVar3->MoneyId = 0;
    pFVar3->Quantity = 0;
    pFVar3->TextStyleId = 0;
    pFVar3->IsHideDisplay = false;
    pFVar3->IsLackMoney = false;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyDisplay__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_MoneyDisplay::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_SkillPassive> @ 14bda4fd0

TSharedPtr<FDS_ViewModelContext_SkillPassive,1> * __cdecl
MakeContext<FDS_ViewModelContext_SkillPassive>
          (TSharedPtr<FDS_ViewModelContext_SkillPassive,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_SkillPassive *pFVar3;
  FDS_ViewModelContext_SkillPassive *pFVar4;
  TSharedPtr<FDS_ViewModelContext_SkillPassive,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_SkillPassive *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x38);
  pFVar4 = (FDS_ViewModelContext_SkillPassive *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_SkillPassive *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->PassiveState = SkillPassive;
    pFVar3->PassiveType = CharacterEvolve;
    *(undefined2 *)&pFVar3->field_0x36 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillPassive__6B_;
    pFVar3->PassiveID = 0;
    pFVar3->SkillID = 0;
    pFVar3->SkillActLevelID = 0;
    pFVar3->IsNew = false;
    pFVar3->IsEnhance = false;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_SkillPassive *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillPassive__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_SkillPassive *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_SkillPassive,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_SkillPassive::StaticStruct();
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

// MakeContext<FDS_ViewModelContext_StatusUpgradeInfo> @ 14bda5100

TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> * __cdecl
MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>
          (TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar3;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar4;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = operator_new(0x50);
  pFVar4 = (FDS_ViewModelContext_StatusUpgradeInfo *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->field_0x24 = 0;
    *(undefined2 *)&pFVar3->field_0x3a = 0;
    pFVar3->FormatType = Integer;
    *(undefined4 *)&pFVar3->field_0x4a = 0;
    *(undefined2 *)&pFVar3->field_0x4e = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_StatusUpgradeInfo__6B_;
    pFVar3->StatusIconID = 0;
    pFVar3->StatusNameID = 0;
    pFVar3->StatusDescID = 0;
    pFVar3->IsUpagade = false;
    pFVar3->IsPlus = false;
    pFVar3->BeforeStatusValue = 0;
    pFVar3->AfterStatusValue = 0;
    pFVar3->PlusStatusValue = 0;
    pFVar3->IsNew = false;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_StatusUpgradeInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_StatusUpgradeInfo::StaticStruct();
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

// Merge<FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,`FDS_ContentsTabFrameTableRow::GetMainTabList'::__l2::<lambda_1>_>_> @ 14bda5240

void __cdecl
AlgoImpl::
Merge<FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_FDS_ContentsTabFrameTableRow::GetMainTabList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTabFrameTableRow **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_public:_static_class_TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_>___cdecl_FDS_ContentsTabFrameTableRow::GetMainTabList(int_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  FDS_ContentsTabFrameTableRow **ppFVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  int iVar3;
  FDS_ContentsTabFrameTableRow **ppFVar4;
  FDS_ContentsTabFrameTableRow **ppFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FDS_ContentsTabFrameTableRow **ppFVar12;
  FDS_ContentsTabFrameTableRow **ppFVar13;
  FDS_ContentsTabFrameTableRow **ppFVar5;
  
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
          if (param_1[(longlong)iVar3 + (longlong)iVar8]->MainTab <= param_1[param_2]->MainTab) {
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
          if (param_1[(longlong)(int)(uVar10 + iVar11) + (longlong)param_2]->MainTab <
              (*ppFVar1)->MainTab) {
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

// NewObject<UDS_ContentEvent> @ 14bda53a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ContentEvent * __cdecl NewObject<UDS_ContentEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ContentEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ContentEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ContentEvent *)
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

// NewObject<UDS_DailyQuestEvent> @ 14bda5440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_DailyQuestEvent * __cdecl NewObject<UDS_DailyQuestEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_DailyQuestEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_DailyQuestEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_DailyQuestEvent *)
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

// NewObject<UDS_M_Cooking> @ 14bda54e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_M_Cooking * __cdecl NewObject<UDS_M_Cooking>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_M_Cooking *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_M_Cooking *)
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

// NewObject<UDS_ModelEventCommonQuantityControl> @ 14bda5580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ModelEventCommonQuantityControl * __cdecl
NewObject<UDS_ModelEventCommonQuantityControl>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ModelEventCommonQuantityControl *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ModelEventCommonQuantityControl_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ModelEventCommonQuantityControl *)
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

// NewObject<UDS_PlayerSkillEvent> @ 14bda5620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PlayerSkillEvent * __cdecl NewObject<UDS_PlayerSkillEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PlayerSkillEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PlayerSkillEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PlayerSkillEvent *)
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

// NewObject<UDS_VM_CommonIconTextButton> @ 14bda56c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_CommonIconTextButton * __cdecl
NewObject<UDS_VM_CommonIconTextButton>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_CommonIconTextButton *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_CommonIconTextButton_NoRegister();
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
  pUVar2 = (UDS_VM_CommonIconTextButton *)
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

// NewObject<UDS_VM_Common_CombinationKeyGroup> @ 14bda57c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Common_CombinationKeyGroup * __cdecl
NewObject<UDS_VM_Common_CombinationKeyGroup>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_Common_CombinationKeyGroup *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_Common_CombinationKeyGroup_NoRegister();
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
  pUVar2 = (UDS_VM_Common_CombinationKeyGroup *)
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

// NewObject<UDS_VM_ContentsFrame_ButtonList> @ 14bda58c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_ContentsFrame_ButtonList * __cdecl
NewObject<UDS_VM_ContentsFrame_ButtonList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_ContentsFrame_ButtonList *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_ContentsFrame_ButtonList_NoRegister();
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
  pUVar2 = (UDS_VM_ContentsFrame_ButtonList *)
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

// NewObject<UDS_VM_ContentsFrame_SubButtonList> @ 14bda59c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_ContentsFrame_SubButtonList * __cdecl
NewObject<UDS_VM_ContentsFrame_SubButtonList>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_ContentsFrame_SubButtonList *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_ContentsFrame_SubButtonList_NoRegister();
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
  pUVar2 = (UDS_VM_ContentsFrame_SubButtonList *)
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

// NewObject<UDS_VM_InputKey> @ 14bda5ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_InputKey * __cdecl
NewObject<UDS_VM_InputKey>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_InputKey *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
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
  pUVar2 = (UDS_VM_InputKey *)
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

// NewObject<UDS_VM_Item> @ 14bda5bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Item * __cdecl
NewObject<UDS_VM_Item>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_Item *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
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
  pUVar2 = (UDS_VM_Item *)
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

// NewObject<UDS_VM_MoneyDisplay> @ 14bda5cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MoneyDisplay * __cdecl
NewObject<UDS_VM_MoneyDisplay>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_MoneyDisplay *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_MoneyDisplay_NoRegister();
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
  pUVar2 = (UDS_VM_MoneyDisplay *)
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

// NewObject<UDS_VM_MoneyGroup> @ 14bda5dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MoneyGroup * __cdecl
NewObject<UDS_VM_MoneyGroup>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_MoneyGroup *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_MoneyGroup_NoRegister();
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
  pUVar2 = (UDS_VM_MoneyGroup *)
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

// NewObject<UDS_VM_MoneyTooltipDetector> @ 14bda5ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MoneyTooltipDetector * __cdecl
NewObject<UDS_VM_MoneyTooltipDetector>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_MoneyTooltipDetector *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
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
  pUVar2 = (UDS_VM_MoneyTooltipDetector *)
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

// NewObject<UDS_VM_PlayerData> @ 14bda5fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_PlayerData * __cdecl
NewObject<UDS_VM_PlayerData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_PlayerData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_PlayerData_NoRegister();
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
  pUVar2 = (UDS_VM_PlayerData *)
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

// NewObject<UDS_VM_Progress> @ 14bda60c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Progress * __cdecl
NewObject<UDS_VM_Progress>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_Progress *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_Progress_NoRegister();
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
  pUVar2 = (UDS_VM_Progress *)
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

// NewObject<UDS_VM_ViewportInteractionButton> @ 14bda61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_ViewportInteractionButton * __cdecl
NewObject<UDS_VM_ViewportInteractionButton>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_ViewportInteractionButton *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_ViewportInteractionButton_NoRegister();
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
  pUVar2 = (UDS_VM_ViewportInteractionButton *)
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

// NewObject<UDS_VM_W_CharacterStatusPanel> @ 14bda62c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_CharacterStatusPanel * __cdecl
NewObject<UDS_VM_W_CharacterStatusPanel>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_CharacterStatusPanel *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_W_CharacterStatusPanel_NoRegister();
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
  pUVar2 = (UDS_VM_W_CharacterStatusPanel *)
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

// NewObject<UDS_VM_W_CommonQuantityControl> @ 14bda63c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_CommonQuantityControl * __cdecl
NewObject<UDS_VM_W_CommonQuantityControl>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_CommonQuantityControl *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
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
  pUVar2 = (UDS_VM_W_CommonQuantityControl *)
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

// NewObject<UDS_VM_W_ContentsPopupTitle> @ 14bda64c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_ContentsPopupTitle * __cdecl
NewObject<UDS_VM_W_ContentsPopupTitle>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_ContentsPopupTitle *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_W_ContentsPopupTitle_NoRegister();
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
  pUVar2 = (UDS_VM_W_ContentsPopupTitle *)
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

// NewObject<UDS_VM_W_StatusUpgradeInfo> @ 14bda65c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_StatusUpgradeInfo * __cdecl
NewObject<UDS_VM_W_StatusUpgradeInfo>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_W_StatusUpgradeInfo *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_W_StatusUpgradeInfo_NoRegister();
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
  pUVar2 = (UDS_VM_W_StatusUpgradeInfo *)
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

// NewObject<UDS_VM_WaitCompleteData> @ 14bda66c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WaitCompleteData * __cdecl
NewObject<UDS_VM_WaitCompleteData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_VM_WaitCompleteData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_VM_WaitCompleteData_NoRegister();
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
  pUVar2 = (UDS_VM_WaitCompleteData *)
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

// NewObject<UDS_ViewModelBase> @ 14bda67c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ViewModelBase * __cdecl
NewObject<UDS_ViewModelBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDS_ViewModelBase *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
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
  pUVar2 = (UDS_ViewModelBase *)
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

// RotateInternal<FDS_ContentsTabFrameTableRow_const_*> @ 14bda8020

int __cdecl
AlgoImpl::RotateInternal<FDS_ContentsTabFrameTableRow_const_*>
          (FDS_ContentsTabFrameTableRow **param_1,int param_2,int param_3)

{
  FDS_ContentsTabFrameTableRow *pFVar1;
  FDS_ContentsTabFrameTableRow **ppFVar2;
  FDS_ContentsTabFrameTableRow **ppFVar4;
  FDS_ContentsTabFrameTableRow **ppFVar5;
  FDS_ContentsTabFrameTableRow **ppFVar6;
  FDS_ContentsTabFrameTableRow **ppFVar3;
  
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

// SafeCast<FDS_VMContext_AchievementData> @ 14bda80a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_VMContext_AchievementData,1> * __cdecl
SafeCast<FDS_VMContext_AchievementData>
          (TSharedPtr<FDS_VMContext_AchievementData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_VMContext_AchievementData,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_VMContext_AchievementData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda81ef;
  }
  pUVar6 = FDS_VMContext_AchievementData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_VMContext_AchievementData,1> *)(*pcVar4)();
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
LAB_14bda81e4:
    __return_storage_ptr__->Object = (FDS_VMContext_AchievementData *)0x0;
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
    if (!bVar5) goto LAB_14bda81e4;
    __return_storage_ptr__->Object = (FDS_VMContext_AchievementData *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda81ef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ActionFunction> @ 14bda8230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ActionFunction,1> * __cdecl
SafeCast<FDS_ViewModelContext_ActionFunction>
          (TSharedPtr<FDS_ViewModelContext_ActionFunction,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ActionFunction,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ActionFunction *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda837f;
  }
  pUVar6 = FDS_ViewModelContext_ActionFunction::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ActionFunction,1> *)(*pcVar4)();
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
LAB_14bda8374:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ActionFunction *)0x0;
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
    if (!bVar5) goto LAB_14bda8374;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ActionFunction *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda837f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_BuffInfo> @ 14bda83c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_BuffInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_BuffInfo>
          (TSharedPtr<FDS_ViewModelContext_BuffInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_BuffInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_BuffInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda850f;
  }
  pUVar6 = FDS_ViewModelContext_BuffInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_BuffInfo,1> *)(*pcVar4)();
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
LAB_14bda8504:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_BuffInfo *)0x0;
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
    if (!bVar5) goto LAB_14bda8504;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_BuffInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda850f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharAscend> @ 14bda8550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharAscend,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharAscend>
          (TSharedPtr<FDS_ViewModelContext_CharAscend,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharAscend,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharAscend *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda869f;
  }
  pUVar6 = FDS_ViewModelContext_CharAscend::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharAscend,1> *)(*pcVar4)();
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
LAB_14bda8694:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharAscend *)0x0;
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
    if (!bVar5) goto LAB_14bda8694;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharAscend *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda869f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharBuffData> @ 14bda86e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharBuffData,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharBuffData>
          (TSharedPtr<FDS_ViewModelContext_CharBuffData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharBuffData,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharBuffData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda882f;
  }
  pUVar6 = FDS_ViewModelContext_CharBuffData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharBuffData,1> *)(*pcVar4)();
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
LAB_14bda8824:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharBuffData *)0x0;
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
    if (!bVar5) goto LAB_14bda8824;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharBuffData *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda882f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharDetailInfoGroup> @ 14bda8870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharDetailInfoGroup,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharDetailInfoGroup>
          (TSharedPtr<FDS_ViewModelContext_CharDetailInfoGroup,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharDetailInfoGroup,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharDetailInfoGroup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda89bf;
  }
  pUVar6 = FDS_ViewModelContext_CharDetailInfoGroup::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharDetailInfoGroup,1> *)(*pcVar4)();
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
LAB_14bda89b4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharDetailInfoGroup *)0x0;
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
    if (!bVar5) goto LAB_14bda89b4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharDetailInfoGroup *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda89bf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharEvolveLevel> @ 14bda8a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharEvolveLevel,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharEvolveLevel>
          (TSharedPtr<FDS_ViewModelContext_CharEvolveLevel,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharEvolveLevel,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharEvolveLevel *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda8b4f;
  }
  pUVar6 = FDS_ViewModelContext_CharEvolveLevel::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharEvolveLevel,1> *)(*pcVar4)();
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
LAB_14bda8b44:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharEvolveLevel *)0x0;
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
    if (!bVar5) goto LAB_14bda8b44;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharEvolveLevel *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda8b4f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharEvolveLevelList> @ 14bda8b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharEvolveLevelList,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharEvolveLevelList>
          (TSharedPtr<FDS_ViewModelContext_CharEvolveLevelList,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharEvolveLevelList,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharEvolveLevelList *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda8cdf;
  }
  pUVar6 = FDS_ViewModelContext_CharEvolveLevelList::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharEvolveLevelList,1> *)(*pcVar4)();
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
LAB_14bda8cd4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharEvolveLevelList *)0x0;
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
    if (!bVar5) goto LAB_14bda8cd4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharEvolveLevelList *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda8cdf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharInfoData> @ 14bda8d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharInfoData,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharInfoData>
          (TSharedPtr<FDS_ViewModelContext_CharInfoData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharInfoData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda8e6f;
  }
  pUVar6 = FDS_ViewModelContext_CharInfoData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharInfoData,1> *)(*pcVar4)();
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
LAB_14bda8e64:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharInfoData *)0x0;
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
    if (!bVar5) goto LAB_14bda8e64;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharInfoData *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda8e6f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharLevelUp> @ 14bda8eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharLevelUp,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharLevelUp>
          (TSharedPtr<FDS_ViewModelContext_CharLevelUp,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharLevelUp,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharLevelUp *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda8fff;
  }
  pUVar6 = FDS_ViewModelContext_CharLevelUp::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharLevelUp,1> *)(*pcVar4)();
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
LAB_14bda8ff4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharLevelUp *)0x0;
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
    if (!bVar5) goto LAB_14bda8ff4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharLevelUp *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda8fff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharSkillList> @ 14bda9040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharSkillList,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharSkillList>
          (TSharedPtr<FDS_ViewModelContext_CharSkillList,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharSkillList,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharSkillList *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda918f;
  }
  pUVar6 = FDS_ViewModelContext_CharSkillList::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharSkillList,1> *)(*pcVar4)();
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
LAB_14bda9184:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharSkillList *)0x0;
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
    if (!bVar5) goto LAB_14bda9184;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharSkillList *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda918f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CharStatusUpgrade> @ 14bda91d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CharStatusUpgrade,1> * __cdecl
SafeCast<FDS_ViewModelContext_CharStatusUpgrade>
          (TSharedPtr<FDS_ViewModelContext_CharStatusUpgrade,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CharStatusUpgrade,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharStatusUpgrade *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda931f;
  }
  pUVar6 = FDS_ViewModelContext_CharStatusUpgrade::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CharStatusUpgrade,1> *)(*pcVar4)();
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
LAB_14bda9314:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharStatusUpgrade *)0x0;
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
    if (!bVar5) goto LAB_14bda9314;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CharStatusUpgrade *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda931f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ChatMessage> @ 14bda9360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ChatMessage,1> * __cdecl
SafeCast<FDS_ViewModelContext_ChatMessage>
          (TSharedPtr<FDS_ViewModelContext_ChatMessage,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ChatMessage,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatMessage *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda94af;
  }
  pUVar6 = FDS_ViewModelContext_ChatMessage::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ChatMessage,1> *)(*pcVar4)();
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
LAB_14bda94a4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatMessage *)0x0;
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
    if (!bVar5) goto LAB_14bda94a4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatMessage *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda94af:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ChatWhisper> @ 14bda94f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ChatWhisper,1> * __cdecl
SafeCast<FDS_ViewModelContext_ChatWhisper>
          (TSharedPtr<FDS_ViewModelContext_ChatWhisper,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ChatWhisper,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatWhisper *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda963f;
  }
  pUVar6 = FDS_ViewModelContext_ChatWhisper::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ChatWhisper,1> *)(*pcVar4)();
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
LAB_14bda9634:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatWhisper *)0x0;
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
    if (!bVar5) goto LAB_14bda9634;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ChatWhisper *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda963f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonCheck> @ 14bda9680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonCheck,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonCheck>
          (TSharedPtr<FDS_ViewModelContext_CommonCheck,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonCheck,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCheck *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda97cf;
  }
  pUVar6 = FDS_ViewModelContext_CommonCheck::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonCheck,1> *)(*pcVar4)();
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
LAB_14bda97c4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCheck *)0x0;
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
    if (!bVar5) goto LAB_14bda97c4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCheck *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda97cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonCheckText> @ 14bda9810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonCheckText>
          (TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCheckText *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda995f;
  }
  pUVar6 = FDS_ViewModelContext_CommonCheckText::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> *)(*pcVar4)();
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
LAB_14bda9954:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCheckText *)0x0;
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
    if (!bVar5) goto LAB_14bda9954;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCheckText *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda995f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonCoinTooltip> @ 14bda99a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonCoinTooltip,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonCoinTooltip>
          (TSharedPtr<FDS_ViewModelContext_CommonCoinTooltip,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonCoinTooltip,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCoinTooltip *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda9aef;
  }
  pUVar6 = FDS_ViewModelContext_CommonCoinTooltip::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonCoinTooltip,1> *)(*pcVar4)();
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
LAB_14bda9ae4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCoinTooltip *)0x0;
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
    if (!bVar5) goto LAB_14bda9ae4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonCoinTooltip *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda9aef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonDeck> @ 14bda9b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonDeck,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonDeck>
          (TSharedPtr<FDS_ViewModelContext_CommonDeck,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonDeck,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonDeck *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda9c7f;
  }
  pUVar6 = FDS_ViewModelContext_CommonDeck::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonDeck,1> *)(*pcVar4)();
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
LAB_14bda9c74:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonDeck *)0x0;
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
    if (!bVar5) goto LAB_14bda9c74;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonDeck *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda9c7f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonEditableText> @ 14bda9cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonEditableText>
          (TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonEditableText *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda9e0f;
  }
  pUVar6 = FDS_ViewModelContext_CommonEditableText::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> *)(*pcVar4)();
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
LAB_14bda9e04:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonEditableText *)0x0;
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
    if (!bVar5) goto LAB_14bda9e04;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonEditableText *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda9e0f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonEditorblePopup> @ 14bda9e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonEditorblePopup>
          (TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonEditorblePopup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bda9f9f;
  }
  pUVar6 = FDS_ViewModelContext_CommonEditorblePopup::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> *)(*pcVar4)();
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
LAB_14bda9f94:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonEditorblePopup *)0x0;
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
    if (!bVar5) goto LAB_14bda9f94;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonEditorblePopup *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bda9f9f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonMessage> @ 14bda9fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonMessage,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonMessage>
          (TSharedPtr<FDS_ViewModelContext_CommonMessage,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonMessage *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaa12f;
  }
  pUVar6 = FDS_ViewModelContext_CommonMessage::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonMessage,1> *)(*pcVar4)();
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
LAB_14bdaa124:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonMessage *)0x0;
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
    if (!bVar5) goto LAB_14bdaa124;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonMessage *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaa12f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonQuantityControl> @ 14bdaa170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonQuantityControl>
          (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonQuantityControl *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaa2bf;
  }
  pUVar6 = FDS_ViewModelContext_CommonQuantityControl::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
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
LAB_14bdaa2b4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonQuantityControl *)0x0;
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
    if (!bVar5) goto LAB_14bdaa2b4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonQuantityControl *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaa2bf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_CommonVariation> @ 14bdaa300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_CommonVariation,1> * __cdecl
SafeCast<FDS_ViewModelContext_CommonVariation>
          (TSharedPtr<FDS_ViewModelContext_CommonVariation,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonVariation,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonVariation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaa44f;
  }
  pUVar6 = FDS_ViewModelContext_CommonVariation::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonVariation,1> *)(*pcVar4)();
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
LAB_14bdaa444:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonVariation *)0x0;
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
    if (!bVar5) goto LAB_14bdaa444;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_CommonVariation *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaa44f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_Common_ConsumeMoneyPopup> @ 14bdaa490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> * __cdecl
SafeCast<FDS_ViewModelContext_Common_ConsumeMoneyPopup>
          (TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaa5df;
  }
  pUVar6 = FDS_ViewModelContext_Common_ConsumeMoneyPopup::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> *)(*pcVar4)();
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
LAB_14bdaa5d4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0;
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
    if (!bVar5) goto LAB_14bdaa5d4;
    __return_storage_ptr__->Object =
         (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaa5df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ContentsFrame> @ 14bdaa620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> * __cdecl
SafeCast<FDS_ViewModelContext_ContentsFrame>
          (TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrame *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaa76f;
  }
  pUVar6 = FDS_ViewModelContext_ContentsFrame::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> *)(*pcVar4)();
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
LAB_14bdaa764:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrame *)0x0;
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
    if (!bVar5) goto LAB_14bdaa764;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrame *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaa76f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ContentsFrameButton> @ 14bdaa7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> * __cdecl
SafeCast<FDS_ViewModelContext_ContentsFrameButton>
          (TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrameButton *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaa8ff;
  }
  pUVar6 = FDS_ViewModelContext_ContentsFrameButton::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> *)(*pcVar4)();
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
LAB_14bdaa8f4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrameButton *)0x0;
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
    if (!bVar5) goto LAB_14bdaa8f4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrameButton *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaa8ff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ContentsFrameButtonList> @ 14bdaa940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> * __cdecl
SafeCast<FDS_ViewModelContext_ContentsFrameButtonList>
          (TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrameButtonList *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaaa8f;
  }
  pUVar6 = FDS_ViewModelContext_ContentsFrameButtonList::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> *)(*pcVar4)();
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
LAB_14bdaaa84:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrameButtonList *)0x0;
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
    if (!bVar5) goto LAB_14bdaaa84;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsFrameButtonList *)param_1->Object
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
LAB_14bdaaa8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ContentsStatus> @ 14bdaaad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ContentsStatus,1> * __cdecl
SafeCast<FDS_ViewModelContext_ContentsStatus>
          (TSharedPtr<FDS_ViewModelContext_ContentsStatus,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ContentsStatus,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsStatus *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaac1f;
  }
  pUVar6 = FDS_ViewModelContext_ContentsStatus::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ContentsStatus,1> *)(*pcVar4)();
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
LAB_14bdaac14:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsStatus *)0x0;
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
    if (!bVar5) goto LAB_14bdaac14;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ContentsStatus *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaac1f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_DropData> @ 14bdaac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_DropData,1> * __cdecl
SafeCast<FDS_ViewModelContext_DropData>
          (TSharedPtr<FDS_ViewModelContext_DropData,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_DropData,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_DropData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaadaf;
  }
  pUVar6 = FDS_ViewModelContext_DropData::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_DropData,1> *)(*pcVar4)();
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
LAB_14bdaada4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_DropData *)0x0;
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
    if (!bVar5) goto LAB_14bdaada4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_DropData *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaadaf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_Dropdown> @ 14bdaadf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_Dropdown,1> * __cdecl
SafeCast<FDS_ViewModelContext_Dropdown>
          (TSharedPtr<FDS_ViewModelContext_Dropdown,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Dropdown *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaaf3f;
  }
  pUVar6 = FDS_ViewModelContext_Dropdown::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_Dropdown,1> *)(*pcVar4)();
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
LAB_14bdaaf34:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Dropdown *)0x0;
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
    if (!bVar5) goto LAB_14bdaaf34;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Dropdown *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaaf3f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_EquipItemSlot> @ 14bdaaf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_EquipItemSlot,1> * __cdecl
SafeCast<FDS_ViewModelContext_EquipItemSlot>
          (TSharedPtr<FDS_ViewModelContext_EquipItemSlot,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_EquipItemSlot,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_EquipItemSlot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdab0cf;
  }
  pUVar6 = FDS_ViewModelContext_EquipItemSlot::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_EquipItemSlot,1> *)(*pcVar4)();
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
LAB_14bdab0c4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_EquipItemSlot *)0x0;
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
    if (!bVar5) goto LAB_14bdab0c4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_EquipItemSlot *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdab0cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_EquipSlotGroup> @ 14bdab110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_EquipSlotGroup,1> * __cdecl
SafeCast<FDS_ViewModelContext_EquipSlotGroup>
          (TSharedPtr<FDS_ViewModelContext_EquipSlotGroup,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_EquipSlotGroup,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_EquipSlotGroup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdab25f;
  }
  pUVar6 = FDS_ViewModelContext_EquipSlotGroup::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_EquipSlotGroup,1> *)(*pcVar4)();
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
LAB_14bdab254:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_EquipSlotGroup *)0x0;
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
    if (!bVar5) goto LAB_14bdab254;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_EquipSlotGroup *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdab25f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_Exp> @ 14bdab2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_Exp,1> * __cdecl
SafeCast<FDS_ViewModelContext_Exp>
          (TSharedPtr<FDS_ViewModelContext_Exp,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Exp,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Exp *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdab3ef;
  }
  pUVar6 = FDS_ViewModelContext_Exp::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_Exp,1> *)(*pcVar4)();
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
LAB_14bdab3e4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Exp *)0x0;
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
    if (!bVar5) goto LAB_14bdab3e4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Exp *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdab3ef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_MaxStatusInfo> @ 14bdab430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_MaxStatusInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_MaxStatusInfo>
          (TSharedPtr<FDS_ViewModelContext_MaxStatusInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_MaxStatusInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MaxStatusInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdab57f;
  }
  pUVar6 = FDS_ViewModelContext_MaxStatusInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_MaxStatusInfo,1> *)(*pcVar4)();
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
LAB_14bdab574:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MaxStatusInfo *)0x0;
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
    if (!bVar5) goto LAB_14bdab574;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MaxStatusInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdab57f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_ModelBase> @ 14bdab5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __cdecl
SafeCast<FDS_ViewModelContext_ModelBase>
          (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdab70f;
  }
  pUVar6 = FDS_ViewModelContext_ModelBase::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar4)();
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
LAB_14bdab704:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
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
    if (!bVar5) goto LAB_14bdab704;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdab70f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_MoneyTooltipDetector> @ 14bdab750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_MoneyTooltipDetector,1> * __cdecl
SafeCast<FDS_ViewModelContext_MoneyTooltipDetector>
          (TSharedPtr<FDS_ViewModelContext_MoneyTooltipDetector,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_MoneyTooltipDetector,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MoneyTooltipDetector *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdab89f;
  }
  pUVar6 = FDS_ViewModelContext_MoneyTooltipDetector::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_MoneyTooltipDetector,1> *)(*pcVar4)();
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
LAB_14bdab894:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MoneyTooltipDetector *)0x0;
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
    if (!bVar5) goto LAB_14bdab894;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_MoneyTooltipDetector *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdab89f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_OptionCategory> @ 14bdab8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_OptionCategory,1> * __cdecl
SafeCast<FDS_ViewModelContext_OptionCategory>
          (TSharedPtr<FDS_ViewModelContext_OptionCategory,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_OptionCategory,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_OptionCategory *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdaba2f;
  }
  pUVar6 = FDS_ViewModelContext_OptionCategory::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_OptionCategory,1> *)(*pcVar4)();
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
LAB_14bdaba24:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_OptionCategory *)0x0;
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
    if (!bVar5) goto LAB_14bdaba24;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_OptionCategory *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdaba2f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_OptionColorPicker> @ 14bdaba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_OptionColorPicker,1> * __cdecl
SafeCast<FDS_ViewModelContext_OptionColorPicker>
          (TSharedPtr<FDS_ViewModelContext_OptionColorPicker,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_OptionColorPicker,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_OptionColorPicker *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdabbbf;
  }
  pUVar6 = FDS_ViewModelContext_OptionColorPicker::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_OptionColorPicker,1> *)(*pcVar4)();
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
LAB_14bdabbb4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_OptionColorPicker *)0x0;
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
    if (!bVar5) goto LAB_14bdabbb4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_OptionColorPicker *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdabbbf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_StatusCompareInfo> @ 14bdabc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_StatusCompareInfo,1> * __cdecl
SafeCast<FDS_ViewModelContext_StatusCompareInfo>
          (TSharedPtr<FDS_ViewModelContext_StatusCompareInfo,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_StatusCompareInfo,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_StatusCompareInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdabd4f;
  }
  pUVar6 = FDS_ViewModelContext_StatusCompareInfo::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_StatusCompareInfo,1> *)(*pcVar4)();
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
LAB_14bdabd44:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_StatusCompareInfo *)0x0;
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
    if (!bVar5) goto LAB_14bdabd44;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_StatusCompareInfo *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdabd4f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_Tab> @ 14bdabd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_Tab,1> * __cdecl
SafeCast<FDS_ViewModelContext_Tab>
          (TSharedPtr<FDS_ViewModelContext_Tab,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Tab,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Tab *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdabedf;
  }
  pUVar6 = FDS_ViewModelContext_Tab::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_Tab,1> *)(*pcVar4)();
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
LAB_14bdabed4:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Tab *)0x0;
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
    if (!bVar5) goto LAB_14bdabed4;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_Tab *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdabedf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// SafeCast<FDS_ViewModelContext_TabGroup> @ 14bdabf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ViewModelContext_TabGroup,1> * __cdecl
SafeCast<FDS_ViewModelContext_TabGroup>
          (TSharedPtr<FDS_ViewModelContext_TabGroup,1> *__return_storage_ptr__,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FDS_ViewModelContext *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> *pTVar7;
  UDS_LogManager *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TabGroup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    goto LAB_14bdac06f;
  }
  pUVar6 = FDS_ViewModelContext_TabGroup::StaticStruct();
  if ((pUVar6 == (UScriptStruct *)0x0) ||
     (pUVar3 = pFVar2->DerivedStaticStruct, pUVar3 == (UStruct *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385289500457173749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\VIewModel\\Template\\DS_ViewModelTemplateDefines.h"
                       ,0x2f5,"targetStruct && baseStruct");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_TabGroup,1> *)(*pcVar4)();
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
LAB_14bdac064:
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TabGroup *)0x0;
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
    if (!bVar5) goto LAB_14bdac064;
    __return_storage_ptr__->Object = (FDS_ViewModelContext_TabGroup *)param_1->Object;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14bdac06f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// StableSortInternal<FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,`FDS_ContentsTabFrameTableRow::GetMainTabList'::__l2::<lambda_1>_>_> @ 14bdac460

void __cdecl
AlgoImpl::
StableSortInternal<FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_FDS_ContentsTabFrameTableRow::GetMainTabList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTabFrameTableRow **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_public:_static_class_TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_>___cdecl_FDS_ContentsTabFrameTableRow::GetMainTabList(int_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FDS_ContentsTabFrameTableRow *pFVar1;
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
        if (param_1[lVar3 + 1]->MainTab < pFVar1->MainTab) {
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
        Merge<FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_FDS_ContentsTabFrameTableRow::GetMainTabList_::__l2::<lambda_1>_>_>
                  (param_1 + iVar4,iVar6,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 + iVar6 * -2;
      } while (iVar4 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// UpperBoundInternal<FDS_ContentsTabFrameTableRow_const_*,int,FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,`FDS_ContentsTabFrameTableRow::GetMainTabList'::__l2::<lambda_1>_>_> @ 14bdac860

int __cdecl
AlgoImpl::
UpperBoundInternal<FDS_ContentsTabFrameTableRow_const_*,int,FDS_ContentsTabFrameTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_FDS_ContentsTabFrameTableRow::GetMainTabList_::__l2::<lambda_1>_>_>
          (FDS_ContentsTabFrameTableRow **param_1,int param_2,FDS_ContentsTabFrameTableRow **param_3
          ,FIdentityFunctor param_4,
          TDereferenceWrapper<FDS_ContentsTabFrameTableRow_const_*,_public:_static_class_TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_>___cdecl_FDS_ContentsTabFrameTableRow::GetMainTabList(int_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1]->MainTab <= (*param_3)->MainTab) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// `vcall'{816,{flat}}'_}' @ 14bdacca0

/* [thunk]: __cdecl UDS_VM_CommonMessage::`vcall'{816,{flat}}' }' */

void __thiscall UDS_VM_CommonMessage::_vcall__816__flat______(UDS_VM_CommonMessage *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bdacca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))();
  return;
}

// `vcall'{712,{flat}}'_}' @ 14bdaccb0

/* [thunk]: __cdecl UDS_VM_Common_TabGroup::`vcall'{712,{flat}}' }' */

void __thiscall UDS_VM_Common_TabGroup::_vcall__712__flat______(UDS_VM_Common_TabGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bdaccb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// `scalar_deleting_destructor' @ 14bdaccc0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdaccf0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacd20

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ESlateVisibility_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacd50

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacd80

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacdb0

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacde0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdace10

void * __thiscall
IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdace40

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_ChattingTabType,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdace70

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacea0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_EnvironmentUpdate),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdaced0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacf00

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacf40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_UserObjectListItem,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_UserObjectListItem,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacf70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_ActionFunction,void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacfa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharBuffData,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharBuffData,void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdacfd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharDetailInfoGroup,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharDetailInfoGroup,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharDetailInfoGroup,void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad030

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad0c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharEvolveLevel,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad0f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterAscend,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterAscend,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad120

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterAscend,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterAscend,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad180

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad1b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad1e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad210

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(FString),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterCreate,void___cdecl(FString),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad270

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad2a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad2d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad300

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CharacterLevelup,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad330

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MacroSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MacroSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad360

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad390

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad3c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad3f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageList,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad420

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad450

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageSlot,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_MessageSlot,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad480

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_RecentWhispers,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_RecentWhispers,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad4b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_RecentWhispers,void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad4e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_RecentWhispers,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_RecentWhispers,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad510

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabSlot,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad540

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabSlot,void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad570

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad5a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabs,void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad5d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabs,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad600

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_SubTabs,void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad630

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad660

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,enum_EDS_ChattingTabType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad690

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad6c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(enum_EDS_ChattingTabType,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad6f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad720

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_TabSlot,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad750

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Tabs,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad780

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Tabs,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Tabs,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad7b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad7e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad810

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad840

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad870

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Chat_Viewer,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad8a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CommonEditorbleTextPopup,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CommonEditorbleTextPopup,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad8d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CommonEditorbleTextPopup,void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CommonEditorbleTextPopup,void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad900

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_CommonMessage,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_CommonMessage,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad930

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_IconSlot,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_IconSlot,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad960

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_Tab,void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_Tab,void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad990

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_Tab,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_Tab,void___cdecl(int,int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad9c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_Tab,void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_Tab,void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdad9f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_TabGroup,void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdada20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_TabGroup,void___cdecl(int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Common_TabGroup,void___cdecl(int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdada50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_ContentsFrame,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_ContentsFrame,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdada80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_ContentsFrame,void___cdecl(enum_ESlateVisibility_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadab0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Cooking,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Cooking,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadae0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Cooking,void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadb10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_DailyQuestStatus,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_DailyQuestStatus,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadb40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Dropdown,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Dropdown,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadb70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_Dropdown,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_Dropdown,void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadba0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_EnvironmentInfo,void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_EnvironmentInfo,void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadbd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_EnvironmentInfo,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_EnvironmentInfo,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadc00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_EnvironmentInfo,void___cdecl(enum_EDS_EnvironmentUpdate),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadc30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_EquipItemSlot,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_EquipItemSlot,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadc60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_EquipItemSlot,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_EquipItemSlot,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadc90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_EquipSlotGroup,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_EquipSlotGroup,void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadcc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_FadeInOut,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_FadeInOut,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadcf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_VM_MoneyTooltipDetector,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_VM_MoneyTooltipDetector,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadd20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ViewModelBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ViewModelBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadd50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadd80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdaddb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ESlateVisibility_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadde0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdade10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdade40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdade70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadea0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,enum_EDS_ChattingTabType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdaded0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadf10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadf40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadf70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadfa0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_ChattingTabType,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdadfd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae000

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_EnvironmentUpdate),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae030

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae060

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_VMContext_RewardSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_VMContext_RewardSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae0a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CharSkillInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CharSkillInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae0e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CharacterStatusPanel,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CharacterStatusPanel,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae120

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ChatMessage,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ChatMessage,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae160

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ChatWhisper,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ChatWhisper,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae1a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonCoinTooltip,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonCoinTooltip,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae1e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonEditorblePopup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonEditorblePopup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae220

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonQuantityControl,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_CommonQuantityControl,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae260

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsFrameButton,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsFrameButton,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae2a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsFrameButtonList,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ContentsFrameButtonList,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae2e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_EquipItemSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_EquipItemSlot,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae320

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_MoneyData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_MoneyData,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae360

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_MoneyGroup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_MoneyGroup,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae3a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_MoneyTooltipDetector,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_MoneyTooltipDetector,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae3e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_OptionComponent,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_OptionComponent,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae420

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_ResurrectButton,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_ResurrectButton,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae460

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillPassive,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_SkillPassive,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae4a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_StatusUpgradeInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_StatusUpgradeInfo,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bdae4e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_Tab,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_Tab,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// BakedResourcePrefix'' @ 15043f2f0

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

// DEFAULT_PARAMETER_VALUE_NAME'' @ 15043f310

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

// Empty'' @ 15043f330

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_UIData>::Empty__(void)

{
  TDS_Singleton<FDS_UIData>::Empty._padding_ = (longlong)&___7FDS_UIData__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 15043f350

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

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 15043f370

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

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 15043f390

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

