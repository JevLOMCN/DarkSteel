// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 55

// StaticClass @ 148ae3d30

UClass * __cdecl AWorldSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldSettings",
               &Z_Registration_Info_UClass_AWorldSettings.InnerSingleton,
               StaticRegisterNativesAWorldSettings,0x4f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"game",InternalConstructor<AWorldSettings>,
               InternalVTableHelperCtorCaller<AWorldSettings>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldSettings.InnerSingleton;
}

// AWorldSettings @ 148ae9340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AWorldSettings * __thiscall
AWorldSettings::AWorldSettings(AWorldSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this_00 = &(this->AISystemClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__AInfo__;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->NavigationSystemConfig).field0_0x0.DebugPtr = (UNavigationSystemConfig *)0x0;
  (this->NavigationSystemConfigOverride).field0_0x0.DebugPtr = (UNavigationSystemConfig *)0x0;
  (this->WorldPartition).field0_0x0.DebugPtr = (UWorldPartition *)0x0;
  (this->BaseNavmeshDataLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseNavmeshDataLayers).ArrayNum = 0;
  (this->BaseNavmeshDataLayers).ArrayMax = 0;
  (this->KillZDamageType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultPhysicsVolumeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PhysicsCollisionHandlerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultGameMode).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GameNetworkManagerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->NaniteSettings).bAllowMaskedMaterials = true;
  (this->DefaultReverbSettings).bApplyReverb = true;
  (this->DefaultReverbSettings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->DefaultReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr =
       (USoundEffectSubmixPreset *)0x0;
  (this->DefaultReverbSettings).Volume = 0.5;
  (this->DefaultReverbSettings).FadeTime = 2.0;
  FInteriorSettings::FInteriorSettings(&this->DefaultAmbientZoneSettings);
  (this->BroadphaseSettings).bUseMBPOnClient = false;
  (this->BroadphaseSettings).bUseMBPOnServer = false;
  (this->BroadphaseSettings).bUseMBPOuterBounds = false;
  (this->BroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->BroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBaseSoundMix).field0_0x0.DebugPtr = (USoundMix *)0x0;
  (this->BroadphaseSettings).MBPBounds.IsValid = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[0] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[1] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[2] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[3] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[4] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[5] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[6] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.IsValid = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[0] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[1] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[2] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[3] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[4] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[5] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[6] = '\0';
  (this->BroadphaseSettings).MBPNumSubdivs = 2;
  (this->ReplicationViewers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicationViewers).ArrayNum = 0;
  (this->ReplicationViewers).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->PauserPlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BookmarkArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BookmarkArray).ArrayNum = 0;
  (this->BookmarkArray).ArrayMax = 0;
  (this->LastBookmarkClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// AWorldSettings @ 148ae9520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AWorldSettings * __thiscall
AWorldSettings::AWorldSettings(AWorldSettings *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  FName FVar5;
  undefined8 uVar6;
  void *pvVar7;
  FName *pFVar8;
  FSoftObjectPath *pFVar9;
  UClass *pUVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  ulonglong uVar12;
  FName local_res8;
  undefined1 local_28 [32];
  
  pFVar8 = ::FName::FName(&local_res8,L"Sprite");
  FVar5 = *pFVar8;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar5);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar5,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  puVar2 = &(this->AISystemClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)puVar2 = 0;
  this->_padding_ = (longlong)&_vftable__for__AInfo__;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar2,0);
  (this->NavigationSystemConfig).field0_0x0.DebugPtr = (UNavigationSystemConfig *)0x0;
  (this->NavigationSystemConfigOverride).field0_0x0.DebugPtr = (UNavigationSystemConfig *)0x0;
  (this->WorldPartition).field0_0x0.DebugPtr = (UWorldPartition *)0x0;
  (this->BaseNavmeshDataLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseNavmeshDataLayers).ArrayNum = 0;
  (this->BaseNavmeshDataLayers).ArrayMax = 0;
  (this->KillZDamageType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultPhysicsVolumeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PhysicsCollisionHandlerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultGameMode).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GameNetworkManagerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->NaniteSettings).bAllowMaskedMaterials = true;
  (this->DefaultReverbSettings).bApplyReverb = true;
  (this->DefaultReverbSettings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->DefaultReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr =
       (USoundEffectSubmixPreset *)0x0;
  (this->DefaultReverbSettings).Volume = 0.5;
  (this->DefaultReverbSettings).FadeTime = 2.0;
  FInteriorSettings::FInteriorSettings(&this->DefaultAmbientZoneSettings);
  (this->BroadphaseSettings).bUseMBPOnClient = false;
  (this->BroadphaseSettings).bUseMBPOnServer = false;
  (this->BroadphaseSettings).bUseMBPOuterBounds = false;
  (this->BroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->BroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBaseSoundMix).field0_0x0.DebugPtr = (USoundMix *)0x0;
  (this->BroadphaseSettings).MBPBounds.IsValid = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[0] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[1] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[2] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[3] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[4] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[5] = '\0';
  (this->BroadphaseSettings).MBPBounds.Pad[6] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->BroadphaseSettings).MBPOuterBounds.IsValid = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[0] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[1] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[2] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[3] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[4] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[5] = '\0';
  (this->BroadphaseSettings).MBPOuterBounds.Pad[6] = '\0';
  (this->BroadphaseSettings).MBPNumSubdivs = 2;
  (this->ReplicationViewers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicationViewers).ArrayNum = 0;
  (this->ReplicationViewers).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->PauserPlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BookmarkArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BookmarkArray).ArrayNum = 0;
  pvVar7 = ThreadLocalStoragePointer;
  (this->BookmarkArray).ArrayMax = 0;
  uVar12 = (ulonglong)_tls_index;
  (this->LastBookmarkClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar7 + uVar12 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&::ConstructorStatics);
      ::ConstructorStatics.DmgType_Environmental_Object.Object.field0_0x0 =
           (TObjectPtr<UClass>_u_0)(FObjectPtr)0x0;
      ::ConstructorStatics.DmgType_Environmental_Object._padding_ =
           (longlong)&___7__FObjectFinder_VUClass___ConstructorHelpers__6B_;
      ConstructorHelpers::CheckIfIsInConstructor
                (L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
      ::FString::FString((FString *)local_28,
                         L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C"
                        );
      ConstructorHelpers::StripObjectClass((FString *)local_28,true);
      TVar11.DebugPtr = ConstructorHelpersInternal::FindOrLoadObject<UClass>((FString *)local_28,0);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (TVar11.DebugPtr == (UClass *)0x0)
         ) {
        ::ConstructorStatics.DmgType_Environmental_Object.Object.field0_0x0 =
             (TObjectPtr<UClass>_u_0)(TObjectPtr<UClass>_u_0)TVar11.DebugPtr;
        if (TVar11.DebugPtr == (UClass *)0x0) {
          ConstructorHelpers::FailedToFind
                    (L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C")
          ;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
        ::ConstructorStatics.DmgType_Environmental_Object.Object.field0_0x0 =
             (TObjectPtr<UClass>_u_0)(TObjectPtr<UClass>_u_0)TVar11.DebugPtr;
      }
      if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_28._0_8_);
      }
      atexit(`AWorldSettings::AWorldSettings'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (this->NavigationSystemConfig).field0_0x0.DebugPtr = (UNavigationSystemConfig *)0x0;
  puVar3 = &this->field_0x2cd;
  this->bEnableWorldBoundsChecks = '\x01';
  this->bEnableAISystem = '\x01';
  this->bEnableNavigationSystem = '\x01';
  pFVar9 = (FSoftObjectPath *)UAISystemBase::GetAISystemClassName((FSoftClassPath *)local_28);
  *(undefined8 *)&(this->AISystemClass).SoftObjectPtr = 0;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->AISystemClass).SoftObjectPtr.field_0x8,pFVar9);
  if ((void *)local_28._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  this->bEnableWorldComposition = '\0';
  this->bEnableWorldOriginRebasing = '\0';
  this->KillZ = -1048575.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (::ConstructorStatics.DmgType_Environmental_Object.Object.field0_0x0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)::ConstructorStatics.DmgType_Environmental_Object.Object.field0_0x0);
  }
  (this->KillZDamageType).Class.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)::ConstructorStatics.DmgType_Environmental_Object.Object.field0_0x0;
  this->WorldToMeters = 100.0;
  pUVar10 = Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->DefaultPhysicsVolumeClass).Class.field0_0x0.DebugPtr = pUVar10;
  pUVar10 = Z_Construct_UClass_AGameNetworkManager_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->GameNetworkManagerClass).Class.field0_0x0.DebugPtr = pUVar10;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  this->bAllowTimeDilation = '\x01';
  *(undefined1 *)&this->_padding_ = 1;
  this->TimeDilation = 1.0;
  this->CinematicTimeDilation = 1.0;
  this->DemoPlayTimeDilation = 1.0;
  this->PackedLightAndShadowMapTextureSize = 0x400;
  AActor::SetHidden((AActor *)this,false);
  (this->DefaultColorScale).field0_0x0._s_0.X = 1.0;
  (this->DefaultColorScale).field0_0x0._s_0.Y = 1.0;
  (this->DefaultColorScale).field0_0x0._s_0.Z = 1.0;
  this->bPlaceCellsOnlyAlongCameraTracks = '\0';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  this->DefaultMaxDistanceFieldOcclusionDistance = 600.0;
  this->GlobalDistanceFieldViewDistance = 20000.0;
  this->DynamicIndirectShadowsSelfShadowingIntensity = 0.8;
  this->VisibilityCellSize = 200;
  (this->VisibilityAggressiveness).Value = '\0';
  this->VolumetricLightmapLoadingRange = 6400.0;
  this->MaxNumberOfBookmarks = 10;
  pUVar10 = Z_Construct_UClass_UBookMark_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->LastBookmarkClass).Class.field0_0x0 = (this->DefaultBookmarkClass).Class.field0_0x0;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LevelInstancePivotOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LevelInstancePivotOffset).field0_0x0._s_0.Y = (double)uVar6;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bReuseAddressAndPort = '\0';
  (this->LevelInstancePivotOffset).field0_0x0._s_0.Z = (double)uVar6;
  return this;
}

// ~AWorldSettings @ 148aea810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::~AWorldSettings(AWorldSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AInfo__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->BookmarkArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReplicationViewers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseNavmeshDataLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->AISystemClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// AddAssetUserData @ 148aec010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::AddAssetUserData(AWorldSettings *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  UObject *local_res10;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    (*pcVar2)(this,&local_res10);
    plVar5 = &this->_padding_;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((((UAssetUserData **)*plVar5 <= local_18) &&
        (local_18 < (UAssetUserData **)*plVar5 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar5,piVar1);
    }
    *(int *)&this->_padding_ = iVar4 + 1;
    *(UAssetUserData **)(*plVar5 + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AddBookmark @ 148aec150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UBookmarkBase * __thiscall
AWorldSettings::AddBookmark(AWorldSettings *this,TSubclassOf<UBookmarkBase> param_1,bool param_2)

{
  TArray<TObjectPtr<UBookmarkBase>,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UBookmarkBase *pUVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar9 = (UBookmarkBase *)0x0;
  if ((lVar2 != 0) &&
     (pUVar7 = Z_Construct_UClass_UBookmarkBase_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (pUVar7 = *(UClass **)param_1.Class.field0_0x0, pUVar7 != (UClass *)0x0))
    goto LAB_148aec20e;
  }
  pUVar7 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) {
      return (UBookmarkBase *)0x0;
    }
  }
  else {
    if (pUVar7 == (UClass *)0x0) {
      return (UBookmarkBase *)0x0;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = Z_Construct_UClass_UBookmarkBase_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
    return (UBookmarkBase *)0x0;
  }
  iVar6 = (int)pUVar8->_padding_;
  if (((int)pUVar7->_padding_ < iVar6) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar6 * 8) != &pUVar8->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return (UBookmarkBase *)0x0;
  }
LAB_148aec20e:
  pTVar1 = &this->BookmarkArray;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  iVar6 = (this->BookmarkArray).ArrayNum;
  pFVar11 = pFVar3;
  do {
    if (pFVar11 == pFVar3 + (longlong)iVar6 * 8) {
LAB_148aec24c:
      if (param_2) {
        if (iVar6 == (this->BookmarkArray).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,&(this->BookmarkArray).ArrayMax);
          (this->BookmarkArray).ArrayNum = iVar6;
        }
        iVar6 = (this->BookmarkArray).ArrayNum;
        (this->BookmarkArray).ArrayNum = iVar6 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = 0;
        uVar10 = this->MaxNumberOfBookmarks;
        this->MaxNumberOfBookmarks = (this->BookmarkArray).ArrayNum;
LAB_148aec296:
        if ((-1 < (int)uVar10) && ((int)uVar10 < (this->BookmarkArray).ArrayNum)) {
          pUVar9 = NewObject<UBookmarkBase>
                             ((UObject *)this,pUVar7,(FName)0x0,RF_Transactional,(UObject *)0x0,
                              false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          uVar12 = 0;
          if ((int)uVar10 < (this->BookmarkArray).ArrayNum) {
            uVar12 = ~uVar10 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pUVar9 = (UBookmarkBase *)(*pcVar4)();
            return pUVar9;
          }
          pFVar3 = (this->BookmarkArray).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UBookmarkBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          *(UBookmarkBase **)(pFVar3 + (longlong)(int)uVar10 * 8) = pUVar9;
        }
      }
      return pUVar9;
    }
    if (*(longlong *)pFVar11 == 0) {
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar3 >> 3);
      if (uVar10 != 0xffffffff) goto LAB_148aec296;
      goto LAB_148aec24c;
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// AdjustNumberOfBookmarks @ 148aec3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::AdjustNumberOfBookmarks(AWorldSettings *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TObjectPtr<UBookmarkBase>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FString local_28;
  FString local_18;
  
  iVar5 = this->MaxNumberOfBookmarks;
  if (iVar5 < 0) {
    if (2 < (byte)LogWorldSettings._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSettings);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    iVar5 = 10;
    this->MaxNumberOfBookmarks = 10;
  }
  piVar1 = &(this->BookmarkArray).ArrayNum;
  if ((iVar5 < *piVar1) && (2 < (byte)LogWorldSettings._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSettings);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = *piVar1;
  uVar2 = this->MaxNumberOfBookmarks;
  if (uVar2 != uVar7) {
    pTVar6 = &this->BookmarkArray;
    if ((int)uVar7 < (int)uVar2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar2 - uVar7,&pTVar6->AllocatorInstance,piVar1,
                         &(this->BookmarkArray).ArrayMax);
      memset((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
             (longlong)(int)(uVar2 - uVar7) << 3);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < (int)uVar7) {
        uVar7 = uVar7 - uVar2;
        if (((int)(uVar7 | uVar2) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != 0) {
          _Dst = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar2 * 8;
          iVar5 = ((this->BookmarkArray).ArrayNum - uVar2) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 8,(longlong)iVar5 << 3);
          }
          piVar1 = &(this->BookmarkArray).ArrayNum;
          *piVar1 = *piVar1 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar6->AllocatorInstance,(this->BookmarkArray).ArrayNum,
                     &(this->BookmarkArray).ArrayMax);
        }
      }
    }
  }
  return;
}

// ApplyWorldPartitionForcedSettings @ 148aec600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::ApplyWorldPartitionForcedSettings(AWorldSettings *this)

{
  undefined1 *puVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  
  pTVar6 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar3 = IConsoleManager::Get();
    plVar4 = (longlong *)
             (**(code **)((longlong)*pIVar3 + 0xc0))
                       (pIVar3,L"r.AllowStaticLightingInWorldPartitionMaps",1);
    pTVar5 = pTVar6;
    if (plVar4 != (longlong *)0x0) {
      pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*plVar4 + 0x68))(plVar4);
    }
    CVarAllowStaticLightingOnWPMaps = pTVar5;
    _Init_thread_footer(&::_TSS0);
  }
  this->bPrecomputeVisibility = '\0';
  pTVar5 = CVarAllowStaticLightingOnWPMaps;
  this->bEnableWorldComposition = '\0';
  bVar2 = IsInParallelGameThread();
  if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
    pTVar6 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  if (*(int *)((longlong)pTVar5->ShadowedValue + (longlong)pTVar6->ShadowedValue) == 0) {
    this->bForceNoPrecomputedLighting = '\x01';
  }
  return;
}

// ClearAllBookmarks @ 148aec8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::ClearAllBookmarks(AWorldSettings *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BookmarkArray).AllocatorInstance.Data;
  iVar2 = (this->BookmarkArray).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BookmarkArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UBookmarkBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x2b0))();
      *(longlong *)pFVar3 = 0;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ClearBookmark @ 148aec960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::ClearBookmark(AWorldSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (this->BookmarkArray).ArrayNum)) {
    uVar5 = 0;
    if ((int)param_1 < (this->BookmarkArray).ArrayNum) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->BookmarkArray).AllocatorInstance.Data;
    plVar2 = *(longlong **)(pFVar1 + (longlong)(int)param_1 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2b0))();
      *(undefined8 *)(pFVar1 + (longlong)(int)param_1 * 8) = 0;
    }
  }
  return;
}

// CompactBookmarks @ 148aeca20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::CompactBookmarks(AWorldSettings *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  longlong lVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar2 = (this->BookmarkArray).ArrayNum;
  if (iVar2 != 0) {
    iVar8 = 0;
    pFVar1 = (this->BookmarkArray).AllocatorInstance.Data;
    bVar9 = *(longlong *)pFVar1 != 0;
    lVar4 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar7 + 1;
        if (iVar2 <= lVar4) break;
      } while (bVar9 == (*(longlong *)(pFVar1 + lVar4 * 8) != 0));
      if (bVar9 != false) {
        if (iVar8 != iVar6) {
          memmove(pFVar1 + (longlong)iVar8 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar7;
    } while (lVar4 < iVar2);
    (this->BookmarkArray).ArrayNum = iVar8;
  }
  pUVar3 = (UClass *)this->_padding_;
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar5 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) goto LAB_148aecb35;
  }
  pUVar5 = (UObject *)0x0;
LAB_148aecb35:
  iVar2 = (this->BookmarkArray).ArrayNum;
  if (iVar2 < 10) {
    iVar2 = 10;
  }
  if (iVar2 < *(int *)&pUVar5[0x1e].field_0x18) {
    iVar2 = *(int *)&pUVar5[0x1e].field_0x18;
  }
  this->MaxNumberOfBookmarks = iVar2;
  AdjustNumberOfBookmarks(this);
  return;
}

// FixupDeltaSeconds @ 148af0070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall AWorldSettings::FixupDeltaSeconds(AWorldSettings *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x790))();
  fVar2 = fVar1 * this->MinUndilatedFrameTime;
  fVar1 = fVar1 * this->MaxUndilatedFrameTime;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// GetAISystemClassName @ 148af0140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSoftClassPath * __thiscall
AWorldSettings::GetAISystemClassName(AWorldSettings *this,FSoftClassPath *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FNameEntryId FVar5;
  uint uVar6;
  FNameEntryId FVar7;
  uint uVar8;
  FSoftObjectPath *pFVar9;
  FString local_58;
  FSoftObjectPath local_48;
  FSoftObjectPath local_28;
  
  if (this->bEnableAISystem == '\0') {
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    pFVar9 = &local_48;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
  }
  else {
    FSoftObjectPath::ToString
              ((FSoftObjectPath *)&(this->AISystemClass).SoftObjectPtr.field_0x8,&local_58);
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = local_58.Data.ArrayNum - 1;
    if (local_58.Data.ArrayNum == 0) {
      local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    }
    local_48.AssetPath.PackageName = (FName)local_58.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_28,(TStringView<wchar_t> *)&local_48);
    pFVar9 = &local_28;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
  }
  pFVar1 = (pFVar9->SubPathString).Data.AllocatorInstance.Data;
  FVar5.Value = (pFVar9->AssetPath).PackageName.ComparisonIndex.Value;
  uVar6 = (pFVar9->AssetPath).PackageName.Number;
  FVar7.Value = (pFVar9->AssetPath).AssetName.ComparisonIndex.Value;
  uVar8 = (pFVar9->AssetPath).AssetName.Number;
  (pFVar9->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(uint *)&__return_storage_ptr__->field_0x0 = FVar5.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar7.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar8;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 = pFVar1;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar9->SubPathString).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar9->SubPathString).Data.ArrayMax;
  (pFVar9->SubPathString).Data.ArrayNum = 0;
  (pFVar9->SubPathString).Data.ArrayMax = 0;
  if (bVar2) {
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetActorBounds @ 148af0260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AWorldSettings::GetActorBounds
          (AWorldSettings *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  AActor::GetActorBounds((AActor *)this,param_1,param_2,param_3,param_4);
  return;
}

// GetAssetUserDataArray @ 148af0280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
AWorldSettings::GetAssetUserDataArray(AWorldSettings *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetAssetUserDataOfClass @ 148af0290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAssetUserData * __thiscall
AWorldSettings::GetAssetUserDataOfClass(AWorldSettings *this,TSubclassOf<UAssetUserData> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  uVar8 = 0;
  iVar9 = (int)plVar4[1];
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < iVar9) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar1)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar10 + *plVar4);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_148af0346;
LAB_148af0374:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_148af0374;
          UE::GC::MarkAsReachable(pUVar7);
LAB_148af0346:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_148af0374;
          iVar9 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar6->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_148af0374;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      iVar9 = (int)plVar4[1];
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar9);
  }
  return (UAssetUserData *)0x0;
}

// GetEffectiveTimeDilation @ 148af0900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall AWorldSettings::GetEffectiveTimeDilation(AWorldSettings *this)

{
  if (this->bAllowTimeDilation != '\0') {
    return this->CinematicTimeDilation * this->TimeDilation * this->DemoPlayTimeDilation;
  }
  return __real_3f800000;
}

// GetGravityZ @ 148af0940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall AWorldSettings::GetGravityZ(AWorldSettings *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  float fVar7;
  FString local_28;
  FString local_18;
  
  if (this->bWorldGravitySet == 0) {
    if (this->bGlobalGravitySet == '\0') {
      pUVar3 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
      if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar3);
      }
      pUVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UObject *)0x0) {
        pFVar4 = GetTypeName<UPhysicsSettings>(&local_28);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar5);
      }
      pUVar3 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        pFVar4 = GetTypeName<UPhysicsSettings>(&local_28);
        pwVar5 = L"";
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
        if ((pFVar4->Data).ArrayNum != 0) {
          pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar5,pwVar6);
      }
      fVar7 = *(float *)&pUVar2[1].field_0x10;
    }
    else {
      fVar7 = this->GlobalGravityZ;
    }
    this->WorldGravityZ = fVar7;
  }
  return this->WorldGravityZ;
}

// GetLifetimeReplicatedProps @ 148af0a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AWorldSettings::GetLifetimeReplicatedProps
          (AWorldSettings *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18 [2];
  FDoRepLifetimeParams local_48;
  FDoRepLifetimeParams local_30;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0x11,L"PauserPlayerState",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  local_48.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_48._0_8_ = (void *)0x0;
  local_48.bIsPushBased = false;
  local_48._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_48);
  pFVar2 = ::FName::FName(local_res18,0xc,L"TimeDilation",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  local_48.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_48._0_8_ = (void *)0x0;
  local_48.bIsPushBased = false;
  local_48._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_48);
  pFVar2 = ::FName::FName(local_res18,0x15,L"CinematicTimeDilation",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  local_48.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_48._0_8_ = (void *)0x0;
  local_48.bIsPushBased = false;
  local_48._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_48);
  pFVar2 = ::FName::FName(local_res18,0xd,L"WorldGravityZ",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  local_48.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_48._0_8_ = (void *)0x0;
  local_48.bIsPushBased = false;
  local_48._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_48);
  pFVar2 = ::FName::FName(local_res18,0x14,L"bHighPriorityLoading",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  local_48.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_48.Condition = COND_None;
  local_48.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_48.bIsPushBased = false;
  local_48._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_48);
  local_30.bIsPushBased = true;
  local_30.Condition = COND_None;
  local_30.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_30.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_48._0_8_ = L"NaniteSettings";
  local_48.bIsPushBased = true;
  local_48._9_7_ = 0x1000000;
  RegisterReplicatedLifetimeProperty((FRepPropertyDescriptor *)&local_48,param_1,&local_30);
  return;
}

// GetOrAddBookmark @ 148af0e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UBookmarkBase * __thiscall
AWorldSettings::GetOrAddBookmark(AWorldSettings *this,uint param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UBookmarkBase *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  
  if (((int)param_1 < 0) || ((this->BookmarkArray).ArrayNum <= (int)param_1)) {
    return (UBookmarkBase *)0x0;
  }
  uVar6 = 0;
  if ((int)param_1 < (this->BookmarkArray).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UBookmarkBase *)(*pcVar4)();
    return pUVar7;
  }
  pFVar3 = (this->BookmarkArray).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)param_1 * 8;
  pUVar7 = *(UBookmarkBase **)(pFVar3 + (longlong)(int)param_1 * 8);
  if (pUVar7 != (UBookmarkBase *)0x0) {
    if (!param_2) {
      return pUVar7;
    }
    pUVar9 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UClass *)0x0) goto LAB_148af0ebc;
LAB_148af0eea:
      pUVar9 = (UClass *)0x0;
    }
    else {
      if (pUVar9 == (UClass *)0x0) goto LAB_148af0eea;
      UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_148af0ebc:
      pUVar8 = Z_Construct_UClass_UBookmarkBase_NoRegister();
      if (pUVar8 == (UClass *)0x0) goto LAB_148af0eea;
      iVar2 = (int)pUVar8->_padding_;
      if (((int)pUVar9->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_148af0eea;
    }
    pUVar7 = *(UBookmarkBase **)pFVar1;
    if (*(UClass **)&pUVar7->field_0x10 == pUVar9) {
      return pUVar7;
    }
  }
  pUVar9 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar9 != (UClass *)0x0) goto LAB_148af0f23;
  }
  else if (pUVar9 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_148af0f23:
    pUVar8 = Z_Construct_UClass_UBookmarkBase_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar2 = (int)pUVar8->_padding_;
      if (((int)pUVar9->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_148af0f54;
    }
  }
  pUVar9 = (UClass *)0x0;
LAB_148af0f54:
  pUVar7 = NewObject<UBookmarkBase>
                     ((UObject *)this,pUVar9,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UBookmarkBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBookmarkBase **)pFVar1 = pUVar7;
  return pUVar7;
}

// GetPhysicsCollisionHandlerClass @ 148af1080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSubclassOf<UPhysicsCollisionHandler> __thiscall
AWorldSettings::GetPhysicsCollisionHandlerClass(AWorldSettings *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->PhysicsCollisionHandlerClass).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPhysicsCollisionHandler>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 148af1180

UClass * __cdecl AWorldSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldSettings",
               &Z_Registration_Info_UClass_AWorldSettings.InnerSingleton,
               StaticRegisterNativesAWorldSettings,0x4f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"game",InternalConstructor<AWorldSettings>,
               InternalVTableHelperCtorCaller<AWorldSettings>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldSettings.InnerSingleton;
}

// GetVelocity @ 148af1df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall
AWorldSettings::GetVelocity(AWorldSettings *this,TVector<double> *__return_storage_ptr__)

{
  AActor::GetVelocity((AActor *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWorldPartition @ 148af1e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall AWorldSettings::GetWorldPartition(AWorldSettings *this)

{
  return (this->WorldPartition).field0_0x0.DebugPtr;
}

// IsNavigationSystemEnabled @ 148af2860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AWorldSettings::IsNavigationSystemEnabled(AWorldSettings *this)

{
  UNavigationSystemConfig *pUVar1;
  
  pUVar1 = (this->NavigationSystemConfig).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNavigationSystemConfig *)0x0) &&
     (*(longlong *)&pUVar1->NavigationSystemClass != 0)) {
    return true;
  }
  return false;
}

// NotifyBeginPlay @ 148af3410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::NotifyBeginPlay(AWorldSettings *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UWorld *this_00;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ActorBeginPlay> FVar8;
  AActor *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName FVar9;
  FColor_u_0 local_res10 [4];
  FName local_res20;
  UClass *local_d0;
  LARGE_INTEGER local_c8;
  FStatMessage local_c0;
  TActorIteratorBase<FActorIterator> local_a8;
  FName local_48 [2];
  
  this_00 = AActor::GetWorld((AActor *)this);
  bVar5 = UWorld::GetBegunPlay(this_00);
  if (bVar5) {
    return;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this_00->OnWorldPreBeginPlay);
  local_d0 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  local_a8.Flags = OnlyActiveLevels|SkipPendingKill;
  local_a8.State.bIsSet = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  FActorIteratorState::FActorIteratorState
            (&local_a8.State.TypedValue,this_00,(TSubclassOf<AActor>)&local_d0);
  local_a8.State.bIsSet = true;
  TActorIteratorBase<FActorIterator>::operator++(&local_a8);
LAB_148af34f0:
  do {
    if ((local_a8.State.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_a8.State.TypedValue.ReachedEnd != false) {
      if (local_a8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_a8.State.TypedValue.CurrentWorld,
                   local_a8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      UWorld::SetBegunPlay(this_00,true);
      return;
    }
    FVar8 = StatPtr_STAT_ActorBeginPlay;
    if (StatPtr_STAT_ActorBeginPlay == (FThreadSafeStaticStat<FStat_STAT_ActorBeginPlay>)0x0) {
      pFVar7 = ::FName::FName(local_48,"STAT_ActorBeginPlay");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_ActorBeginPlay>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActorBeginPlay,*pFVar7,
                         L"Actor BeginPlay","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
                         ST_int64,true,false,MCR_Invalid);
    }
    FVar9 = *(FName *)FVar8;
    bVar3 = false;
    bVar5 = false;
    if ((FVar9.ComparisonIndex.Value.Value == 0) && (FVar9.Number == 0)) {
LAB_148af3635:
      bVar4 = false;
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
        bVar3 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res20.ComparisonIndex.Value = FVar9.ComparisonIndex.Value.Value;
          local_res20.Number = FVar9.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res20,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldSettings.cpp"
                     ,0x16a);
          bVar3 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_148af3635;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = false;
      bVar4 = true;
    }
    if ((local_a8.State.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_01 = FActorIteratorState::GetActorChecked(&local_a8.State.TypedValue);
    AActor::DispatchBeginPlay(this_01,true);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar4) || (FVar9 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) {
LAB_148af374e:
      TActorIteratorBase<FActorIterator>::operator++(&local_a8);
      goto LAB_148af34f0;
    }
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->ScopeCount <= this_02->bWaitForExplicitFlush) goto LAB_148af374e;
    local_c0.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
    local_c0.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
    QueryPerformanceCounter(&local_c8);
    local_c0.StatData.Pad[4] = '\0';
    local_c0.StatData.Pad[5] = '\0';
    local_c0.StatData.Pad[6] = '\0';
    local_c0.StatData.Pad[7] = '\0';
    local_c0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
    local_c0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
    local_c0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
    local_c0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_02,&local_c0);
    piVar1 = &this_02->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
      goto LAB_148af374e;
    }
    FThreadStats::Flush(this_02,false,false);
    TActorIteratorBase<FActorIterator>::operator++(&local_a8);
  } while( true );
}

// NotifyMatchStarted @ 148af37e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::NotifyMatchStarted(AWorldSettings *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&pUVar1->OnWorldMatchStarting);
  pUVar1->bMatchStarted = '\x01';
  return;
}

// OnRep_NaniteSettings @ 148af3c90

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

void __thiscall AWorldSettings::OnRep_NaniteSettings(AWorldSettings *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FDestructionSentinel local_a8;
  FGlobalComponentRecreateRenderStateContext local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext(&local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnNaniteSettingsChanged,
             (FWriteAccessScope *)&local_a8);
  bVar3 = false;
  OnNaniteSettingsChanged._28_4_ = OnNaniteSettingsChanged._28_4_ + 1;
  uVar7 = OnNaniteSettingsChanged._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7;
    lVar9 = lVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnNaniteSettingsChanged._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_b8 = lVar8, local_b0 = (longlong)(int)OnNaniteSettingsChanged._16_4_,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar9 + 8 + OnNaniteSettingsChanged._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + OnNaniteSettingsChanged._8_8_), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnNaniteSettingsChanged._28_4_ = OnNaniteSettingsChanged._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnNaniteSettingsChanged,false)
    ;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(&local_88)
  ;
  return;
}

// OnRep_WorldGravityZ @ 148af3e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::OnRep_WorldGravityZ(AWorldSettings *this)

{
  this->bWorldGravitySet = '\x01';
  return;
}

// PostInitProperties @ 148af4a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::PostInitProperties(AWorldSettings *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UNavigationSystemConfig *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *local_res8;
  
  AActor::PostInitProperties((AActor *)this);
  pUVar7 = (UClass *)0x0;
  if ((((this->_padding_ & 0x80410) != 0) ||
      (UNavigationSystemConfig::GetDefaultConfigClass(), local_res8 == (UClass *)0x0)) ||
     (pUVar3 = Z_Construct_UClass_UNavigationSystemConfig_NoRegister(), pUVar3 == (UClass *)0x0))
  goto LAB_148af4b37;
  iVar1 = (int)pUVar3->_padding_;
  if (((int)local_res8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (local_res8 == (UClass *)0x0)) goto LAB_148af4b37;
  pUVar3 = Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
  if (pUVar3 == (UClass *)0x0) {
LAB_148af4af0:
    local_res8 = pUVar7;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_148af4af0;
  }
  pUVar4 = NewObject<UNavigationSystemConfig>
                     ((UObject *)this,local_res8,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UNavigationSystemConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->NavigationSystemConfig).field0_0x0.DebugPtr = pUVar4;
LAB_148af4b37:
  if (this->MinGlobalTimeDilation <= 0.0 && this->MinGlobalTimeDilation != 0.0) {
    this->MinGlobalTimeDilation = 0.0;
  }
  if (this->MaxGlobalTimeDilation <= 0.0 && this->MaxGlobalTimeDilation != 0.0) {
    this->MaxGlobalTimeDilation = 0.0;
  }
  if (this->MinCinematicTimeDilation <= 0.0 && this->MinCinematicTimeDilation != 0.0) {
    this->MinCinematicTimeDilation = 0.0;
  }
  if (this->MaxCinematicTimeDilation <= 0.0 && this->MaxCinematicTimeDilation != 0.0) {
    this->MaxCinematicTimeDilation = 0.0;
  }
  if (this->MinUndilatedFrameTime <= 0.0 && this->MinUndilatedFrameTime != 0.0) {
    this->MinUndilatedFrameTime = 0.0;
  }
  if (this->MaxUndilatedFrameTime <= 0.0 && this->MaxUndilatedFrameTime != 0.0) {
    this->MaxUndilatedFrameTime = 0.0;
  }
  if ((this->_padding_ & 0x10) == 0) {
    if (this->MaxNumberOfBookmarks != (this->BookmarkArray).ArrayNum) {
      AdjustNumberOfBookmarks(this);
    }
    pUVar3 = (this->LastBookmarkClass).Class.field0_0x0.DebugPtr;
    pUVar6 = pUVar7;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_UBookmarkBase_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar6 = (this->LastBookmarkClass).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar3 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_UBookmarkBase_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar7 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
      }
    }
    if (pUVar6 != pUVar7) {
      SanitizeBookmarkClasses(this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      (this->LastBookmarkClass).Class.field0_0x0 = (this->DefaultBookmarkClass).Class.field0_0x0;
    }
  }
  return;
}

// PostLoad @ 148af4c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::PostLoad(AWorldSettings *this)

{
  int iVar1;
  bool bVar2;
  ULevel *pUVar3;
  UClass *pUVar4;
  UNavigationSystemConfig *pUVar5;
  UClass *local_res8;
  
  AActor::PostLoad((AActor *)this);
  if (this->bEnableNavigationSystem == '\0') {
    return;
  }
  if ((this->NavigationSystemConfig).field0_0x0.DebugPtr != (UNavigationSystemConfig *)0x0) {
    return;
  }
  pUVar3 = AActor::GetLevel((AActor *)this);
  if (pUVar3 == (ULevel *)0x0) {
    return;
  }
  UNavigationSystemConfig::GetDefaultConfigClass();
  if ((local_res8 == (UClass *)0x0) ||
     (pUVar4 = Z_Construct_UClass_UNavigationSystemConfig_NoRegister(), pUVar4 == (UClass *)0x0))
  goto LAB_148af4db6;
  iVar1 = (int)pUVar4->_padding_;
  if (((int)local_res8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (local_res8 == (UClass *)0x0)) goto LAB_148af4db6;
  pUVar4 = Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
LAB_148af4d6a:
    local_res8 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_148af4d6a;
  }
  pUVar5 = NewObject<UNavigationSystemConfig>
                     ((UObject *)this,local_res8,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UNavigationSystemConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->NavigationSystemConfig).field0_0x0.DebugPtr = pUVar5;
LAB_148af4db6:
  this->bEnableNavigationSystem = '\0';
  return;
}

// PostRegisterAllComponents @ 148af4dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::PostRegisterAllComponents(AWorldSettings *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FAudioDeviceHandle local_28;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetAudioDevice(this_00,&local_28);
  bVar2 = FAudioDeviceHandle::IsValid(&local_28);
  if (bVar2) {
    bVar2 = FAudioDeviceHandle::IsValid(&local_28);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x60,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FAudioDevice::SetDefaultAudioSettings
              (local_28.Device,this_00,&this->DefaultReverbSettings,
               &this->DefaultAmbientZoneSettings);
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return;
}

// PreInitializeComponents @ 148af4e80

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

void __thiscall AWorldSettings::PreInitializeComponents(AWorldSettings *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ENetMode EVar4;
  UWorld *this_00;
  size_t sVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  FString *pFVar8;
  longlong *plVar9;
  AActor *pAVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_138 [32];
  TStringView<wchar_t> local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  uint local_bc;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  AActor::PreInitializeComponents((AActor *)this);
  EVar4 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar4 == NM_DedicatedServer) {
    return;
  }
  bVar3 = AActor::IsInPersistentLevel((AActor *)this,false);
  if (!bVar3) {
    return;
  }
  this_00 = AActor::GetWorld((AActor *)this);
  pwVar11 = L"";
  if ((this_00 == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldSettings.cpp"
                         ,0xd7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this_00->MyParticleEventManager).field0_0x0.DebugPtr != (AParticleEventManager *)0x0) {
    return;
  }
  if ((GEngine->ParticleEventManagerClassPath).Data.ArrayNum < 2) {
    return;
  }
  pAVar10 = (AActor *)0x0;
  local_f8.DataPtr = (wchar_t *)0x0;
  iStack_e0 = 0;
  local_f8._8_8_ = (ulonglong)local_bc << 0x20;
  if ((GEngine->ParticleEventManagerClassPath).Data.ArrayNum == 0) {
    local_e8 = (FScriptContainerElement *)0x15060d16c;
LAB_148af4f7d:
    sVar5 = wcslen((wchar_t *)local_e8);
    iStack_e0 = (int)sVar5;
  }
  else {
    local_e8 = (GEngine->ParticleEventManagerClassPath).Data.AllocatorInstance.Data;
    if (local_e8 != (FScriptContainerElement *)0x0) goto LAB_148af4f7d;
  }
  pUVar6 = Z_Construct_UClass_UClass_NoRegister();
  local_d8._12_4_ = uStack_dc;
  local_d8.Size = iStack_e0;
  local_d8.DataPtr = (wchar_t *)local_e8;
  pAVar7 = (AActor *)
           StaticLoadObject(pUVar6,(UObject *)0x0,&local_d8,&local_f8,2,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pAVar7 == (AActor *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    pAVar7 = pAVar10;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar7 == (AActor *)0x0) {
      return;
    }
  }
  else {
    if (pAVar7 == (AActor *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  pUVar6 = Z_Construct_UClass_AParticleEventManager_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar6->_padding_;
  if (((int)(pAVar7->PrimaryActorTick)._padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)((pAVar7->PrimaryActorTick)._padding_ + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98._16_8_ = this;
  local_98._24_8_ = AActor::GetInstigator((AActor *)this);
  local_98._52_4_ = local_98._52_4_ | RF_Transient;
  pUVar6 = Z_Construct_UClass_AParticleEventManager_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)(pAVar7->PrimaryActorTick)._padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((pAVar7->PrimaryActorTick)._padding_ + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_148af50b6;
  }
  pAVar7 = pAVar10;
LAB_148af50b6:
  pAVar7 = UWorld::SpawnActor(this_00,(UClass *)pAVar7,(TVector<double> *)0x0,
                              (TRotator<double> *)0x0,(FActorSpawnParameters *)local_98);
  if (pAVar7 != (AActor *)0x0) {
    pUVar6 = Z_Construct_UClass_AParticleEventManager_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
       (pAVar10 = pAVar7,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar6->_padding_)) {
      pFVar8 = GetTypeName<AParticleEventManager>(&local_b8);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<AActor>(&local_a8,pAVar7);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar11,pwVar12);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar10 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar10);
  }
  (this_00->MyParticleEventManager).field0_0x0.DebugPtr = (AParticleEventManager *)pAVar10;
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// RemoveUserDataOfClass @ 148af62c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AWorldSettings::RemoveUserDataOfClass(AWorldSettings *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < (int)this->_padding_) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(&pUVar9->field_0x0 + this->_padding_);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_148af637e;
LAB_148af63ac:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_148af63ac;
          UE::GC::MarkAsReachable(pUVar7);
LAB_148af637e:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_148af63ac;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_148af63ac;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(this->_padding_ + (longlong)(int)uVar8 * 8);
          iVar5 = ((int)this->_padding_ - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
          }
          iVar5 = (int)this->_padding_ + -1;
          *(int *)&this->_padding_ = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&this->_padding_,iVar5,
                     (int *)((longlong)&this->_padding_ + 4));
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < (int)this->_padding_);
  }
  return;
}

// RewindForReplay @ 148af6510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::RewindForReplay(AWorldSettings *this)

{
  undefined1 *puVar1;
  
  AActor::RewindForReplay((AActor *)this);
  this->bWorldGravitySet = '\0';
  this->bHighPriorityLoading = '\0';
  (this->PauserPlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  this->TimeDilation = 1.0;
  this->CinematicTimeDilation = 1.0;
  return;
}

// SanitizeBookmarkClasses @ 148af6550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::SanitizeBookmarkClasses(AWorldSettings *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FString local_48;
  FString local_38;
  
  do {
    pUVar9 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UClass *)0x0) goto LAB_148af6594;
    }
    else if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_148af6594:
      pUVar8 = Z_Construct_UClass_UBookmarkBase_NoRegister();
      if (pUVar8 != (UClass *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar9->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          uVar11 = 0;
          bVar5 = false;
          uVar12 = uVar11;
          if (0 < (this->BookmarkArray).ArrayNum) {
            do {
              uVar10 = (uint)uVar11;
              uVar7 = 0;
              if ((int)uVar10 < (this->BookmarkArray).ArrayNum) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (this->BookmarkArray).AllocatorInstance.Data;
              plVar3 = *(longlong **)(pFVar2 + uVar12);
              if ((plVar3 != (longlong *)0x0) && ((UClass *)plVar3[2] != pUVar9)) {
                (**(code **)(*plVar3 + 0x2b0))();
                *(undefined8 *)(pFVar2 + uVar12) = 0;
                bVar5 = true;
              }
              uVar11 = (ulonglong)(uVar10 + 1);
              uVar12 = uVar12 + 8;
            } while ((int)(uVar10 + 1) < (this->BookmarkArray).ArrayNum);
            if ((bVar5) && (2 < (byte)LogWorldSettings._0_1_)) {
              UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSettings)
              ;
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
            }
          }
          return;
        }
      }
    }
    if (2 < (byte)LogWorldSettings._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSettings);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    pUVar9 = Z_Construct_UClass_UBookMark_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr = pUVar9;
  } while( true );
}

// Serialize @ 148af6760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::Serialize(AWorldSettings *this,FArchive *param_1)

{
  AActor::Serialize((AActor *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEnterpriseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FWorldSettingCustomVersion::GUID);
  if ((*(int *)&param_1->field_0x40 < 0x14d) && (this->GlobalGravityZ != 0.0)) {
    this->bGlobalGravitySet = '\x01';
  }
  return;
}

// Serialize @ 148af67e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::Serialize(AWorldSettings *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEnterpriseObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FWorldSettingCustomVersion::GUID);
  if ((*(int *)&pFVar1->field_0x40 < 0x14d) && (this->GlobalGravityZ != 0.0)) {
    this->bGlobalGravitySet = '\x01';
  }
  return;
}

// SetAllowMaskedMaterials @ 148af6880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::SetAllowMaskedMaterials(AWorldSettings *this,bool param_1)

{
  if ((char)this->_padding_ == '\x03') {
    (this->NaniteSettings).bAllowMaskedMaterials = param_1;
  }
  return;
}

// SetAllowTimeDilation @ 148af68a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::SetAllowTimeDilation(AWorldSettings *this,bool param_1)

{
  this->bAllowTimeDilation = '\0';
  this->field_0x2cf = this->field_0x2cf | param_1 * '\x02';
  return;
}

// SetCinematicTimeDilation @ 148af68c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall AWorldSettings::SetCinematicTimeDilation(AWorldSettings *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->MaxCinematicTimeDilation;
  if (param_1 <= this->MaxCinematicTimeDilation) {
    fVar1 = param_1;
  }
  if (fVar1 <= this->MinCinematicTimeDilation) {
    fVar1 = this->MinCinematicTimeDilation;
  }
  this->CinematicTimeDilation = fVar1;
  return fVar1;
}

// SetNavigationSystemConfigOverride @ 148af68f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AWorldSettings::SetNavigationSystemConfigOverride
          (AWorldSettings *this,UNavigationSystemConfig *param_1)

{
  UNavigationSystemConfig *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNavigationSystemConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->NavigationSystemConfigOverride).field0_0x0.DebugPtr = param_1;
  pUVar1 = (this->NavigationSystemConfig).field0_0x0.DebugPtr;
  if (pUVar1 != (UNavigationSystemConfig *)0x0) {
    if ((param_1 != (UNavigationSystemConfig *)0x0) && (pUVar1 != param_1)) {
      pUVar1->bIsOverriden = 0;
      pUVar1->bIsOverriden = 1;
      return;
    }
    pUVar1->bIsOverriden = 0;
    *(undefined4 *)&pUVar1->field_0x54 = *(undefined4 *)&pUVar1->field_0x54;
  }
  return;
}

// SetPauserPlayerState @ 148af6a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::SetPauserPlayerState(AWorldSettings *this,APlayerState *param_1)

{
  (this->PauserPlayerState).field0_0x0.DebugPtr = param_1;
  return;
}

// SetTimeDilation @ 148af6a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall AWorldSettings::SetTimeDilation(AWorldSettings *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->MaxGlobalTimeDilation;
  if (param_1 <= this->MaxGlobalTimeDilation) {
    fVar1 = param_1;
  }
  if (fVar1 <= this->MinGlobalTimeDilation) {
    fVar1 = this->MinGlobalTimeDilation;
  }
  this->TimeDilation = fVar1;
  return fVar1;
}

// SetWorldPartition @ 148af6a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::SetWorldPartition(AWorldSettings *this,UWorldPartition *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  ulonglong uVar8;
  TConsoleVariableData<int> *pTVar9;
  
  if (((param_1 != (UWorldPartition *)0x0) &&
      ((this->WorldPartition).field0_0x0.DebugPtr != (UWorldPartition *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InWorldPartition || !WorldPartition",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldSettings.cpp"
                         ,0xff,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pvVar3 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  (this->WorldPartition).field0_0x0.DebugPtr = param_1;
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar8 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar5 = IConsoleManager::Get();
    plVar6 = (longlong *)
             (**(code **)((longlong)*pIVar5 + 0xc0))
                       (pIVar5,L"r.AllowStaticLightingInWorldPartitionMaps",1);
    pTVar7 = pTVar9;
    if (plVar6 != (longlong *)0x0) {
      pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    CVarAllowStaticLightingOnWPMaps = pTVar7;
    _Init_thread_footer(&::_TSS0);
  }
  this->bPrecomputeVisibility = '\0';
  pTVar7 = CVarAllowStaticLightingOnWPMaps;
  this->bEnableWorldComposition = '\0';
  bVar4 = IsInParallelGameThread();
  if ((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) {
    pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  if (*(int *)((longlong)pTVar7->ShadowedValue + (longlong)pTVar9->ShadowedValue) == 0) {
    this->bForceNoPrecomputedLighting = '\x01';
  }
  return;
}

// StaticRegisterNativesAWorldSettings @ 148af7070

void __cdecl AWorldSettings::StaticRegisterNativesAWorldSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_AWorldSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsWorldPartitionStreaming @ 148af70f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AWorldSettings::SupportsWorldPartitionStreaming(AWorldSettings *this)

{
  return true;
}

// TeleportTo @ 148af7100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AWorldSettings::TeleportTo
          (AWorldSettings *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  
  bVar1 = AActor::TeleportTo((AActor *)this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// UpdateBookmarkClass @ 148af7730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::UpdateBookmarkClass(AWorldSettings *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  pUVar2 = (this->LastBookmarkClass).Class.field0_0x0.DebugPtr;
  pUVar5 = (UClass *)0x0;
  pUVar6 = pUVar5;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UBookmarkBase_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (this->LastBookmarkClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar2 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UBookmarkBase_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar6 != pUVar5) {
    SanitizeBookmarkClasses(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (this->DefaultBookmarkClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->LastBookmarkClass).Class.field0_0x0 = (this->DefaultBookmarkClass).Class.field0_0x0;
  }
  return;
}

// UpdateNumberOfBookmarks @ 148af79f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWorldSettings::UpdateNumberOfBookmarks(AWorldSettings *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TObjectPtr<UBookmarkBase>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FString FStack_28;
  FString FStack_18;
  
  if (this->MaxNumberOfBookmarks == (this->BookmarkArray).ArrayNum) {
    return;
  }
  iVar5 = this->MaxNumberOfBookmarks;
  if (iVar5 < 0) {
    if (2 < (byte)LogWorldSettings._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&FStack_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSettings);
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
    }
    iVar5 = 10;
    this->MaxNumberOfBookmarks = 10;
  }
  piVar1 = &(this->BookmarkArray).ArrayNum;
  if ((iVar5 < *piVar1) && (2 < (byte)LogWorldSettings._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&FStack_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSettings);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = *piVar1;
  uVar2 = this->MaxNumberOfBookmarks;
  if (uVar2 != uVar7) {
    pTVar6 = &this->BookmarkArray;
    if ((int)uVar7 < (int)uVar2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar2 - uVar7,&pTVar6->AllocatorInstance,piVar1,
                         &(this->BookmarkArray).ArrayMax);
      memset((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
             (longlong)(int)(uVar2 - uVar7) << 3);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < (int)uVar7) {
        uVar7 = uVar7 - uVar2;
        if (((int)(uVar7 | uVar2) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != 0) {
          _Dst = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar2 * 8;
          iVar5 = ((this->BookmarkArray).ArrayNum - uVar2) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 8,(longlong)iVar5 << 3);
          }
          piVar1 = &(this->BookmarkArray).ArrayNum;
          *piVar1 = *piVar1 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar6->AllocatorInstance,(this->BookmarkArray).ArrayNum,
                     &(this->BookmarkArray).ArrayMax);
        }
      }
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 148af9630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AWorldSettings::ValidateGeneratedRepEnums
          (AWorldSettings *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_bHighPriorityLoading,L"bHighPriorityLoading");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_WorldGravityZ,L"WorldGravityZ");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_NaniteSettings,L"NaniteSettings");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_TimeDilation,L"TimeDilation");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_CinematicTimeDilation,L"CinematicTimeDilation");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_PauserPlayerState,L"PauserPlayerState");
    _Init_thread_footer(&::_TSS5);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_bHighPriorityLoading == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_WorldGravityZ == FVar4) {
      if ((param_1->ArrayNum < 0xd) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_NaniteSettings == FVar4) {
        if ((param_1->ArrayNum < 0xe) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_TimeDilation == FVar4) {
          if ((param_1->ArrayNum < 0xf) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar6;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_CinematicTimeDilation == FVar4) {
            if ((param_1->ArrayNum < 0x10) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xf0);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            if (bVar3) {
              FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_PauserPlayerState == FVar6) {
              return;
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\WorldSettings.gen.cpp"
                     ,0x7d4,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWorldSettings"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// __VTableCtorCaller @ 148af9df0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl AWorldSettings::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this = &_vftable__for__AInfo__;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined ***)(this + 1) = &_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x28,0);
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x90 = 0;
    *(undefined8 *)&this[1].field_0x98 = 0;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined8 *)&this[1].field_0xa8 = 0;
    this[1].field_0xe0 = 1;
    this[1].field_0xe8 = 1;
    *(undefined8 *)&this[1].field_0xf0 = 0;
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined4 *)&this[1].field_0x100 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x104 = 0x40000000;
    FInteriorSettings::FInteriorSettings((FInteriorSettings *)&this[1].field_0x108);
    *(undefined2 *)&this[1].field_0x160 = 0;
    this[1].field_0x162 = 0;
    *(undefined8 *)&this[1].field_0x168 = 0;
    *(undefined8 *)&this[1].field_0x170 = 0;
    *(undefined8 *)&this[1].field_0x178 = 0;
    *(undefined8 *)&this[1].field_0x180 = 0;
    *(undefined8 *)&this[1].field_0x188 = 0;
    *(undefined8 *)&this[1].field_0x190 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    this[1].field_0x198 = 0;
    *(undefined4 *)&this[1].field_0x199 = 0;
    *(undefined2 *)&this[1].field_0x19d = 0;
    this[1].field_0x19f = 0;
    *(undefined8 *)&this[1].field_0x1a0 = 0;
    *(undefined8 *)&this[1].field_0x1a8 = 0;
    *(undefined8 *)&this[1].field_0x1b0 = 0;
    *(undefined8 *)&this[1].field_0x1b8 = 0;
    *(undefined8 *)&this[1].field_0x1c0 = 0;
    *(undefined8 *)&this[1].field_0x1c8 = 0;
    this[1].field_0x1d0 = 0;
    *(undefined4 *)&this[1].field_0x1d1 = 0;
    *(undefined2 *)&this[1].field_0x1d5 = 0;
    this[1].field_0x1d7 = 0;
    *(undefined4 *)&this[1].field_0x1d8 = 2;
    *(undefined8 *)&this[1].field_0x1e0 = 0;
    *(undefined8 *)&this[1].field_0x1e8 = 0;
    *(undefined8 *)&this[1].field_0x1f0 = 0;
    *(undefined8 *)&this[1].field_0x1f8 = 0;
    *(undefined8 *)&this[1].field_0x200 = 0;
    *(undefined8 *)&this[1].field_0x210 = 0;
    *(undefined8 *)&this[1].field_0x218 = 0;
    *(undefined8 *)&this[1].field_0x220 = 0;
    *(undefined8 *)&this[1].field_0x228 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// _getUObject @ 148afa040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall AWorldSettings::_getUObject(AWorldSettings *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execOnRep_NaniteSettings @ 148afa270

void __cdecl
AWorldSettings::execOnRep_NaniteSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148afa288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x770))();
  return;
}

// execOnRep_WorldGravityZ @ 148afa2a0

void __cdecl AWorldSettings::execOnRep_WorldGravityZ(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148afa2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

