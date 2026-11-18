// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 101

// CanReplicateStreamingStatus @ 14728ea00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::CanReplicateStreamingStatus(ULevelStreaming *this)

{
  return true;
}

// GetWorldPartitionCell @ 147290fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IWorldPartitionCell * __thiscall ULevelStreaming::GetWorldPartitionCell(ULevelStreaming *this)

{
  return (IWorldPartitionCell *)0x0;
}

// OnCurrentStateChanged @ 147290ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::OnCurrentStateChanged
          (ULevelStreaming *this,ELevelStreamingState param_1,ELevelStreamingState param_2)

{
  return;
}

// OnLevelLoadedChanged @ 147291000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::OnLevelLoadedChanged(ULevelStreaming *this,ULevel *param_1)

{
  return;
}

// ShouldBeAlwaysLoaded @ 147291110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::ShouldBeAlwaysLoaded(ULevelStreaming *this)

{
  return false;
}

// ShouldBlockOnUnload @ 147291180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::ShouldBlockOnUnload(ULevelStreaming *this)

{
  return this->bShouldBlockOnUnload;
}

// ShouldRequireFullVisibilityToRender @ 1472911a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::ShouldRequireFullVisibilityToRender(ULevelStreaming *this)

{
  return 0 < (this->LODPackageNames).ArrayNum;
}

// StaticClass @ 1472911b0

UClass * __cdecl ULevelStreaming::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreaming",
               &Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton,
               StaticRegisterNativesULevelStreaming,0x1f0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelStreaming>,
               InternalVTableHelperCtorCaller<ULevelStreaming>,aFStackX_8,UObject::StaticClass,
               UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 147e45000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLinearColor * __cdecl
`ULevelStreaming::ULevelStreaming'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FLinearColor *__return_storage_ptr__,UPrimitiveComponent *param_1)

{
  undefined8 uVar1;
  ULevel *pUVar2;
  ULevelStreaming *pUVar3;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar2 = UActorComponent::GetComponentLevel((UActorComponent *)param_1);
    if (pUVar2 != (ULevel *)0x0) {
      pUVar3 = FLevelUtils::FindStreamingLevel(pUVar2);
      if (pUVar3 != (ULevelStreaming *)0x0) {
        uVar1 = *(undefined8 *)((longlong)&(pUVar3->LevelColor).field0_0x0 + 8);
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
             *(undefined8 *)&(pUVar3->LevelColor).field0_0x0;
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147e45060

void __cdecl `ULevelStreaming::ULevelStreaming'::__l5::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return;
}

// ULevelStreaming @ 147e55e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreaming * __thiscall
ULevelStreaming::ULevelStreaming(ULevelStreaming *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->WorldAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7ULevelStreaming__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->StreamingPriorityOverrideBackup).bIsSet = false;
  (this->PackageNameToLoad).ComparisonIndex = 0;
  (this->PackageNameToLoad).Number = 0;
  (this->LODPackageNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODPackageNames).ArrayNum = 0;
  (this->LODPackageNames).ArrayMax = 0;
  (this->LODPackageNamesToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODPackageNamesToLoad).ArrayNum = 0;
  (this->LODPackageNamesToLoad).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LevelTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LevelTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LevelTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LevelTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LevelTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LevelTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LevelTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LevelTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LevelTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LevelTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LevelTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LevelTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->LastAsyncLoadPackagePath).PackageName.ComparisonIndex = 0;
  (this->LastAsyncLoadPackagePath).PackageName.Number = 0;
  (this->LastAsyncLoadPackagePath).HeaderExtension = Unspecified;
  (this->AsyncRequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncRequestIDs).ArrayNum = 0;
  (this->AsyncRequestIDs).ArrayMax = 0;
  (this->CurrentStateLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet = false;
  (this->NetVisibilityState).PendingRequestType.bIsSet = false;
  (this->NetVisibilityState).bHasClientPendingRequest = false;
  (this->EditorStreamingVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorStreamingVolumes).ArrayNum = 0;
  (this->EditorStreamingVolumes).ArrayMax = 0;
  *(undefined8 *)&this->OnLevelLoaded = 0;
  *(undefined8 *)&(this->OnLevelLoaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelLoaded).field_0x10 = 0;
  *(undefined8 *)&this->OnLevelUnloaded = 0;
  *(undefined8 *)&(this->OnLevelUnloaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelUnloaded).field_0x10 = 0;
  *(undefined8 *)&this->OnLevelShown = 0;
  *(undefined8 *)&(this->OnLevelShown).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelShown).field_0x10 = 0;
  *(undefined8 *)&this->OnLevelHidden = 0;
  *(undefined8 *)&(this->OnLevelHidden).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelHidden).field_0x10 = 0;
  (this->LoadedLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
  (this->PendingUnloadLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
  (this->CachedWorldAssetPackageFName).ComparisonIndex = 0;
  (this->CachedWorldAssetPackageFName).Number = 0;
  (this->CachedLoadedLevelPackageName).ComparisonIndex = 0;
  (this->CachedLoadedLevelPackageName).Number = 0;
  (this->NetVisibilityState).ServerRequestIndex = 0;
  (this->NetVisibilityState).ClientPendingRequestIndex = 0;
  (this->NetVisibilityState).ClientAckedRequestIndex = 0;
  return this;
}

// ULevelStreaming @ 147e55ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreaming * __thiscall
ULevelStreaming::ULevelStreaming(ULevelStreaming *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UClass *pUVar11;
  FActorPrimitiveColorHandler *this_00;
  FText *pFVar12;
  FText *pFVar13;
  FName *pFVar14;
  undefined ***pppuVar15;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  FText local_b0;
  FText local_a0;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->WorldAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7ULevelStreaming__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->StreamingPriorityOverrideBackup).bIsSet = false;
  (this->PackageNameToLoad).ComparisonIndex = 0;
  (this->PackageNameToLoad).Number = 0;
  (this->LODPackageNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODPackageNames).ArrayNum = 0;
  (this->LODPackageNames).ArrayMax = 0;
  (this->LODPackageNamesToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODPackageNamesToLoad).ArrayNum = 0;
  (this->LODPackageNamesToLoad).ArrayMax = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LevelTransform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->LevelTransform).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LevelTransform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->LevelTransform).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LevelTransform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->LevelTransform).Scale3D.ZW.m128d_f64 = auVar10;
  (this->LastAsyncLoadPackagePath).PackageName.ComparisonIndex = 0;
  (this->LastAsyncLoadPackagePath).PackageName.Number = 0;
  (this->LastAsyncLoadPackagePath).HeaderExtension = Unspecified;
  (this->AsyncRequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncRequestIDs).ArrayNum = 0;
  (this->AsyncRequestIDs).ArrayMax = 0;
  (this->CurrentStateLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bIsStatic = '\0';
  (this->EditorStreamingVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorStreamingVolumes).ArrayNum = 0;
  (this->EditorStreamingVolumes).ArrayMax = 0;
  *(undefined8 *)&this->OnLevelLoaded = 0;
  *(undefined8 *)&(this->OnLevelLoaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelLoaded).field_0x10 = 0;
  *(undefined8 *)&this->OnLevelUnloaded = 0;
  *(undefined8 *)&(this->OnLevelUnloaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelUnloaded).field_0x10 = 0;
  *(undefined8 *)&this->OnLevelShown = 0;
  *(undefined8 *)&(this->OnLevelShown).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelShown).field_0x10 = 0;
  *(undefined8 *)&this->OnLevelHidden = 0;
  *(undefined8 *)&(this->OnLevelHidden).field_0x8 = 0;
  *(undefined8 *)&(this->OnLevelHidden).field_0x10 = 0;
  (this->LoadedLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
  (this->PendingUnloadLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
  (this->CachedWorldAssetPackageFName).ComparisonIndex = 0;
  (this->CachedWorldAssetPackageFName).Number = 0;
  (this->CachedLoadedLevelPackageName).ComparisonIndex = 0;
  (this->CachedLoadedLevelPackageName).Number = 0;
  (this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet = false;
  (this->NetVisibilityState).PendingRequestType.bIsSet = false;
  (this->NetVisibilityState).ServerRequestIndex = 0;
  (this->NetVisibilityState).ClientPendingRequestIndex = 0;
  (this->NetVisibilityState).ClientAckedRequestIndex = 0;
  (this->NetVisibilityState).bHasClientPendingRequest = false;
  (this->LevelColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *&(this->LevelTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LevelTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LevelTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LevelTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LevelTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LevelTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bSkipClientUseMakingInvisibleTransactionRequest = '\0';
  this->bSkipClientUseMakingVisibleTransactionRequest = '\0';
  this->bDrawOnLevelStatusMap = '\x01';
  this->bGarbageCollectionClusteringEnabled = '\x01';
  this->MinTimeBetweenVolumeUnloadRequests = 2.0;
  this->LevelLODIndex = -1;
  this->CurrentState = Removed;
  if ((((this->_padding_ & 0x10) != 0) && (((uint)this->_padding_ >> 0x1a & 1) == 0)) &&
     (pUVar2 = (UClass *)this->_padding_, pUVar11 = StaticClass(), pUVar2 == pUVar11)) {
    this_00 = FActorPrimitiveColorHandler::Get();
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_a0,L"World",L"LevelColor_ToopTip",
                         L"Colorize actor with its level color, otherwise the color is White.");
    local_30 = (undefined ***)0x0;
    local_60 = (undefined ***)0x0;
    local_48 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_40 = `ULevelStreaming::ULevelStreaming'::__l5::<lambda_2>::<lambda_invoker_cdecl>;
    local_58[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    local_78 = &
               ___7__TFunction_OwnedObject_P6A_AUFLinearColor__PEBVUPrimitiveComponent___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_70 = `ULevelStreaming::ULevelStreaming'::__l5::<lambda_1>::<lambda_invoker_cdecl>;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<FLinearColor_(__cdecl*)(UPrimitiveComponent_const_*),FLinearColor,UPrimitiveComponent_const_*>
                  ::Call;
    pFVar13 = FText::AsLocalizable_Advanced_LocText(&local_b0,L"World",L"LevelColor",L"Level Color")
    ;
    pFVar14 = ::FName::FName(&local_b8,L"LevelColor");
    FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
              (this_00,*pFVar14,pFVar13,
               (TFunction<FLinearColor___cdecl(UPrimitiveComponent_const_*)> *)local_88,
               (TFunction<void___cdecl(void)> *)local_58,pFVar12);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar15 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar15 = local_60;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    if (local_58[0] != (code *)0x0) {
      pppuVar15 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar15 = local_30;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
  }
  return this;
}

// ~ULevelStreaming @ 147e57ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::~ULevelStreaming(ULevelStreaming *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7ULevelStreaming__6B_;
  pvVar1 = *(void **)&(this->OnLevelHidden).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLevelHidden);
  pvVar1 = *(void **)&(this->OnLevelShown).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLevelShown);
  pvVar1 = *(void **)&(this->OnLevelUnloaded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLevelUnloaded);
  pvVar1 = *(void **)&(this->OnLevelLoaded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLevelLoaded);
  pFVar2 = (this->EditorStreamingVolumes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentStateLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentStateLock);
  }
  pFVar2 = (this->AsyncRequestIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LODPackageNamesToLoad).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LODPackageNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->WorldAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 147e59170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `ULevelStreaming::UpdateStreamingState'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar6 = 0;
  uVar7 = 0;
  if ((*(byte *)((longlong)*(longlong **)this + 0x122) & 4) == 0) {
    cVar4 = (**(code **)(**(longlong **)this + 0x300))();
    if (cVar4 != '\0') goto LAB_147e591c1;
    bVar5 = UWorld::AllowLevelLoadRequests((UWorld *)**(undefined8 **)((longlong)this + 8));
    uVar3 = 0;
    if (bVar5) goto LAB_147e591ca;
    uVar8 = 0;
  }
  else {
LAB_147e591c1:
    uVar3 = 1;
LAB_147e591ca:
    uVar6 = uVar3;
    uVar8 = 1;
  }
  if (GUseBackgroundLevelStreaming != 0) {
    bVar5 = UWorld::IsGameWorld((UWorld *)**(undefined8 **)((longlong)this + 8));
    if (bVar5) goto LAB_147e591e9;
  }
  uVar7 = 1;
LAB_147e591e9:
  plVar1 = *(longlong **)this;
  lVar2 = plVar1[0x24];
  (**(code **)(*plVar1 + 0x310))(plVar1,**(undefined8 **)((longlong)this + 8),uVar8,uVar6 | uVar7);
  if ((*(char *)(*(longlong *)this + 0x120) != '\x03') &&
     (**(undefined1 **)((longlong)this + 0x10) = 1,
     *(char *)(*(longlong *)this + 0x120) != (char)lVar2)) {
    **(undefined1 **)((longlong)this + 0x18) = 1;
  }
  if (((*(ULevelStreaming **)this)->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0) {
    ULevelStreaming::DiscardPendingUnloadLevel
              (*(ULevelStreaming **)this,(UWorld *)**(undefined8 **)((longlong)this + 8));
  }
  return;
}

// operator() @ 147e596c0

void __thiscall `ULevelStreaming::UpdateStreamingState'::__l34::<lambda_2>::operator()(void *this)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  UObjectBaseUtility *this_00;
  UPackage *pUVar5;
  longlong local_res8;
  
  lVar2 = *(longlong *)this;
  plVar3 = *(longlong **)(lVar2 + 600);
  if (plVar3 != (longlong *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x4a8);
    this_00 = *(UObjectBaseUtility **)(*(longlong *)((longlong)this + 8) + 0x1b0);
    bVar1 = this_00[0xe].field_0x10;
    pUVar5 = UObjectBaseUtility::GetOutermost(this_00);
    local_res8 = pUVar5->_padding_;
    (*pcVar4)(plVar3,&local_res8,lVar2,bVar1 & 1);
  }
  return;
}

// AckNetVisibilityTransaction @ 147e5a6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::AckNetVisibilityTransaction
          (ULevelStreaming *this,FNetLevelVisibilityTransactionId param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res18 [16];
  
  uVar1 = (this->NetVisibilityState).ClientPendingRequestIndex;
  if (uVar1 == (this->NetVisibilityState).ClientAckedRequestIndex) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601582>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x3d2,
                       "NetVisibilityState.ClientPendingRequestIndex != NetVisibilityState.ClientAckedRequestIndex"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (this->NetVisibilityState).ClientAckedRequestIndex = param_1.Data & 0x7fffffff;
    if ((((this->NetVisibilityState).PendingRequestType.bIsSet == true) &&
        ((this->NetVisibilityState).PendingRequestType.TypedValue == MakingVisible)) &&
       (uVar1 == (param_1.Data & 0x7fffffff))) {
      bVar3 = ShouldClientUseMakingVisibleTransactionRequest(this);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShouldClientUseMakingVisibleTransactionRequest()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                           ,0x3da,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((FNetLevelVisibilityState *)local_res18 != &this->NetVisibilityState) {
        (this->NetVisibilityState).ClientAckedRequestCanMakeVisible.TypedValue = param_2;
        (this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet = true;
      }
    }
  }
  return;
}

// AllowIncrementalRemovalWhilePendingVisibility @ 147e5c250

bool __cdecl ULevelStreaming::AllowIncrementalRemovalWhilePendingVisibility(void)

{
  return LevelStreamingCVars::bAllowIncrementalRemovalWhilePendingVisibility;
}

// AsyncLevelLoadComplete @ 147e5d830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::AsyncLevelLoadComplete
          (ULevelStreaming *this,FName *param_1,UPackage *param_2,Type param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  Type TVar3;
  ULevel *pUVar4;
  FName FVar5;
  code *pcVar6;
  FName FVar7;
  UWorld *pUVar8;
  bool bVar9;
  uint uVar10;
  UWorld *pUVar11;
  TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_> *pTVar12;
  UPackage *pUVar13;
  Type *pTVar14;
  FLinkerLoad *this_00;
  FString *pFVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NamedMarker> FVar17;
  FWeakObjectPtr *this_01;
  ELevelStreamingState EVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  wchar_t *pwVar21;
  FName local_res8;
  FName local_res10;
  UObjectRedirector *local_res18;
  UWorld *local_118;
  FPackagePath local_110;
  undefined1 local_100 [24];
  FUtf8String local_e8;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = (FName)param_1;
  SetCurrentState(this,LoadedNotVisible);
  piVar1 = &(this->AsyncRequestIDs).ArrayMax;
  (this->AsyncRequestIDs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AsyncRequestIDs).AllocatorInstance,0,piVar1);
  }
  bVar9 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (((!bVar9) &&
      (pUVar11 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), pUVar11 != (UWorld *)0x0))
     && (bVar9 = UWorld::IsGameWorld(pUVar11), bVar9)) {
    pFVar19 = (pUVar11->StreamingLevels).AllocatorInstance.Data;
    pFVar2 = pFVar19 + (longlong)(pUVar11->StreamingLevels).ArrayNum * 8;
    for (; pFVar19 != pFVar2; pFVar19 = pFVar19 + 8) {
      if (*(ULevelStreaming **)pFVar19 == this) {
        if (pUVar11->NumStreamingLevelsBeingLoaded == 0) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3383753137629172165>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\World.h"
                             ,0x11c5,"World->NumStreamingLevelsBeingLoaded > 0");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          pUVar11->NumStreamingLevelsBeingLoaded = pUVar11->NumStreamingLevelsBeingLoaded - 1;
        }
        break;
      }
    }
  }
  local_110.PackageName = (this->LastAsyncLoadPackagePath).PackageName;
  pwVar21 = L"";
  local_110.HeaderExtension = (this->LastAsyncLoadPackagePath).HeaderExtension;
  local_110._9_3_ = *(undefined3 *)&(this->LastAsyncLoadPackagePath).field_0x9;
  if (param_2 == (UPackage *)0x0) {
    if (param_3 == Canceled) {
      EVar18 = Unloaded;
    }
    else {
      if (2 < (byte)LogLevelStreaming._0_1_) {
        ::FName::ToString(param_1,&local_78);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = FPackageName::DoesPackageExist(&local_110,&local_110);
      if ((!bVar9) && (1 < (byte)LogLevelStreaming._0_1_)) {
        FPackagePath::GetDebugName(&local_110,&local_68);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      EVar18 = FailedToLoad;
    }
    SetCurrentState(this,EVar18);
    (**(code **)(this->_padding_ + 0x2d0))(this,0);
    goto LAB_147e5dd98;
  }
  pUVar11 = UWorld::FindWorldInPackage(param_2);
  if (pUVar11 != (UWorld *)0x0) {
    pUVar4 = (pUVar11->PersistentLevel).field0_0x0.DebugPtr;
    if (pUVar4 == (ULevel *)0x0) {
      if (2 < (byte)LogLevelStreaming._0_1_) {
        ::FName::ToString(param_1,&local_98);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      PrepareLoadedLevel(this,pUVar4,param_2,-1);
    }
    goto LAB_147e5dd98;
  }
  if ((atomic<unsigned_int>)((uint)param_2->PackageFlagsPrivate & 0xfffdffff) !=
      param_2->PackageFlagsPrivate) {
    LOCK();
    param_2->PackageFlagsPrivate =
         (atomic<unsigned_int>)((uint)param_2->PackageFlagsPrivate & 0xfffdffff);
    UNLOCK();
  }
  local_res18 = (UObjectRedirector *)0x0;
  pUVar11 = UWorld::FollowWorldRedirectorInPackage(param_2,&local_res18);
  if (pUVar11 == (UWorld *)0x0) {
    if (2 < (byte)LogLevelStreaming._0_1_) {
      ::FName::ToString(param_1,&local_88);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    SetCurrentState(this,FailedToLoad);
    (**(code **)(this->_padding_ + 0x2d0))(this,0);
    goto LAB_147e5dd98;
  }
  FVar7 = *param_1;
  pTVar12 = TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&ULevel::StreamedLevelsOwningWorld,FVar7);
  this_01 = (FWeakObjectPtr *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_> *)0x0) {
    this_01 = (FWeakObjectPtr *)0x0;
  }
  if (this_01 == (FWeakObjectPtr *)0x0) {
    local_118 = (UWorld *)0x0;
  }
  else {
    local_118 = (UWorld *)FWeakObjectPtr::Get(this_01);
  }
  local_res8 = FVar7;
  if (ULevel::StreamedLevelsOwningWorld._8_4_ != ULevel::StreamedLevelsOwningWorld._52_4_) {
    uVar10 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                         *)&ULevel::StreamedLevelsOwningWorld,FVar7.Number + uVar10,&local_res8);
  }
  pFVar16 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if (*pFVar16 == this->PackageNameToLoad) {
LAB_147e5dabb:
    local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
  }
  else {
    local_res8.ComparisonIndex.Value._0_1_ = 1;
    if (this->PackageNameToLoad == (FName)0x0) goto LAB_147e5dabb;
  }
  pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar11);
  FVar5 = (FName)pUVar13->_padding_;
  this->PackageNameToLoad = FVar5;
  if ((FVar5 != FVar7) &&
     (pTVar14 = TMapBase<FName,enum_EWorldType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>_>
                ::Find(&UWorld::WorldTypePreLoadMap,FVar7), pTVar14 != (Type *)0x0)) {
    FVar5 = this->PackageNameToLoad;
    TVar3 = *pTVar14;
    uVar10 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    pTVar14 = TMapBase<FName,enum_EWorldType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>_>
              ::FindOrAddImpl<FName_const_&>
                        (&UWorld::WorldTypePreLoadMap,uVar10 + FVar5.Number,&this->PackageNameToLoad
                        );
    *pTVar14 = TVar3;
    param_1 = (FName *)local_res10;
    local_d8 = FVar7;
    if (UWorld::WorldTypePreLoadMap._8_4_ != UWorld::WorldTypePreLoadMap._52_4_) {
      uVar10 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      TSet<TTuple<FName,enum_EWorldType::Type>,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(&UWorld::WorldTypePreLoadMap,FVar7.Number + uVar10,&local_d8);
      param_1 = (FName *)local_res10;
    }
  }
  pUVar8 = local_118;
  if ((char)local_res8.ComparisonIndex.Value == '\0') {
    if (local_118 != (UWorld *)0x0) {
      pUVar4 = (pUVar11->PersistentLevel).field0_0x0.DebugPtr;
      if (pUVar4 != (ULevel *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_118);
        }
        (pUVar4->OwningWorld).field0_0x0.DebugPtr = pUVar8;
      }
      ((((pUVar11->PersistentLevel).field0_0x0.DebugPtr)->Model).field0_0x0.DebugPtr)->
      InvalidSurfaces = true;
      ULevel::CommitModelSurfaces((pUVar11->PersistentLevel).field0_0x0.DebugPtr);
    }
    pcVar6 = *(code **)(this->_padding_ + 0x2d8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_100._0_8_ = 0;
    local_100._16_8_ = 0;
    local_100._8_8_ = 0;
    FUtf8String::Reset(&local_e8,0);
    local_118 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_100,(FObjectPtr)&local_118);
    (*pcVar6)(this,local_100);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = FLinkerLoad::FindExistingLinkerForPackage(param_2);
    if (this_00 != (FLinkerLoad *)0x0) {
      FLinkerLoad::Detach(this_00);
      DeleteLoader(this_00);
    }
    pcVar6 = *(code **)(local_res18->_padding_ + 0x170);
    pUVar13 = GetTransientPackage();
    (*pcVar6)(local_res18,0,pUVar13);
    (pUVar11->WorldType).Value = '\a';
  }
LAB_147e5dd98:
  FVar7 = *param_1;
  local_d0 = FVar7;
  if (UWorld::WorldTypePreLoadMap._8_4_ != UWorld::WorldTypePreLoadMap._52_4_) {
    uVar10 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    TSet<TTuple<FName,enum_EWorldType::Type>,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>(&UWorld::WorldTypePreLoadMap,FVar7.Number + uVar10,&local_d0);
  }
  FVar7 = *param_1;
  local_c8 = FVar7;
  if (ULevel::StreamedLevelsOwningWorld._8_4_ != ULevel::StreamedLevelsOwningWorld._52_4_) {
    uVar10 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                         *)&ULevel::StreamedLevelsOwningWorld,FVar7.Number + uVar10,&local_c8);
  }
  pFVar15 = ::FName::ToString(param_1,&local_58);
  ::FString::ConcatCF(&local_c0,L"RequestLevelComplete - ",pFVar15);
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_c0.Data.ArrayNum != 0) {
    FVar20.Data = local_c0.Data.AllocatorInstance.Data;
  }
  pFVar16 = ::FName::FName(&local_a8,(wchar_t *)FVar20.Data);
  FVar7 = *pFVar16;
  FVar17 = StatPtr_STAT_NamedMarker;
  if (StatPtr_STAT_NamedMarker == (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)0x0) {
    pFVar16 = ::FName::FName(&local_a0,"STAT_NamedMarker");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NamedMarker,*pFVar16,
                        L"NamedMarker","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true
                        ,false,ST_FName,false,false,MCR_Invalid);
  }
  local_res10 = *(FName *)FVar17;
  FThreadStats::AddMessage<FName>(local_res10,SpecialMessageMarker,FVar7,false);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint1929 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint1929,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                 ,0x789,L"RequestLevelComplete - %s");
      __BookmarkPoint1929 = true;
    }
    pFVar15 = ::FName::ToString(param_1,&local_48);
    if ((pFVar15->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    uVar10 = CallstackTrace_GetCurrentId();
    FMiscTrace::OutputBookmark<wchar_t_const_*>(uVar10,&__BookmarkPoint1929,pwVar21);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BeginClientNetVisibilityRequest @ 147e5dfb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::BeginClientNetVisibilityRequest(ULevelStreaming *this,bool param_1)

{
  ULevel *pUVar1;
  bool bVar2;
  ENetMode EVar3;
  UWorld *pUVar4;
  TOptional<ENetLevelVisibilityRequest> *pTVar5;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return;
  }
  pUVar4 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  if (pUVar4 == (UWorld *)0x0) {
    return;
  }
  bVar2 = UWorld::IsGameWorld(pUVar4);
  if (!bVar2) {
    return;
  }
  EVar3 = UWorld::InternalGetNetMode(pUVar4);
  if (EVar3 != NM_Client) {
    return;
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return;
  }
  pUVar4 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  if (pUVar4 == (UWorld *)0x0) {
    return;
  }
  bVar2 = UWorld::IsGameWorld(pUVar4);
  if (!bVar2) {
    return;
  }
  bVar2 = IsWaitingForNetVisibilityTransactionAck(this,param_1 ^ MakingInvisible);
  if (!bVar2) {
    (this->NetVisibilityState).bHasClientPendingRequest = false;
    if ((this->NetVisibilityState).PendingRequestType.bIsSet != false) {
      (this->NetVisibilityState).PendingRequestType.bIsSet = false;
    }
    (this->NetVisibilityState).ServerRequestIndex = 0;
    if (param_1) {
      bVar2 = ShouldClientUseMakingVisibleTransactionRequest(this);
      if (!bVar2) {
        return;
      }
      pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
      if ((pUVar1 != (ULevel *)0x0) && (bVar2 = UWorld::IsLevelMakingVisible(pUVar4,pUVar1), bVar2))
      {
        return;
      }
      (this->NetVisibilityState).bHasClientPendingRequest = true;
      pTVar5 = &(this->NetVisibilityState).PendingRequestType;
      if ((TOptional<ENetLevelVisibilityRequest> *)local_14 == pTVar5) {
        return;
      }
      pTVar5->TypedValue = MakingVisible;
    }
    else {
      bVar2 = ShouldClientUseMakingInvisibleTransactionRequest(this);
      if (!bVar2) {
        return;
      }
      pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
      if ((pUVar1 != (ULevel *)0x0) &&
         (bVar2 = UWorld::IsLevelMakingInvisible(pUVar4,pUVar1), bVar2)) {
        return;
      }
      (this->NetVisibilityState).bHasClientPendingRequest = true;
      pTVar5 = &(this->NetVisibilityState).PendingRequestType;
      if ((TOptional<ENetLevelVisibilityRequest> *)&local_18 == pTVar5) {
        return;
      }
      pTVar5->TypedValue = MakingInvisible;
    }
    (this->NetVisibilityState).PendingRequestType.bIsSet = true;
    return;
  }
  return;
}

// BroadcastLevelLoadedStatus @ 147e5e900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ULevelStreaming::BroadcastLevelLoadedStatus(UWorld *param_1,FName param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FName *pFVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->StreamingLevels).AllocatorInstance.Data;
  iVar2 = (param_1->StreamingLevels).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->StreamingLevels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    pFVar4 = (FName *)(**(code **)(*plVar3 + 0x2e0))(plVar3);
    if (*pFVar4 == param_2) {
      this = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar3 + 0x2a);
      if (!param_3) {
        this = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(plVar3 + 0x2d);
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                (this,(void *)0x0);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// BroadcastLevelVisibleStatus @ 147e5e9a0

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

void __cdecl
ULevelStreaming::BroadcastLevelVisibleStatus(UWorld *param_1,FName param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  ForElementType<ULevelStreaming_*> FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  longlong lVar8;
  ForElementType<ULevelStreaming_*> FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_a8 [32];
  longlong **local_88;
  ForElementType<ULevelStreaming_*> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_58;
  undefined1 local_57 [7];
  longlong *local_50;
  undefined1 local_48 [8];
  ForElementType<ULevelStreaming_*> local_40;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar10 = (param_1->StreamingLevels).AllocatorInstance.Data;
  iVar3 = (param_1->StreamingLevels).ArrayNum;
  local_40.SecondaryData = (ForElementType<ULevelStreaming_*>)0x0;
  local_30 = 0;
  local_2c = 1;
  pFVar1 = pFVar10 + (longlong)iVar3 * 8;
  do {
    if ((param_1->StreamingLevels).ArrayNum != iVar3) {
      local_58 = 0;
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_58);
    }
    iVar6 = local_30;
    if (pFVar10 == pFVar1) {
      FVar9 = (ForElementType<ULevelStreaming_*>)&local_40;
      if (local_40.SecondaryData != (ForElementType<ULevelStreaming_*>)0x0) {
        FVar9 = local_40.SecondaryData;
      }
      FVar2 = (ForElementType<ULevelStreaming_*>)((longlong)FVar9 + (longlong)local_30 * 8);
      while( true ) {
        if (local_30 != iVar6) {
          `TCheckedPointerIterator<ULevelStreaming_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_57);
        }
        if (FVar9 == FVar2) break;
        lVar8 = 0x180;
        if (!param_3) {
          lVar8 = 0x198;
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   (lVar8 + *(longlong *)FVar9),(void *)0x0);
        FVar9 = (ForElementType<ULevelStreaming_*>)((longlong)FVar9 + 8);
      }
      if (local_40.SecondaryData != (ForElementType<ULevelStreaming_*>)0x0) {
        FMemory::Free((void *)local_40.SecondaryData);
      }
      return;
    }
    local_50 = *(longlong **)pFVar10;
    pFVar7 = (FName *)(**(code **)(*local_50 + 0x2e0))(local_50,local_48);
    if (*pFVar7 == param_2) {
      FVar9 = (ForElementType<ULevelStreaming_*>)&local_40;
      if (local_40.SecondaryData != (ForElementType<ULevelStreaming_*>)0x0) {
        FVar9 = local_40.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_50) {
        FVar9 = (ForElementType<ULevelStreaming_*>)&local_40;
        if (local_40.SecondaryData != (ForElementType<ULevelStreaming_*>)0x0) {
          FVar9 = local_40.SecondaryData;
        }
        if (&local_50 < (longlong **)((longlong)FVar9 + (longlong)local_2c * 8)) {
          local_70 = (longlong)local_30;
          local_68 = 8;
          local_88 = &local_50;
          local_80 = (ForElementType<ULevelStreaming_*>)&local_40;
          if (local_40.SecondaryData != (ForElementType<ULevelStreaming_*>)0x0) {
            local_80 = local_40.SecondaryData;
          }
          local_78 = (longlong)local_2c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      iVar6 = local_30;
      if (local_30 == local_2c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<ULevelStreaming_*>_>
                          (0x808,&local_40,&local_2c);
      }
      local_30 = iVar6 + 1;
      FVar9 = (ForElementType<ULevelStreaming_*>)&local_40;
      if (local_40.SecondaryData != (ForElementType<ULevelStreaming_*>)0x0) {
        FVar9 = local_40.SecondaryData;
      }
      *(longlong **)((longlong)FVar9 + (longlong)iVar6 * 8) = local_50;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// CanMakeInvisible @ 147e5efa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::CanMakeInvisible(ULevelStreaming *this)

{
  ULevel *pUVar1;
  bool bVar2;
  undefined1 uVar3;
  UWorld *pUVar4;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((((bVar2) ||
       (pUVar4 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), pUVar4 == (UWorld *)0x0))
      || (bVar2 = UWorld::IsGameWorld(pUVar4), !bVar2)) ||
     ((pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr, pUVar1 == (ULevel *)0x0 ||
      (bVar2 = UWorld::IsLevelMakingInvisible(pUVar4,pUVar1), !bVar2)))) {
    uVar3 = (**(code **)(this->_padding_ + 0x2b8))(this,0);
    if (((this->bSkipClientUseMakingInvisibleTransactionRequest == '\0') &&
        (bVar2 = UObjectBaseUtility::IsTemplate
                           ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
        !bVar2)) &&
       ((pUVar4 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), pUVar4 != (UWorld *)0x0
        && ((bVar2 = UWorld::SupportsMakingInvisibleTransactionRequests(pUVar4), bVar2 &&
            (bVar2 = ShouldWaitForServerAckBeforeChangingVisibilityState(this,MakingInvisible),
            bVar2)))))) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return (bool)uVar3;
}

// CanMakeVisible @ 147e5f080

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::CanMakeVisible(ULevelStreaming *this)

{
  ULevel *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UWorld *pUVar5;
  UWorldPartition *this_00;
  
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((((!bVar3) &&
       (pUVar5 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), pUVar5 != (UWorld *)0x0))
      && (bVar3 = UWorld::IsGameWorld(pUVar5), bVar3)) &&
     (pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr, pUVar1 != (ULevel *)0x0)) {
    bVar3 = UWorld::IsLevelMakingVisible(pUVar5,pUVar1);
    if (bVar3) {
      return true;
    }
    this_00 = ULevel::GetWorldPartition((this->LoadedLevel).field0_0x0.DebugPtr);
    if ((this_00 != (UWorldPartition *)0x0) &&
       (bVar3 = UWorldPartition::CanInitialize(this_00,pUVar5), !bVar3)) {
      return false;
    }
  }
  uVar4 = (**(code **)(this->_padding_ + 0x2b8))(this,1);
  if (this->bSkipClientUseMakingVisibleTransactionRequest != '\0') {
    return (bool)uVar4;
  }
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    pUVar5 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
    if (pUVar5 == (UWorld *)0x0) {
      return (bool)uVar4;
    }
    bVar3 = UWorld::SupportsMakingVisibleTransactionRequests(pUVar5);
    if (!bVar3) {
      return (bool)uVar4;
    }
    bVar3 = ShouldWaitForServerAckBeforeChangingVisibilityState(this,MakingVisible);
    if (!bVar3) {
      if ((this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet == false) {
        return (bool)uVar4;
      }
      if ((this->NetVisibilityState).ClientAckedRequestCanMakeVisible.TypedValue != false) {
        return (bool)uVar4;
      }
      bVar3 = IsWaitingForNetVisibilityTransactionAck(this,MakingVisible);
      if ((bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsWaitingForNetVisibilityTransactionAck(ENetLevelVisibilityRequest::MakingVisible)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                             ,0x393,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      BeginClientNetVisibilityRequest(this,true);
    }
    return false;
  }
  return (bool)uVar4;
}

// CreateInstance @ 147e624c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelStreaming * __thiscall ULevelStreaming::CreateInstance(ULevelStreaming *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UClass *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UWorld *this_00;
  FString *pFVar7;
  FName *pFVar8;
  UClass *pUVar9;
  ULevelStreaming *this_01;
  FName FVar10;
  TStringBuilderBase<wchar_t> *this_02;
  size_t sVar11;
  ULevelStreaming *pUVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  undefined1 auStackY_628 [32];
  FName local_5e0;
  FSoftObjectPath local_5d8;
  FString local_5b8;
  FSoftObjectPath local_5a8;
  FString local_588;
  FString local_578;
  FScriptContainerElement *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  FString local_558;
  FString local_548;
  undefined1 local_538 [8];
  undefined1 local_530 [8];
  undefined1 local_528 [16];
  TStringView<wchar_t> local_518;
  undefined8 local_508;
  FSoftObjectPath local_500;
  undefined1 local_4d8 [128];
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_628;
  this_01 = (ULevelStreaming *)0x0;
  bVar6 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  pUVar12 = (ULevelStreaming *)0x0;
  if ((!bVar6) &&
     (this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), pUVar12 = this_01,
     this_00 != (UWorld *)0x0)) {
    local_568 = (param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    iStack_560 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_560 = 0;
    }
    local_518._12_4_ = uStack_55c;
    local_518.Size = iStack_560;
    local_518.DataPtr = (wchar_t *)local_568;
    pFVar7 = FPackageName::GetShortName(&local_578,&local_518);
    ::FString::ConcatFF(&local_548,&this_00->StreamingLevelsPrefix,pFVar7);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
    pFVar8 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this,local_538);
    ::FName::ToString(pFVar8,&local_5b8);
    pFVar7 = FPackageName::GetLongPackagePath((FString *)&local_5d8,&local_5b8);
    ::FString::ConcatFC(&local_558,pFVar7,L"/");
    if (local_5d8.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_5d8.AssetPath.PackageName);
    }
    if ((FName)local_5b8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF(&local_588,&local_558,&local_548);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_588.Data.ArrayNum != 0) {
      FVar14.Data = local_588.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_5e0,(wchar_t *)FVar14.Data);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    pFVar2 = (this_00->StreamingLevels).AllocatorInstance.Data;
    iVar1 = (this_00->StreamingLevels).ArrayNum;
    for (pFVar15 = pFVar2; pFVar15 != pFVar2 + (longlong)iVar1 * 8; pFVar15 = pFVar15 + 8) {
      pFVar8 = (FName *)(**(code **)(**(longlong **)pFVar15 + 0x2e0))
                                  (*(longlong **)pFVar15,local_530);
      if (*pFVar8 == local_5e0) {
        if ((int)((longlong)pFVar15 - (longlong)pFVar2 >> 3) != -1) {
          if ((byte)LogStreaming._0_1_ < 3) goto LAB_147e629a6;
          ::FName::ToString(&local_5e0,(FString *)&local_5d8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          FVar10 = local_5d8.AssetPath.PackageName;
          goto LAB_147e6299c;
        }
        break;
      }
    }
    pUVar3 = (UClass *)this->_padding_;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this_00,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = StaticClass();
    CheckIsClassChildOf_Internal(pUVar9,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_4d8,pUVar3);
    local_4d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_4d8._56_8_ = (UPackage *)0x0;
    local_4d8._16_4_ = 0;
    local_4d8._20_4_ = 0;
    local_4d8._24_4_ = RF_Transient;
    local_4d8._40_8_ = (UObject *)0x0;
    local_4d8[0x20] = false;
    local_4d8._8_8_ = this_00;
    this_01 = (ULevelStreaming *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_4d8);
    if (local_4d8._64_8_ != 0) {
      plVar13 = (longlong *)(local_4d8 + 0x50);
      if ((longlong *)local_4d8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_4d8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    FVar10 = this->PackageNameToLoad;
    if (FVar10 == (FName)0x0) {
      pFVar8 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this,local_528);
      FVar10 = *pFVar8;
    }
    this_01->PackageNameToLoad = FVar10;
    pFVar7 = FPackageName::GetShortName(&local_578,&this_01->PackageNameToLoad);
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    local_458.Base = local_438;
    local_458.CurPos = local_438;
    local_458.End = (wchar_t *)local_38;
    ::FName::AppendString(&local_5e0,&local_458);
    this_02 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_458,L".",1);
    iVar1 = (pFVar7->Data).ArrayNum;
    iVar16 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar16 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (this_02,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar16);
    if (local_458.End < local_458.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,1);
    }
    *local_458.CurPos = L'\0';
    local_5b8.Data.ArrayNum = 0;
    local_5a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_5a8.AssetPath.PackageName.Number = 0;
    local_5a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_5a8.AssetPath.AssetName.Number = 0;
    local_5a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a8.SubPathString.Data.ArrayNum = 0;
    local_5a8.SubPathString.Data.ArrayMax = 0;
    local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_458.Base;
    if ((FName)local_458.Base != (FName)0x0) {
      sVar11 = wcslen(local_458.Base);
      local_5b8.Data.ArrayNum = (int)sVar11;
    }
    local_5d8.AssetPath.AssetName.Number = local_5b8.Data.ArrayMax;
    local_5d8.AssetPath.AssetName.ComparisonIndex.Value = local_5b8.Data.ArrayNum;
    local_5d8.AssetPath.PackageName = (FName)local_5b8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_5a8,(TStringView<wchar_t> *)&local_5d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
    FVar14.Data = local_5a8.SubPathString.Data.AllocatorInstance.Data;
    sVar11 = (size_t)local_5a8.SubPathString.Data.ArrayNum;
    local_5d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5d8.SubPathString.Data.ArrayNum = local_5a8.SubPathString.Data.ArrayNum;
    pcVar4 = *(code **)(this_01->_padding_ + 0x2d8);
    local_5d8.AssetPath.PackageName = local_5a8.AssetPath.PackageName;
    local_5d8.AssetPath.AssetName = local_5a8.AssetPath.AssetName;
    if (local_5a8.SubPathString.Data.ArrayNum == 0) {
      local_5d8.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_5a8.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_5d8.SubPathString,local_5a8.SubPathString.Data.ArrayNum
                 ,&local_5d8.SubPathString.Data.ArrayMax);
      memcpy(local_5d8.SubPathString.Data.AllocatorInstance.Data,FVar14.Data,sVar11);
    }
    local_508 = 0;
    FSoftObjectPath::FSoftObjectPath(&local_500,&local_5d8);
    if (local_5d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.SubPathString.Data.AllocatorInstance.Data);
    }
    (*pcVar4)(this_01);
    if (local_500.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.SubPathString.Data.AllocatorInstance.Data);
    }
    (**(code **)(this_01->_padding_ + 0x2d0))(this_01);
    SetShouldBeVisible(this_01,false);
    dVar5 = (this->LevelTransform).Rotation.XY.m128d_f64[1];
    (this_01->LevelTransform).Rotation.XY.m128d_f64[0] =
         (this->LevelTransform).Rotation.XY.m128d_f64[0];
    (this_01->LevelTransform).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (this->LevelTransform).Rotation.ZW.m128d_f64[1];
    (this_01->LevelTransform).Rotation.ZW.m128d_f64[0] =
         (this->LevelTransform).Rotation.ZW.m128d_f64[0];
    (this_01->LevelTransform).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (this->LevelTransform).Translation.XY.m128d_f64[1];
    (this_01->LevelTransform).Translation.XY.m128d_f64[0] =
         (this->LevelTransform).Translation.XY.m128d_f64[0];
    (this_01->LevelTransform).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (this->LevelTransform).Translation.ZW.m128d_f64[1];
    (this_01->LevelTransform).Translation.ZW.m128d_f64[0] =
         (this->LevelTransform).Translation.ZW.m128d_f64[0];
    (this_01->LevelTransform).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (this->LevelTransform).Scale3D.XY.m128d_f64[1];
    (this_01->LevelTransform).Scale3D.XY.m128d_f64[0] =
         (this->LevelTransform).Scale3D.XY.m128d_f64[0];
    (this_01->LevelTransform).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (this->LevelTransform).Scale3D.ZW.m128d_f64[1];
    (this_01->LevelTransform).Scale3D.ZW.m128d_f64[0] =
         (this->LevelTransform).Scale3D.ZW.m128d_f64[0];
    (this_01->LevelTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
    UWorld::AddStreamingLevel(this_00,this_01);
    FVar10 = (FName)local_5a8.SubPathString.Data.AllocatorInstance;
LAB_147e6299c:
    pUVar12 = this_01;
    if (FVar10 != (FName)0x0) {
      FMemory::Free((void *)FVar10);
    }
LAB_147e629a6:
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  return pUVar12;
}

// DefaultAllowClientUseMakingInvisibleTransactionRequests @ 147e62b20

bool __cdecl ULevelStreaming::DefaultAllowClientUseMakingInvisibleTransactionRequests(void)

{
  return LevelStreamingCVars::bDefaultAllowClientUseMakingInvisibleTransactionRequests;
}

// DefaultAllowClientUseMakingVisibleTransactionRequests @ 147e62b30

bool __cdecl ULevelStreaming::DefaultAllowClientUseMakingVisibleTransactionRequests(void)

{
  return LevelStreamingCVars::bDefaultAllowClientUseMakingVisibleTransactionRequests;
}

// DetermineTargetState @ 147e63b50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ELevelStreamingTargetState __thiscall ULevelStreaming::DetermineTargetState(ULevelStreaming *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  ELevelStreamingTargetState EVar4;
  UWorld *this_00;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    this_00 = (UWorld *)0x0;
  }
  else {
    this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  switch(this->CurrentState) {
  case Removed:
  case FailedToLoad:
    break;
  case Unloaded:
    if (this->bIsRequestingUnloadAndRemoval != 0) {
      return UnloadedAndRemoved;
    }
    if (!(bool)this_00->bShouldForceUnloadStreamingLevels) {
      bVar2 = UWorld::IsGameWorld(this_00);
      if (!bVar2) {
        return LoadedNotVisible;
      }
      cVar3 = (**(code **)(this->_padding_ + 0x2e8))(this);
      if (cVar3 == '\0') {
        return Unloaded;
      }
      return LoadedNotVisible;
    }
    break;
  case Loading:
    return LoadedNotVisible;
  case LoadedNotVisible:
    if (((this->bIsRequestingUnloadAndRemoval == 0) &&
        (!(bool)this_00->bShouldForceUnloadStreamingLevels)) &&
       ((bVar2 = UWorld::IsGameWorld(this_00), !bVar2 ||
        (cVar3 = (**(code **)(this->_padding_ + 0x2e8))(this), cVar3 != '\0')))) {
      bVar2 = IsDesiredLevelLoaded(this);
      if (!bVar2) {
        return LoadedNotVisible;
      }
      cVar3 = (**(code **)(this->_padding_ + 0x2f0))(this);
      if (cVar3 == '\0') {
        return LoadedNotVisible;
      }
      return LoadedVisible;
    }
    break;
  case MakingVisible:
    if (((this->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3914447087793601885>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                           ,0x2a3,"LoadedLevel"), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
    cVar3 = (**(code **)(this->_padding_ + 0x2f0))(this);
    if ((cVar3 == '\0') &&
       (bVar2 = UWorld::IsLevelMakingVisible(this_00,(this->LoadedLevel).field0_0x0.DebugPtr),
       !bVar2)) {
      return LoadedNotVisible;
    }
    return LoadedVisible;
  case LoadedVisible:
    if (this->bIsRequestingUnloadAndRemoval != 0) {
      return LoadedNotVisible;
    }
    if (!(bool)this_00->bShouldForceUnloadStreamingLevels) {
      bVar2 = UWorld::IsGameWorld(this_00);
      if ((bVar2) && (cVar3 = (**(code **)(this->_padding_ + 0x2e8))(this), cVar3 == '\0')) {
        return LoadedNotVisible;
      }
      cVar3 = (**(code **)(this->_padding_ + 0x2f0))(this);
      if (cVar3 != '\0') {
        IsDesiredLevelLoaded(this);
        return LoadedVisible;
      }
      return LoadedNotVisible;
    }
    return LoadedNotVisible;
  case MakingInvisible:
    if ((this->LoadedLevel).field0_0x0.DebugPtr != (ULevel *)0x0) {
      return LoadedNotVisible;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601871>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x2b1,"LoadedLevel");
    if (!bVar2) {
      return LoadedNotVisible;
    }
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  default:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601792>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x300,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return Unloaded;
}

// DiscardPendingUnloadLevel @ 147e63e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::DiscardPendingUnloadLevel(ULevelStreaming *this,UWorld *param_1)

{
  ULevel *pUVar1;
  TOptional<UE::FTimeout_const_> local_28;
  
  pUVar1 = (this->PendingUnloadLevel).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevel *)0x0) {
    if (pUVar1->bIsVisible != '\0') {
      local_28.bIsSet = false;
      UWorld::RemoveFromWorld
                (param_1,pUVar1,false,&local_28,(FNetLevelVisibilityTransactionId)0x0,
                 (ULevelStreaming *)0x0);
    }
    pUVar1 = (this->PendingUnloadLevel).field0_0x0.DebugPtr;
    if (pUVar1->bIsVisible == '\0') {
      FLevelStreamingGCHelper::RequestUnload(pUVar1);
      (this->PendingUnloadLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
    }
  }
  return;
}

// EnumToString @ 147e64ef0

wchar_t * __cdecl ULevelStreaming::EnumToString(ECurrentState param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Removed:
    return L"Removed";
  case Unloaded:
    return L"Unloaded";
  case FailedToLoad:
    return L"FailedToLoad";
  case Loading:
    return L"Loading";
  case LoadedNotVisible:
    return L"LoadedNotVisible";
  case MakingVisible:
    return L"MakingVisible";
  case LoadedVisible:
    return L"LoadedVisible";
  case MakingInvisible:
    return L"MakingInvisible";
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3914447087793601293>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                     ,0x4f3,"false");
  if (!bVar2) {
    return L"Unknown";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// FindStreamingLevel @ 147e658b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreaming * __cdecl ULevelStreaming::FindStreamingLevel(ULevel *param_1)

{
  UWorld *pUVar1;
  ULevel *pUVar2;
  code *pcVar3;
  bool bVar4;
  ULevelStreaming *pUVar5;
  FLevelAnnotation *pFVar6;
  FPlatformRWLock *SRWLock;
  FLevelAnnotation FVar7;
  FLevelAnnotation local_res8;
  FLevelAnnotation local_res10;
  
  if (param_1 != (ULevel *)0x0) {
    if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
      pUVar1 = (param_1->OwningWorld).field0_0x0.DebugPtr;
      if ((pUVar1 != (UWorld *)0x0) &&
         ((pUVar2 = (pUVar1->PersistentLevel).field0_0x0.DebugPtr, pUVar2 == (ULevel *)0x0 ||
          (pUVar2 != param_1)))) {
        AcquireSRWLockShared((PSRWLOCK)&LevelAnnotations.AnnotationCacheCritical);
        SRWLock = &LevelAnnotations.AnnotationCacheCritical;
        FVar7 = LevelAnnotations.AnnotationCacheValue;
        if (param_1 != (ULevel *)LevelAnnotations.AnnotationCacheKey) {
          ReleaseSRWLockShared((PSRWLOCK)&LevelAnnotations.AnnotationCacheCritical);
          AcquireSRWLockShared((PSRWLOCK)&LevelAnnotations.AnnotationMapCritical);
          pFVar6 = TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
                   ::Find((TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
                           *)&LevelAnnotations.AnnotationMap,(UObjectBase *)param_1);
          if (pFVar6 == (FLevelAnnotation *)0x0) {
            local_res10.LevelStreaming = (ULevelStreaming *)0x0;
            FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::
            SetAnnotationCacheKeyAndValue(&LevelAnnotations,(UObjectBase *)param_1,&local_res10);
            FVar7.LevelStreaming = (ULevelStreaming *)0x0;
          }
          else {
            local_res8.LevelStreaming = pFVar6->LevelStreaming;
            FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::
            SetAnnotationCacheKeyAndValue(&LevelAnnotations,(UObjectBase *)param_1,&local_res8);
            FVar7.LevelStreaming = pFVar6->LevelStreaming;
          }
          SRWLock = &LevelAnnotations.AnnotationMapCritical;
        }
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        if (FVar7.LevelStreaming == (ULevelStreaming *)0x0) {
          return (ULevelStreaming *)0x0;
        }
        if ((((FVar7.LevelStreaming)->LoadedLevel).field0_0x0.DebugPtr != param_1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LevelAnnotation.LevelStreaming->GetLoadedLevel() == Level",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                               ,0x54e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (ULevelStreaming *)(*pcVar3)();
          return pUVar5;
        }
        return FVar7.LevelStreaming;
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3914447087793601209>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x547,"IsValid(Level)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (ULevelStreaming *)(*pcVar3)();
        return pUVar5;
      }
    }
  }
  return (ULevelStreaming *)0x0;
}

// GetLODPackageName @ 147e67d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall ULevelStreaming::GetLODPackageName(ULevelStreaming *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FName in_RDX;
  
  uVar1 = this->LevelLODIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODPackageNames).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODPackageNames).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FName)(*pcVar2)();
        return FVar5;
      }
    }
    *(undefined8 *)in_RDX =
         *(undefined8 *)((this->LODPackageNames).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    return in_RDX;
  }
  (**(code **)(this->_padding_ + 0x2e0))();
  return in_RDX;
}

// GetLODPackageNameToLoad @ 147e67e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall ULevelStreaming::GetLODPackageNameToLoad(ULevelStreaming *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  uint uVar5;
  FName in_RDX;
  
  uVar1 = this->LevelLODIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODPackageNames).ArrayNum)) {
    if ((this->LODPackageNamesToLoad).ArrayNum <= (int)uVar1) {
      *(undefined8 *)in_RDX = 0;
      return in_RDX;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->LODPackageNamesToLoad).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
    }
    *(undefined8 *)in_RDX =
         *(undefined8 *)
          ((this->LODPackageNamesToLoad).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    return in_RDX;
  }
  *(FName *)in_RDX = this->PackageNameToLoad;
  return in_RDX;
}

// GetLevelScriptActor @ 147e68620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelScriptActor * __thiscall ULevelStreaming::GetLevelScriptActor(ULevelStreaming *this)

{
  ULevel *pUVar1;
  
  pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevel *)0x0) {
    return (pUVar1->LevelScriptActor).field0_0x0.DebugPtr;
  }
  return (ALevelScriptActor *)0x0;
}

// GetLevelStreamingState @ 147e687d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ELevelStreamingState __thiscall ULevelStreaming::GetLevelStreamingState(ULevelStreaming *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  ELevelStreamingState EVar3;
  
  SRWLock = &this->CurrentStateLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  EVar3 = this->CurrentState;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return EVar3;
}

// GetLevelStreamingStatus @ 147e68860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EStreamingStatus __thiscall ULevelStreaming::GetLevelStreamingStatus(ULevelStreaming *this)

{
  FPlatformRWLock *SRWLock;
  ELevelStreamingState EVar1;
  code *pcVar2;
  bool bVar3;
  EStreamingStatus EVar4;
  UWorld *pUVar5;
  FName *pFVar6;
  UPackage *pUVar7;
  undefined1 local_res8 [8];
  
  SRWLock = &this->CurrentStateLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  EVar1 = this->CurrentState;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (EVar1 == FailedToLoad) {
    return LEVEL_FailedToLoad;
  }
  if (EVar1 == MakingInvisible) {
    return LEVEL_MakingInvisible;
  }
  if ((this->LoadedLevel).field0_0x0.DebugPtr != (ULevel *)0x0) {
    if (EVar1 == LoadedVisible) {
      return LEVEL_Visible;
    }
    if (EVar1 != MakingVisible) {
      return LEVEL_Loaded;
    }
    pUVar5 = GetWorld(this);
    bVar3 = UWorld::IsLevelMakingVisible(pUVar5,(this->LoadedLevel).field0_0x0.DebugPtr);
    return bVar3 + LEVEL_Loaded;
  }
  if (EVar1 == Loading) {
    return LEVEL_Loading;
  }
  if ((Unloaded < EVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalState == ELevelStreamingState::Removed || LocalState == ELevelStreamingState::Unloaded"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x98d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if (GIsGarbageCollecting == false) {
    pFVar6 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this,local_res8);
    pUVar7 = FindObjectFast<UPackage>((UObject *)0x0,*pFVar6,None,RF_NoFlags);
    pUVar5 = (UWorld *)0x0;
    if (pUVar7 != (UPackage *)0x0) {
      pUVar5 = UWorld::FindWorldInPackage(pUVar7);
    }
    return (EStreamingStatus)(pUVar5 != (UWorld *)0x0);
  }
  return LEVEL_Unloaded;
}

// GetLevelStreamingStatusColor @ 147e68a30

FColor __cdecl ULevelStreaming::GetLevelStreamingStatusColor(EStreamingStatus param_1)

{
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  switch(in_EDX) {
  case 0:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Red.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 1:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Purple.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 2:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 3:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 4:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Blue.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 5:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Green.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 6:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 7:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColorList::Maroon.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  case 8:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColorList::Orange.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  default:
    ((FColor_u_0 *)CONCAT44(in_register_0000000c,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::White.field0_0x0;
    return (FColor)(FColor_u_0)param_1;
  }
}

// GetLevelStreamingStatusDisplayName @ 147e68b00

wchar_t * __cdecl ULevelStreaming::GetLevelStreamingStatusDisplayName(EStreamingStatus param_1)

{
  switch(param_1) {
  case LEVEL_Unloaded:
    return L"Unloaded";
  case LEVEL_UnloadedButStillAround:
    return L"Unloaded Still Around";
  case LEVEL_Loading:
    return L"Loading";
  case LEVEL_Loaded:
    return L"Loaded Not Visible";
  case LEVEL_MakingVisible:
    return L"Making Visible";
  case LEVEL_Visible:
    return L"Loaded Visible";
  case LEVEL_Preloading:
    return L"Preloading";
  case LEVEL_FailedToLoad:
    return L"Failed to Load";
  case LEVEL_MakingInvisible:
    return L"Making Invisible";
  default:
    return L"Unknown";
  }
}

// GetLoadedLevelPackageName @ 147e68c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall ULevelStreaming::GetLoadedLevelPackageName(ULevelStreaming *this)

{
  ULevel *this_00;
  UPackage *pUVar1;
  FName FVar2;
  FName in_RDX;
  
  if (this->bHasCachedLoadedLevelPackageName == '\0') {
    this_00 = (this->LoadedLevel).field0_0x0.DebugPtr;
    FVar2.ComparisonIndex.Value = 0;
    FVar2.Number = 0;
    if (this_00 != (ULevel *)0x0) {
      pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      FVar2 = (FName)pUVar1->_padding_;
    }
    this->bHasCachedLoadedLevelPackageName = '\x01';
    this->CachedLoadedLevelPackageName = FVar2;
  }
  *(FName *)in_RDX = this->CachedLoadedLevelPackageName;
  return in_RDX;
}

// GetPrivateStaticClass @ 147e6a270

UClass * __cdecl ULevelStreaming::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreaming",
               &Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton,
               StaticRegisterNativesULevelStreaming,0x1f0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelStreaming>,
               InternalVTableHelperCtorCaller<ULevelStreaming>,local_res8,UObject::StaticClass,
               UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton;
}

// GetStreamingVolumeBounds @ 147e6a6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
ULevelStreaming::GetStreamingVolumeBounds
          (ULevelStreaming *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  bool bVar13;
  uint uVar14;
  TBox<double> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar16 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  uVar18 = uVar16;
  if (0 < (this->EditorStreamingVolumes).ArrayNum) {
    do {
      iVar3 = (this->EditorStreamingVolumes).ArrayNum;
      uVar17 = (uint)uVar18;
      uVar14 = 0;
      if ((int)uVar17 < iVar3) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_68 = (longlong)(int)uVar17;
        local_60 = (longlong)iVar3;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TBox<double> *)(*pcVar5)();
          return pTVar15;
        }
      }
      lVar4 = *(longlong *)((this->EditorStreamingVolumes).AllocatorInstance.Data + uVar16);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x2d8), lVar4 != 0)) {
        pTVar15 = FKAggregateGeom::CalcAABB
                            ((FKAggregateGeom *)(*(longlong *)(lVar4 + 0x550) + 0x38),&local_58,
                             (TTransform<double> *)(lVar4 + 0x1f0));
        if (__return_storage_ptr__->IsValid == '\0') {
          if (pTVar15->IsValid != '\0') {
            dVar1 = (pTVar15->Min).field0_0x0._s_0.Y;
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar15->Min).field0_0x0._s_0.X;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
            dVar1 = (pTVar15->Max).field0_0x0._s_0.X;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar15->Min).field0_0x0._s_0.Z;
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
            dVar1 = (pTVar15->Max).field0_0x0._s_0.Z;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar15->Max).field0_0x0._s_0.Y;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
            uVar6 = pTVar15->Pad[0];
            uVar7 = pTVar15->Pad[1];
            uVar8 = pTVar15->Pad[2];
            uVar9 = pTVar15->Pad[3];
            uVar10 = pTVar15->Pad[4];
            uVar11 = pTVar15->Pad[5];
            uVar12 = pTVar15->Pad[6];
            __return_storage_ptr__->IsValid = pTVar15->IsValid;
            __return_storage_ptr__->Pad[0] = uVar6;
            __return_storage_ptr__->Pad[1] = uVar7;
            __return_storage_ptr__->Pad[2] = uVar8;
            __return_storage_ptr__->Pad[3] = uVar9;
            __return_storage_ptr__->Pad[4] = uVar10;
            __return_storage_ptr__->Pad[5] = uVar11;
            __return_storage_ptr__->Pad[6] = uVar12;
          }
        }
        else if (pTVar15->IsValid != '\0') {
          dVar1 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = *(double *)&(pTVar15->Min).field0_0x0;
          if (dVar2 <= dVar1) {
            uVar19 = SUB84(dVar2,0);
            uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar19);
          dVar1 = *(double *)((longlong)&(pTVar15->Min).field0_0x0 + 8);
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
          if (dVar2 <= dVar1) {
            uVar19 = SUB84(dVar2,0);
            uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar20,uVar19);
          dVar1 = *(double *)((longlong)&(pTVar15->Min).field0_0x0 + 0x10);
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
          if (dVar2 <= dVar1) {
            uVar19 = SUB84(dVar2,0);
            uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar20,uVar19);
          dVar1 = *(double *)&(pTVar15->Max).field0_0x0;
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
          if (dVar1 <= dVar2) {
            uVar19 = SUB84(dVar2,0);
            uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar19);
          dVar1 = *(double *)((longlong)&(pTVar15->Max).field0_0x0 + 8);
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
          if (dVar1 <= dVar2) {
            uVar19 = SUB84(dVar2,0);
            uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar20,uVar19);
          dVar1 = *(double *)((longlong)&(pTVar15->Max).field0_0x0 + 0x10);
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
          if (dVar1 <= dVar2) {
            uVar19 = SUB84(dVar2,0);
            uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar20,uVar19);
        }
      }
      uVar16 = uVar16 + 8;
      uVar18 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < (this->EditorStreamingVolumes).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetStreamingWorld @ 147e6a890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall ULevelStreaming::GetStreamingWorld(ULevelStreaming *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsTemplate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x1f6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return (UWorld *)0x0;
  }
  pUVar3 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  return pUVar3;
}

// GetWorld @ 147e6a9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall ULevelStreaming::GetWorld(ULevelStreaming *this)

{
  bool bVar1;
  UWorld *pUVar2;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar1) {
    return (UWorld *)0x0;
  }
  pUVar2 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  return pUVar2;
}

// GetWorldAssetPackageFName @ 147e6a9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall ULevelStreaming::GetWorldAssetPackageFName(ULevelStreaming *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FName in_RDX;
  
  if (this->bHasCachedWorldAssetPackageFName == '\0') {
    uVar1 = *(undefined4 *)&(this->WorldAsset).SoftObjectPtr.field_0x8;
    uVar2 = *(undefined4 *)&(this->WorldAsset).SoftObjectPtr.field_0xc;
    this->field_0xf8 = this->field_0xf8 | 2;
    (this->CachedWorldAssetPackageFName).ComparisonIndex = (FNameEntryId)uVar1;
    (this->CachedWorldAssetPackageFName).Number = uVar2;
  }
  *(FName *)in_RDX = this->CachedWorldAssetPackageFName;
  return in_RDX;
}

// GetWorldAssetPackageName @ 147e6aa30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
ULevelStreaming::GetWorldAssetPackageName(ULevelStreaming *this,FString *__return_storage_ptr__)

{
  FName *this_00;
  undefined1 local_res8 [32];
  
  this_00 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this,local_res8);
  ::FName::ToString(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsConcernedByNetVisibilityTransactionAck @ 147e6dd00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::IsConcernedByNetVisibilityTransactionAck(ULevelStreaming *this)

{
  ULevel *pUVar1;
  UNetDriver *pUVar2;
  bool bVar3;
  ENetMode EVar4;
  EConnectionState EVar5;
  UWorld *this_00;
  
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar3) {
    this_00 = (UWorld *)0x0;
  }
  else {
    this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
  if (((pUVar1 != (ULevel *)0x0) && (pUVar1->bClientOnlyVisible == '\0')) &&
     (this_00 != (UWorld *)0x0)) {
    bVar3 = UWorld::IsGameWorld(this_00);
    if (bVar3) {
      EVar4 = UWorld::InternalGetNetMode(this_00);
      if ((EVar4 == NM_Client) &&
         (pUVar2 = (this_00->NetDriver).field0_0x0.DebugPtr, pUVar2 != (UNetDriver *)0x0)) {
        EVar5 = UNetConnection::GetConnectionState((pUVar2->ServerConnection).field0_0x0.DebugPtr);
        if (EVar5 == USOCK_Open) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsDesiredLevelLoaded @ 147e6dde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::IsDesiredLevelLoaded(ULevelStreaming *this)

{
  ULevel *this_00;
  bool bVar1;
  FName FVar2;
  UPackage *pUVar3;
  FName FVar4;
  undefined1 local_res10 [8];
  
  if ((this->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0) {
    return false;
  }
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  FVar2 = FVar4;
  if (!bVar1) {
    FVar2 = (FName)CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  bVar1 = UWorld::IsGameWorld((UWorld *)FVar2);
  if (bVar1) {
    FVar2 = GetLODPackageName(this);
  }
  else {
    FVar2 = (FName)(**(code **)(this->_padding_ + 0x2e0))(this,local_res10);
  }
  FVar2 = *(FName *)FVar2;
  if (this->bHasCachedLoadedLevelPackageName == '\0') {
    this_00 = (this->LoadedLevel).field0_0x0.DebugPtr;
    if (this_00 != (ULevel *)0x0) {
      pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      FVar4 = (FName)pUVar3->_padding_;
    }
    this->bHasCachedLoadedLevelPackageName = '\x01';
    this->CachedLoadedLevelPackageName = FVar4;
  }
  return this->CachedLoadedLevelPackageName == FVar2;
}

// IsLevelVisible @ 147e6e0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::IsLevelVisible(ULevelStreaming *this)

{
  ULevel *pUVar1;
  
  pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
  if ((pUVar1 != (ULevel *)0x0) && (pUVar1->bIsVisible != '\0')) {
    return true;
  }
  return false;
}

// IsStreamingStatePending @ 147e6e310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::IsStreamingStatePending(ULevelStreaming *this)

{
  ULevel *pUVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  UWorld *this_00;
  FName FVar5;
  undefined1 local_res18 [8];
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((bVar2) ||
     (this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), this_00 == (UWorld *)0x0))
  {
    return false;
  }
  pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
  cVar3 = (**(code **)(this->_padding_ + 0x2e8))(this);
  if ((pUVar1 != (ULevel *)0x0) == (bool)cVar3) {
    pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
    if ((pUVar1 == (ULevel *)0x0) || (pUVar1->bIsVisible == '\0')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    cVar4 = (**(code **)(this->_padding_ + 0x2f0))(this);
    if ((cVar3 != cVar4) && (cVar3 = (**(code **)(this->_padding_ + 0x2e8))(this), cVar3 != '\0')) {
      return true;
    }
    bVar2 = UWorld::IsGameWorld(this_00);
    if (bVar2) {
      FVar5 = GetLODPackageName(this);
    }
    else {
      FVar5 = (FName)(**(code **)(this->_padding_ + 0x2e0))(this,local_res18);
    }
    if ((this->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0) {
      return false;
    }
    if (this->CachedLoadedLevelPackageName == *(FName *)FVar5) {
      return false;
    }
  }
  return true;
}

// IsValidStreamingLevel @ 147e6e460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall ULevelStreaming::IsValidStreamingLevel(ULevelStreaming *this)

{
  longlong lVar1;
  FName FVar2;
  bool bVar3;
  UWorld *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FName local_res10;
  FPackagePath local_18;
  
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  pUVar4 = (UWorld *)0x0;
  if (!bVar3) {
    pUVar4 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  if ((((pUVar4->WorldType).Value == '\x03') ||
      (pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this),
      ((uint)pUVar5->PackageFlagsPrivate >> 0x14 & 1) != 0)) ||
     (*(longlong *)&(this->WorldAsset).SoftObjectPtr.field_0x8 == 0)) {
    return true;
  }
  (**(code **)(this->_padding_ + 0x2e0))(this);
  pUVar6 = Z_Construct_UClass_UPackage_NoRegister();
  pUVar7 = StaticFindObjectFast(pUVar6,(UObject *)0x0,local_res10,None,RF_NoFlags,Borrowed);
  if (((pUVar7 != (UObject *)0x0) && (*(longlong *)&pUVar7[1].field_0x20 != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)&pUVar7[1].field_0x20 + 0x20), lVar1 != 0)) {
    bVar3 = FPackageName::DoesPackageExist
                      ((FPackagePath *)(lVar1 + 0x3a0),false,(FPackagePath *)0x0);
    return bVar3;
  }
  FVar2 = this->PackageNameToLoad;
  if ((FVar2 != (FName)0x0) && (local_res10 != FVar2)) {
    local_res10 = FVar2;
  }
  local_18.PackageName.ComparisonIndex.Value = 0;
  local_18.PackageName.Number = 0;
  local_18.HeaderExtension = Unspecified;
  bVar3 = FPackagePath::TryFromPackageName(local_res10,&local_18);
  if (bVar3) {
    bVar3 = FPackageName::DoesPackageExist(&local_18,false,(FPackagePath *)0x0);
    return bVar3;
  }
  return false;
}

// IsWaitingForNetVisibilityTransactionAck @ 147e6e5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevelStreaming::IsWaitingForNetVisibilityTransactionAck
          (ULevelStreaming *this,ENetLevelVisibilityRequest param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = (this->NetVisibilityState).PendingRequestType.bIsSet;
  if (bVar2 == false) {
    return false;
  }
  if (bVar2 != true) {
    return false;
  }
  if ((this->NetVisibilityState).PendingRequestType.TypedValue != param_1) {
    return false;
  }
  bVar2 = IsConcernedByNetVisibilityTransactionAck(this);
  if (bVar2) {
    if ((((this->NetVisibilityState).PendingRequestType.bIsSet != true) ||
        ((((this->NetVisibilityState).PendingRequestType.TypedValue != MakingInvisible ||
          (bVar2 = ShouldClientUseMakingInvisibleTransactionRequest(this), !bVar2)) &&
         (((this->NetVisibilityState).PendingRequestType.bIsSet != true ||
          (((this->NetVisibilityState).PendingRequestType.TypedValue != MakingVisible ||
           (bVar2 = ShouldClientUseMakingVisibleTransactionRequest(this), !bVar2)))))))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("((NetVisibilityState.PendingRequestType == ENetLevelVisibilityRequest::MakingInvisible) && ShouldClientUseMakingInvisibleTransactionRequest()) || ((NetVisibilityState.PendingRequestType == ENetLevelVisibilityRequest::MakingVisible) && ShouldClientUseMakingVisibleTransactionRequest())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                           ,0x310,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (((this->NetVisibilityState).ClientPendingRequestIndex ==
         (this->NetVisibilityState).ClientAckedRequestIndex) &&
       ((this->NetVisibilityState).bHasClientPendingRequest == false)) {
      return false;
    }
    return true;
  }
  return false;
}

// OnLevelAdded @ 147e71370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::OnLevelAdded(ULevelStreaming *this)

{
  ULevel *pUVar1;
  
  pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevel *)0x0) {
    SetCurrentState(this,(pUVar1->field_0x240 & 0x20 | 0x40) >> 4);
    return;
  }
  SetCurrentState(this,Unloaded);
  return;
}

// OnLevelRemoved @ 147e719a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::OnLevelRemoved(ULevelStreaming *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentState == Loading) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601982>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x242,"CurrentState != ELevelStreamingState::Loading");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->CurrentState == MakingInvisible) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601981>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x243,"CurrentState != ELevelStreamingState::MakingInvisible");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->CurrentState == MakingVisible) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601980>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x244,"CurrentState != ELevelStreamingState::MakingVisible");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetCurrentState(this,Removed);
  return;
}

// OnLoadingFinished @ 147e71a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::OnLoadingFinished(ULevelStreaming *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *this_00;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->AsyncRequestIDs).ArrayMax;
  (this->AsyncRequestIDs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AsyncRequestIDs).AllocatorInstance,0,piVar1);
  }
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (((!bVar4) &&
      (this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), this_00 != (UWorld *)0x0))
     && (bVar4 = UWorld::IsGameWorld(this_00), bVar4)) {
    pFVar5 = (this_00->StreamingLevels).AllocatorInstance.Data;
    pFVar2 = pFVar5 + (longlong)(this_00->StreamingLevels).ArrayNum * 8;
    if (pFVar5 != pFVar2) {
      while (*(ULevelStreaming **)pFVar5 != this) {
        pFVar5 = pFVar5 + 8;
        if (pFVar5 == pFVar2) {
          return;
        }
      }
      if (this_00->NumStreamingLevelsBeingLoaded == 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3383753137629172165>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\World.h"
                           ,0x11c5,"World->NumStreamingLevelsBeingLoaded > 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        this_00->NumStreamingLevelsBeingLoaded = this_00->NumStreamingLevelsBeingLoaded - 1;
      }
    }
  }
  return;
}

// OnLoadingStarted @ 147e71b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::OnLoadingStarted(ULevelStreaming *this)

{
  bool bVar1;
  UWorld *this_00;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
    if (this_00 != (UWorld *)0x0) {
      bVar1 = UWorld::IsGameWorld(this_00);
      if (bVar1) {
        this_00->NumStreamingLevelsBeingLoaded = this_00->NumStreamingLevelsBeingLoaded + 1;
      }
    }
  }
  return;
}

// PostLoad @ 147e72050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ULevelStreaming::PostLoad(ULevelStreaming *this)

{
  longlong lVar1;
  FName FVar2;
  bool bVar3;
  UWorld *pUVar4;
  UWorld *pUVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName *this_00;
  FPackagePath *pFVar9;
  FName local_res10;
  FString local_18;
  
  UObject::PostLoad((UObject *)this);
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  pUVar5 = (UWorld *)0x0;
  pUVar4 = pUVar5;
  if (!bVar3) {
    pUVar4 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  if ((pUVar4->WorldType).Value != '\x03') {
    UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  }
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    pUVar5 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  if ((pUVar5->WorldType).Value == '\x03') {
    return;
  }
  pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  if (((uint)pUVar6->PackageFlagsPrivate >> 0x14 & 1) != 0) {
    return;
  }
  if (*(longlong *)&(this->WorldAsset).SoftObjectPtr.field_0x8 == 0) {
    return;
  }
  (**(code **)(this->_padding_ + 0x2e0))(this);
  FVar2 = local_res10;
  pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
  pUVar8 = StaticFindObjectFast(pUVar7,(UObject *)0x0,FVar2,None,RF_NoFlags,Borrowed);
  if (((pUVar8 == (UObject *)0x0) || (*(longlong *)&pUVar8[1].field_0x20 == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)&pUVar8[1].field_0x20 + 0x20), lVar1 == 0)) {
    FVar2 = this->PackageNameToLoad;
    if ((FVar2 != (FName)0x0) && (local_res10 != FVar2)) {
      local_res10 = FVar2;
    }
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = local_18.Data.ArrayNum & 0xffffff00;
    bVar3 = FPackagePath::TryFromPackageName(local_res10,(FPackagePath *)&local_18);
    if (!bVar3) goto LAB_147e7217f;
    pFVar9 = (FPackagePath *)&local_18;
  }
  else {
    pFVar9 = (FPackagePath *)(lVar1 + 0x3a0);
  }
  bVar3 = FPackageName::DoesPackageExist(pFVar9,false,(FPackagePath *)0x0);
  if (bVar3) {
    return;
  }
LAB_147e7217f:
  this_00 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this,&local_res10);
  ::FName::ToString(this_00,&local_18);
  if (3 < (byte)LogLevelStreaming._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
  }
  if ((FName)local_18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PrepareLoadedLevel @ 147e72940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::PrepareLoadedLevel
          (ULevelStreaming *this,ULevel *param_1,UPackage *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWorld *this_00;
  ULevel *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FStreamingManagerCollection *pFVar8;
  FScriptContainerElement *pFVar9;
  FName local_res8;
  FString local_28;
  
  if ((param_1 == (ULevel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x5ab,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (param_1->OwningWorld).field0_0x0.DebugPtr;
  param_1->field_0x243 =
       (this->bGarbageCollectionClusteringEnabled ^ param_1->bGarbageCollectionClusteringEnabled) &
       1 ^ param_1->field_0x243;
  if (this_00 == (UWorld *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601101>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x5b3,"LevelOwningWorld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar3 = (this->LoadedLevel).field0_0x0.DebugPtr;
    if ((pUVar3 == (ULevel *)0x0) ||
       ((bVar5 = UWorld::IsLevelMakingVisible(this_00,pUVar3), !bVar5 &&
        (bVar5 = UWorld::IsLevelMakingInvisible(this_00,(this->LoadedLevel).field0_0x0.DebugPtr),
        !bVar5)))) {
      if (((this->PendingUnloadLevel).field0_0x0.DebugPtr != (ULevel *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingUnloadLevel == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                             ,0x5bd,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(this->_padding_ + 0x318))(this);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLevelLoaded,
                 (void *)0x0);
    }
    else if (5 < (byte)LogLevelStreaming._0_1_) {
      local_res8 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  ULevel::HandleLegacyMapBuildData(param_1);
  pFVar8 = IStreamingManager::Get();
  (**(code **)(pFVar8->_padding_ + 0x48))(pFVar8);
  cVar6 = (**(code **)(this->_padding_ + 0x2c0))(this);
  if (cVar6 != '\0') {
    param_1->bRequireFullVisibilityToRender = '\x01';
    iVar2 = (this->LODPackageNames).ArrayNum;
    if (0 < iVar2) {
      pFVar9 = (this->LODPackageNames).AllocatorInstance.Data;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
        if (*(longlong *)pFVar9 == param_2->_padding_) {
          bVar7 = 2;
          goto LAB_147e72b20;
        }
      }
      bVar7 = 0;
LAB_147e72b20:
      param_1->field_0x242 = param_1->field_0x242 & 0xfd | bVar7;
    }
  }
  param_1->field_0x242 =
       (this->bClientOnlyVisible * '\x02' | param_1->field_0x242) & 2U ^ param_1->field_0x242 & 0xfd
  ;
  if (this_00 == (UWorld *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601057>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x5df,"LevelOwningWorld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((this_00->WorldType).Value == '\x02') {
    UWorld::AddLevel(this_00,param_1);
  }
  return;
}

// RemoveLevelAnnotation @ 147e7a0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULevelStreaming::RemoveLevelAnnotation(ULevel *param_1)

{
  FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::RemoveAnnotation
            (&LevelAnnotations,(UObjectBase *)param_1);
  return;
}

// RenameForPIE @ 147e7a2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::RenameForPIE(ULevelStreaming *this,int param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  FString *pFVar9;
  FName *pFVar10;
  FSoftObjectPath *pFVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  undefined1 local_res8 [8];
  int local_res10;
  FName local_res20;
  FName local_158;
  FName *local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  undefined8 local_80;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58;
  
  local_res10 = param_1;
  bVar6 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  pUVar8 = (UWorld *)0x0;
  if (!bVar6) {
    pUVar8 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  if (*(longlong *)&(this->WorldAsset).SoftObjectPtr.field_0x8 != 0) {
    pFVar9 = UWorld::BuildPIEPackagePrefix(&local_e0,param_1);
    pFVar10 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this,local_108);
    ::FName::ToString(pFVar10,&local_148);
    pFVar9 = UWorld::StripPIEPrefixFromPackageName(&local_f0,&local_148,pFVar9);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_158,pwVar13);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    NetDriverRenameStreamingLevelPackageForPIE(pUVar8,local_158);
    if (this->PackageNameToLoad == (FName)0x0) {
      this->PackageNameToLoad = local_158;
    }
    pFVar10 = (FName *)(**(code **)(this->_padding_ + 0x2e0))(this,local_100);
    ::FName::ToString(pFVar10,&local_138);
    pFVar9 = UWorld::ConvertToPIEPackageName(&local_d0,&local_138,param_1);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res20,pwVar13);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    FSoftObjectPath::AddPIEPackageName(local_res20);
    if (param_2) {
      pcVar3 = *(code **)(this->_padding_ + 0x2d8);
      FSoftObjectPath::ToString
                ((FSoftObjectPath *)&(this->WorldAsset).SoftObjectPtr.field_0x8,&local_118);
      FPackageName::ObjectPathToObjectName(&local_b0,&local_118);
      ::FName::ToString(&local_res20,&local_c0);
      ::FString::PrintfImpl(&local_128,L"%s.%s");
      pFVar11 = FSoftObjectPath::FSoftObjectPath(&local_58,&local_128);
      local_80 = 0;
      FSoftObjectPath::FSoftObjectPath(&local_78,pFVar11);
      pFVar4 = (pFVar11->SubPathString).Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (*pcVar3)(this,&local_80);
      if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    else {
      SetWorldAssetByPackageName(this,local_res20);
    }
  }
  iVar2 = (this->LODPackageNames).ArrayNum;
  if (0 < iVar2) {
    piVar1 = &(this->LODPackageNamesToLoad).ArrayMax;
    (this->LODPackageNamesToLoad).ArrayNum = 0;
    if (*piVar1 < iVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,&(this->LODPackageNamesToLoad).AllocatorInstance,0,piVar1);
    }
    pFVar10 = (FName *)(this->LODPackageNames).AllocatorInstance.Data;
    iVar2 = (this->LODPackageNames).ArrayNum;
    local_150 = pFVar10 + iVar2;
    while( true ) {
      pFVar12 = local_150;
      if ((this->LODPackageNames).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (pFVar10 == pFVar12) break;
      pFVar12 = (FName *)(this->LODPackageNamesToLoad).AllocatorInstance.Data;
      if (((pFVar12 <= pFVar10) && (pFVar10 < pFVar12 + *piVar1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (this->LODPackageNamesToLoad).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->LODPackageNamesToLoad).AllocatorInstance,piVar1);
      }
      (this->LODPackageNamesToLoad).ArrayNum = iVar7 + 1;
      *(FName *)((this->LODPackageNamesToLoad).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           *pFVar10;
      FVar5 = *pFVar10;
      pFVar9 = ::FName::ToString(pFVar10,&local_90);
      pFVar9 = UWorld::ConvertToPIEPackageName(&local_a0,pFVar9,local_res10);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar12 = ::FName::FName(&local_f8,pwVar13);
      *pFVar10 = *pFVar12;
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      FSoftObjectPath::AddPIEPackageName(*pFVar10);
      NetDriverRenameStreamingLevelPackageForPIE(pUVar8,FVar5);
      pFVar10 = pFVar10 + 1;
    }
  }
  return;
}

// RequestLevel @ 147e7a6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
ULevelStreaming::RequestLevel
          (ULevelStreaming *this,UWorld *param_1,bool param_2,EReqLevelBlock param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  ULevel *pUVar4;
  TObjectPtr<ULevel> TVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EReqLevelBlock EVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  EPackageFlags EVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_2_::FStat_STAT_ULevelStreaming_RequestLevel>
  FVar21;
  UPackage *pUVar22;
  FString *pFVar23;
  uchar *puVar24;
  UClass *pUVar25;
  FName FVar26;
  size_t sVar27;
  ulonglong uVar28;
  UPackage *pUVar29;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_64_::FStat_STAT_OnLevelLoaded_Broadcast>
  FVar30;
  UWorld *this_00;
  FThreadSafeStaticStat<FStat_STAT_NamedMarker> FVar31;
  undefined8 *puVar32;
  ulong64 uVar33;
  FThreadStats *pFVar34;
  FThreadStatsPool *pFVar35;
  FName FVar36;
  ForAnyElementType FVar37;
  ulonglong uVar38;
  wchar_t *pwVar39;
  longlong lVar40;
  FName FVar41;
  EPrintStaleReferencesOptions EVar42;
  FNameEntryId FVar43;
  bool bVar44;
  undefined1 auStackY_788 [32];
  FName local_720;
  EPackageFlags local_718;
  int local_714;
  FName local_710;
  FName local_708;
  TPairInitializer<FName_const_&,TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&> local_700;
  EReqLevelBlock local_6f0;
  FString local_6e8;
  FString local_6d8;
  ForAnyElementType local_6c8;
  int local_6c0;
  int local_6bc;
  FColor_u_0 local_6b8;
  int local_6b4;
  FColor_u_0 local_6b0 [2];
  FName local_6a8;
  byte local_6a0;
  FName local_698;
  FName local_688;
  FName local_680;
  undefined1 local_670 [8];
  FDelegateAllocation local_668;
  LARGE_INTEGER local_658;
  LARGE_INTEGER local_650;
  FName local_648;
  FName local_640;
  FName local_638;
  FPackagePath local_630;
  UWorld *local_620;
  FName *local_618;
  FStatMessage local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FStatMessage local_5d0;
  ULevelStreaming *local_5c0;
  FName *local_5b8;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> **local_5b0;
  FScriptContainerElement *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  FScriptContainerElement *local_598;
  uint uStack_590;
  undefined4 uStack_58c;
  FDestructionSentinel local_588;
  FDelegateAllocation *local_570;
  FName local_568;
  FName local_560 [2];
  undefined1 local_550 [8];
  FName local_548;
  FName local_540;
  FName local_538;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  TStringView<wchar_t> local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  TArrayView<int_const_,int> local_478;
  FName local_468;
  FName local_460;
  FRequestGroupScope local_458;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_788;
  if (this->CurrentState == Loading) {
    return true;
  }
  if (this->CurrentState == FailedToLoad) {
    return false;
  }
  FVar36.ComparisonIndex.Value = 0;
  FVar36.Number = 0;
  FVar43.Value = 0;
  local_6f0 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ULevelStreaming_RequestLevel ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_2_::FStat_STAT_ULevelStreaming_RequestLevel>
         )0x0) {
      pFVar20 = ::FName::FName(local_560,"STAT_ULevelStreaming_RequestLevel");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevelStreaming_RequestLevel,*pFVar20,
                 L"STAT_ULevelStreaming_RequestLevel","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_ULevelStreaming_RequestLevel;
  if (StatPtr_STAT_ULevelStreaming_RequestLevel ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_2_::FStat_STAT_ULevelStreaming_RequestLevel>
       )0x0) {
    pFVar20 = ::FName::FName(&local_568,"STAT_ULevelStreaming_RequestLevel");
    FVar21 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_2_::FStat_STAT_ULevelStreaming_RequestLevel>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevelStreaming_RequestLevel,
                          *pFVar20,L"STAT_ULevelStreaming_RequestLevel","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar21;
  bVar10 = false;
  local_680.ComparisonIndex.Value = 0;
  local_680.Number = 0;
  bVar44 = false;
  bVar9 = false;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_147e7a8ad:
    bVar10 = bVar9;
    bVar9 = false;
    FVar41 = local_680;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6b8._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar44 = -1 < CpuChannel->Enabled;
      if (bVar44) {
        local_688.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_688.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_688,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                   ,0x61d);
      }
      bVar10 = true;
      bVar9 = true;
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e7a8ad;
    local_700.Value = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)FVar41;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar9 = true;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_6a8,(UObjectBaseUtility *)param_1);
  bVar12 = UWorld::IsGameWorld(param_1);
  if (bVar12) {
    local_720 = GetLODPackageName(this);
  }
  else {
    local_720 = (FName)(**(code **)(this->_padding_ + 0x2e0))(this,local_550);
  }
  local_720 = *(FName *)local_720;
  if (this->bHasCachedLoadedLevelPackageName == '\0') {
    pUVar4 = (this->LoadedLevel).field0_0x0.DebugPtr;
    FVar26 = FVar36;
    if (pUVar4 != (ULevel *)0x0) {
      pUVar22 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar4);
      FVar26 = (FName)pUVar22->_padding_;
    }
    this->bHasCachedLoadedLevelPackageName = '\x01';
    this->CachedLoadedLevelPackageName = FVar26;
  }
  pUVar4 = (this->LoadedLevel).field0_0x0.DebugPtr;
  if ((pUVar4 != (ULevel *)0x0) && (this->CachedLoadedLevelPackageName == local_720)) {
    bVar12 = true;
    goto LAB_147e7b94c;
  }
  if ((this->PendingUnloadLevel).field0_0x0.DebugPtr != (ULevel *)0x0) {
    bVar12 = false;
    goto LAB_147e7b94c;
  }
  if ((pUVar4 != (ULevel *)0x0) &&
     ((bVar13 = UWorld::IsLevelMakingVisible(param_1,pUVar4), bVar13 ||
      (bVar13 = UWorld::IsLevelMakingInvisible(param_1,(this->LoadedLevel).field0_0x0.DebugPtr),
      bVar13)))) {
    if (5 < (byte)LogLevelStreaming._0_1_) {
      ::FName::ToString(&this->CachedLoadedLevelPackageName,&local_520);
      ::FName::ToString(&local_720,&local_530);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data.AllocatorInstance.Data);
      }
      if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.Data.AllocatorInstance.Data);
      }
    }
    bVar12 = false;
    goto LAB_147e7b94c;
  }
  bVar13 = ValidateUniqueWorldAsset(this,param_1);
  if (!bVar13) {
    bVar12 = false;
    goto LAB_147e7b94c;
  }
  pFVar23 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_510,(UObject *)0x0);
  if ((pFVar23->Data).ArrayNum == 0) {
    pwVar39 = L"";
LAB_147e7ab80:
    local_458.FormatArgsSize = 0;
    local_458.FormatString = L"LevelStreaming - %s";
    sVar27 = wcslen(pwVar39);
    iVar19 = (int)sVar27 * 2 + 2;
    if (0xffff < iVar19) {
      iVar19 = 0xffff;
    }
    uVar38 = (longlong)iVar19 + 2;
    if (uVar38 < 0x401) {
      local_458.FormatArgsBuffer[0] = '\x01';
      local_458.FormatArgsBuffer[1] = 0xc2;
      if ((FScriptContainerElement *)pwVar39 == (FScriptContainerElement *)0x0) goto LAB_147e7aa82;
      sVar27 = wcslen(pwVar39);
      uVar18 = (int)sVar27 * 2 + 2;
      uVar28 = (ulonglong)uVar18;
      if (0xffff < (int)uVar18) {
        uVar28 = 0xffff;
      }
      local_708 = (FName)(uVar28 & 0xffff);
      memcpy(local_458.FormatArgsBuffer + 2,pwVar39,(size_t)local_708);
      if ((short)local_708.ComparisonIndex.Value == -1) {
        local_700.Key._0_4_ = 0x2e002e;
        local_700.Key._4_4_ = 0x2e;
        *(undefined8 *)
         ((longlong)&local_458 +
         ((longlong)local_708 - (ulonglong)(local_708.ComparisonIndex.Value.Value & 1)) + 4) =
             0x2e002e002e;
      }
      puVar24 = local_458.FormatArgsBuffer + (longlong)local_708 + 2;
      goto LAB_147e7aa91;
    }
    uVar38 = 0;
  }
  else {
    pwVar39 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
    local_458.FormatString = L"LevelStreaming - %s";
    local_458.FormatArgsSize = 0;
    if ((FScriptContainerElement *)pwVar39 != (FScriptContainerElement *)0x0) goto LAB_147e7ab80;
    uVar38 = 4;
LAB_147e7aa82:
    local_458.FormatArgsBuffer[0] = '\x01';
    local_458.FormatArgsBuffer[1] = 0xc2;
    local_458.FormatArgsBuffer[2] = '\0';
    local_458.FormatArgsBuffer[3] = '\0';
    puVar24 = local_458.FormatArgsBuffer + 4;
LAB_147e7aa91:
    if (((longlong)puVar24 - (longlong)local_458.FormatArgsBuffer != uVar38) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PayloadBufferPtr - Buffer == FormatArgsSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                            ,0x44,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
  }
  local_458.FormatArgsSize = (ushort)uVar38;
  FLoadTimeProfilerTrace::FRequestGroupScope::OutputBegin(&local_458);
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  FVar26 = local_720;
  local_718 = PKG_ContainsMap;
  pUVar25 = Z_Construct_UClass_UPackage_NoRegister();
  pUVar22 = (UPackage *)StaticFindObjectFast(pUVar25,(UObject *)0x0,FVar26,None,RF_NoFlags,Garbage);
  FVar26 = FVar36;
  if (pUVar22 == (UPackage *)0x0) {
LAB_147e7ac3b:
    bVar13 = UWorld::IsPlayInEditor(param_1);
    if (bVar13) {
      pUVar29 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
      local_718 = (uint)pUVar29->PackageFlagsPrivate & PKG_PlayInEditor | PKG_ContainsMap;
      UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
      pFVar23 = ::FName::ToString(&local_720,&local_500);
      UWorld::StripPIEPrefixFromPackageName(&local_6e8,pFVar23,&param_1->StreamingLevelsPrefix);
      if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data.AllocatorInstance.Data);
      }
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_6e8.Data.ArrayNum != 0) {
        FVar37.Data = local_6e8.Data.AllocatorInstance.Data;
      }
      pFVar20 = ::FName::FName(&local_548,(wchar_t *)FVar37.Data);
      pUVar29 = FindObjectFast<UPackage>((UObject *)0x0,*pFVar20,None,RF_NoFlags);
      if ((pUVar29 == (UPackage *)0x0) ||
         (((local_6f0 != AlwaysBlock && (pUVar29->bDirty == 0)) &&
          (cVar15 = (**(code **)(GEngine->_padding_ + 0x390))(), cVar15 != '\0')))) {
LAB_147e7afed:
        EVar16 = local_718;
        if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
          EVar16 = local_718;
        }
        goto LAB_147e7b010;
      }
      local_710 = (FName)UWorld::DuplicateWorldForPIE(&local_6e8,param_1);
      if (local_710 == (FName)0x0) {
        if ((param_1->WorldComposition).field0_0x0.DebugPtr == (UWorldComposition *)0x0) {
          if (param_2) {
            if (4 < (byte)LogLevelStreaming._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
            }
          }
          else if (2 < (byte)LogLevelStreaming._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
          }
        }
        goto LAB_147e7afed;
      }
      if (((this->PendingUnloadLevel).field0_0x0.DebugPtr != (ULevel *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PendingUnloadLevel == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                              ,0x668,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      (**(code **)(this->_padding_ + 0x318))(this,*(undefined8 *)((longlong)local_710 + 0x30));
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        if (StatPtr_STAT_OnLevelLoaded_Broadcast ==
            (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_64_::FStat_STAT_OnLevelLoaded_Broadcast>
             )0x0) {
          pFVar20 = ::FName::FName(&local_540,"STAT_OnLevelLoaded_Broadcast");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OnLevelLoaded_Broadcast,*pFVar20,
                     L"STAT_OnLevelLoaded_Broadcast","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                     true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS1);
        }
        else {
          _Init_thread_footer(&::_TSS1);
        }
      }
      FVar30 = StatPtr_STAT_OnLevelLoaded_Broadcast;
      if (StatPtr_STAT_OnLevelLoaded_Broadcast ==
          (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_64_::FStat_STAT_OnLevelLoaded_Broadcast>
           )0x0) {
        pFVar20 = ::FName::FName(&local_538,"STAT_OnLevelLoaded_Broadcast");
        FVar30 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_ULevelStreaming::RequestLevel(UWorld_*,bool,ULevelStreaming::EReqLevelBlock)_::_64_::FStat_STAT_OnLevelLoaded_Broadcast>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OnLevelLoaded_Broadcast,
                              *pFVar20,L"STAT_OnLevelLoaded_Broadcast","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar36 = *(FName *)FVar30;
      bVar12 = false;
      bVar13 = false;
      local_698.ComparisonIndex.Value = 0;
      local_698.Number = 0;
      if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_147e7ae99:
        bVar8 = false;
        FVar36 = local_698;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_6b0[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_6b0[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
          bVar12 = false;
          bVar13 = true;
          if (-1 < CpuChannel->Enabled) {
            local_708 = FVar36;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_708,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x66d);
            bVar12 = true;
            bVar13 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_147e7ae99;
        local_708 = FVar36;
        local_698 = FVar36;
        FThreadStats::AddMessage(FVar36,CycleScopeStart);
        bVar8 = true;
        FVar43.Value = local_698.ComparisonIndex.Value;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLevelLoaded,
                 (void *)0x0);
      if (bVar13) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (FVar36 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar34 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar34 == (FThreadStats *)0x0) {
          pFVar35 = FThreadStatsPool::Get();
          pFVar34 = FThreadStatsPool::GetFromPool(pFVar35);
        }
        if (pFVar34->bWaitForExplicitFlush < pFVar34->ScopeCount) {
          local_610.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
          local_610.NameAndInfo.Index.Value = FVar43.Value;
          QueryPerformanceCounter(&local_650);
          local_610.StatData.Pad[4] = '\0';
          local_610.StatData.Pad[5] = '\0';
          local_610.StatData.Pad[6] = '\0';
          local_610.StatData.Pad[7] = '\0';
          local_610.StatData.Pad[0] = local_650.s.LowPart._0_1_;
          local_610.StatData.Pad[1] = local_650.s.LowPart._1_1_;
          local_610.StatData.Pad[2] = local_650.s.LowPart._2_1_;
          local_610.StatData.Pad[3] = local_650.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar34,&local_610);
          piVar1 = &pFVar34->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar34,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar34,false,false);
          }
        }
      }
    }
    else {
      EVar16 = PKG_ContainsMap;
LAB_147e7b010:
      if ((pUVar22 != (UPackage *)0x0) && (local_718 = EVar16, FVar26 != (FName)0x0))
      goto LAB_147e7b026;
      if (!param_2) goto LAB_147e7b93e;
      if (bVar12) {
        uVar18 = this->LevelLODIndex;
        if (((int)uVar18 < 0) || ((this->LODPackageNames).ArrayNum <= (int)uVar18))
        goto LAB_147e7b282;
        if ((int)uVar18 < (this->LODPackageNamesToLoad).ArrayNum) {
          uVar17 = FVar43.Value;
          if ((int)uVar18 < (this->LODPackageNamesToLoad).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar14 = (*pcVar7)();
            return (bool)uVar14;
          }
          FVar36 = *(FName *)((this->LODPackageNamesToLoad).AllocatorInstance.Data +
                             (longlong)(int)uVar18 * 8);
        }
      }
      else {
LAB_147e7b282:
        FVar36 = this->PackageNameToLoad;
      }
      pFVar20 = &local_720;
      if (FVar36 != (FName)0x0) {
        pFVar20 = &local_638;
      }
      local_638 = FVar36;
      ::FName::ToString(pFVar20,&local_6d8);
      pFVar23 = FPackageName::ObjectPathToPackageName(&local_4d0,&local_6d8);
      if (&local_6d8 != pFVar23) {
        if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
        }
        local_6d8.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6d8.Data.ArrayNum = (pFVar23->Data).ArrayNum;
        local_6d8.Data.ArrayMax = (pFVar23->Data).ArrayMax;
        (pFVar23->Data).ArrayNum = 0;
        (pFVar23->Data).ArrayMax = 0;
      }
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
      local_598 = local_6d8.Data.AllocatorInstance.Data;
      uStack_590 = local_6d8.Data.ArrayNum - 1;
      if (local_6d8.Data.ArrayNum == 0) {
        uStack_590 = FVar43.Value;
      }
      local_4b8._12_4_ = uStack_58c;
      local_4b8.Size = uStack_590;
      local_4b8.DataPtr = (wchar_t *)local_6d8.Data.AllocatorInstance.Data;
      FPackagePath::FromPackageNameChecked(&local_630,&local_4b8);
      SetCurrentState(this,Loading);
      bVar12 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (((!bVar12) &&
          (this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_),
          this_00 != (UWorld *)0x0)) && (bVar12 = UWorld::IsGameWorld(this_00), bVar12)) {
        this_00->NumStreamingLevelsBeingLoaded = this_00->NumStreamingLevelsBeingLoaded + 1;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_700.Value = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)0x0;
      local_620 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_700.Value,(FObjectPtr)&local_620);
      local_5b8 = &local_720;
      local_5b0 = &local_700.Value;
      TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&>_>
                ((TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&ULevel::StreamedLevelsOwningWorld,&local_700,(bool *)&local_5b8);
      FVar36 = local_720;
      bVar3 = (param_1->WorldType).Value;
      uVar18 = ::GetTypeHash(local_720.ComparisonIndex.Value);
      uVar18 = uVar18 + FVar36.Number;
      if (UWorld::WorldTypePreLoadMap._8_4_ != UWorld::WorldTypePreLoadMap._52_4_) {
        lVar40 = 0x154c6e238;
        if (UWorld::WorldTypePreLoadMap._64_8_ != 0) {
          lVar40 = UWorld::WorldTypePreLoadMap._64_8_;
        }
        iVar19 = *(int *)(lVar40 + (ulonglong)(UWorld::WorldTypePreLoadMap._72_4_ - 1 & uVar18) * 4)
        ;
        while (iVar19 != -1) {
          lVar40 = UWorld::WorldTypePreLoadMap._0_8_ + (longlong)iVar19 * 0x14;
          if (*(FName *)(UWorld::WorldTypePreLoadMap._0_8_ + (longlong)iVar19 * 0x14) == local_720)
          {
            if (lVar40 != 0) goto LAB_147e7b4aa;
            break;
          }
          iVar19 = *(int *)(lVar40 + 0xc);
        }
      }
      local_618 = &local_720;
      TSet<TTuple<FName,enum_EWorldType::Type>,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                (&UWorld::WorldTypePreLoadMap,(uint)&local_6b4,
                 (TKeyInitializer<FName_const_&> *)(ulonglong)uVar18,(bool *)&local_618);
      lVar40 = UWorld::WorldTypePreLoadMap._0_8_ + (longlong)local_6b4 * 0x14;
LAB_147e7b4aa:
      *(uint *)(lVar40 + 8) = (uint)bVar3;
      pFVar23 = ::FName::ToString(&local_720,&local_4a8);
      ::FString::ConcatCF(&local_5e0,L"RequestLevel - ",pFVar23);
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_5e0.Data.ArrayNum != 0) {
        FVar37.Data = local_5e0.Data.AllocatorInstance.Data;
      }
      pFVar20 = ::FName::FName(&local_460,(wchar_t *)FVar37.Data);
      FVar36 = *pFVar20;
      FVar31 = StatPtr_STAT_NamedMarker;
      if (StatPtr_STAT_NamedMarker == (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)0x0) {
        pFVar20 = ::FName::FName(&local_468,"STAT_NamedMarker");
        FVar31 = (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NamedMarker,*pFVar20,
                            L"NamedMarker","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",
                            true,false,ST_FName,false,false,MCR_Invalid);
      }
      local_710 = *(FName *)FVar31;
      FThreadStats::AddMessage<FName>(local_710,SpecialMessageMarker,FVar36,false);
      if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
      }
      if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
      }
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint1733 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint1733,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                     ,0x6c5,L"RequestLevel - %s");
          __BookmarkPoint1733 = true;
        }
        pFVar23 = ::FName::ToString(&local_720,&local_498);
        if ((pFVar23->Data).ArrayNum == 0) {
          pwVar39 = L"";
        }
        else {
          pwVar39 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
        }
        uVar18 = CallstackTrace_GetCurrentId();
        FMiscTrace::OutputBookmark<wchar_t_const_*>(uVar18,&__BookmarkPoint1733,pwVar39);
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
      }
      FPackagePath::operator=(&this->LastAsyncLoadPackagePath,&local_630);
      pTVar2 = &this->AsyncRequestIDs;
      local_670 = (undefined1  [8])0x0;
      local_668.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_668.DelegateSize = 0;
      uVar18 = this->StreamingPriority + LevelStreamingCVars::GLevelStreamingPriorityBias;
      uVar17 = 0x7fffffff;
      if (-1 < (int)((uVar18 ^ LevelStreamingCVars::GLevelStreamingPriorityBias) &
                    (this->StreamingPriority ^ uVar18))) {
        uVar17 = uVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_670,
                 (FWriteAccessScope *)&local_588);
      local_570 = &local_668;
      puVar32 = UE::Core::Private::DelegateAllocate(0x28,&local_668);
      if (puVar32 != (undefined8 *)0x0) {
        *puVar32 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar33 = FDelegateHandle::GenerateNewID();
        puVar32[2] = uVar33;
        *puVar32 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VULevelStreaming____A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar32[3] = 0;
        local_5c0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar32 + 3),(FObjectPtr)&local_5c0);
        puVar32[4] = AsyncLevelLoadComplete;
      }
      if (local_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_588.Accessor,&local_588);
      }
      local_714 = LoadPackageAsync(&local_630,local_720,
                                   (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                                    *)local_670,local_718,-1,uVar17,(FLinkerInstancingContext *)0x0,
                                   0);
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_714) &&
          ((FScriptContainerElement *)&local_714 <
           pFVar6 + (longlong)(this->AsyncRequestIDs).ArrayMax * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      iVar19 = (this->AsyncRequestIDs).ArrayNum;
      piVar1 = &(this->AsyncRequestIDs).ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      EVar11 = local_6f0;
      (this->AsyncRequestIDs).ArrayNum = iVar19 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_714;
      if ((local_6f0 == AlwaysBlock) ||
         ((cVar15 = (**(code **)(this->_padding_ + 0x300))(this),
          local_6e8.Data.AllocatorInstance.Data = local_6d8.Data.AllocatorInstance.Data,
          cVar15 != '\0' && (EVar11 != NeverBlock)))) {
        bVar12 = (*IsAsyncLoading)();
        if ((bVar12) && (3 < (byte)LogStreaming._0_1_)) {
          ::FName::ToString(&local_720,&local_488);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
        }
        local_6c0 = (this->AsyncRequestIDs).ArrayNum;
        lVar40 = (longlong)local_6c0;
        pFVar6 = (this->AsyncRequestIDs).AllocatorInstance.Data;
        local_6c8.Data = (FScriptContainerElement *)0x0;
        if (local_6c0 == 0) {
          local_6bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_6c0,0,&local_6c8,local_6c0,&local_6bc);
          memcpy(local_6c8.Data,pFVar6,lVar40 << 2);
        }
        iVar19 = local_6c0;
        local_5a8 = local_6c8.Data;
        if ((local_6c0 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        local_478._12_4_ = uStack_59c;
        local_478.ArrayNum = iVar19;
        local_478.DataPtr = (int *)local_5a8;
        iStack_5a0 = iVar19;
        FlushAsyncLoading(&local_478);
        local_6e8.Data.AllocatorInstance.Data = local_6d8.Data.AllocatorInstance.Data;
        if (local_6c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c8.Data);
          local_6e8.Data.AllocatorInstance.Data = local_6d8.Data.AllocatorInstance.Data;
        }
      }
    }
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
LAB_147e7b93e:
    bVar12 = true;
  }
  else {
    FVar26 = (FName)UWorld::FindWorldInPackage(pUVar22);
    if (FVar26 == (FName)0x0) {
      FVar26 = (FName)UWorld::FollowWorldRedirectorInPackage(pUVar22,(UObjectRedirector **)0x0);
      if (FVar26 == (FName)0x0) {
        pUVar22 = (UPackage *)0x0;
      }
      else {
        pUVar22 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)FVar26);
        if (pUVar22 != (UPackage *)0x0) goto LAB_147e7b026;
      }
      goto LAB_147e7ac3b;
    }
LAB_147e7b026:
    if ((*(uint *)((longlong)FVar26 + 8) >> 0x1e & 1) == 0) {
      if (((TObjectPtr<ULevel>_u_0 *)((longlong)FVar26 + 0x30))->DebugPtr == (ULevel *)0x0) {
        if (1 < (byte)LogLevelStreaming._0_1_) {
          pUVar22 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)FVar26);
          local_648 = (FName)pUVar22->_padding_;
          ::FName::ToString(&local_648,&local_600);
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_World_exists_bu_1519792f0,
                     (FLogCategoryBase *)&LogLevelStreaming);
          if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_600.Data.AllocatorInstance.Data);
          }
          if (1 < (byte)LogLevelStreaming._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
          }
        }
        EVar42 = Ensure|Error;
        if (UObjectBaseUtility::bGarbageEliminationEnabled != false) {
          EVar42 = Fatal;
        }
        FReferenceChainSearch::FindAndPrintStaleReferencesToObject
                  (&local_4e0,(UObject *)FVar26,EVar42);
        local_4f0.Data.AllocatorInstance.Data = local_4e0.Data.AllocatorInstance.Data;
        goto LAB_147e7b12d;
      }
      bVar12 = ShouldReuseUnloadedButStillAroundLevels
                         (((TObjectPtr<ULevel>_u_0 *)((longlong)FVar26 + 0x30))->DebugPtr);
      if (!bVar12) {
        if (5 < (byte)LogLevelStreaming._0_1_) {
          local_640 = (FName)pUVar22->_padding_;
          ::FName::ToString(&local_640,&local_5f0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
          if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
          }
        }
        FLevelStreamingGCHelper::TrashPackage(pUVar22);
        bVar12 = false;
        goto LAB_147e7b940;
      }
      TVar5.field0_0x0 =
           (TObjectPtr<ULevel>_u_0)((TObjectPtr<ULevel>_u_0 *)((longlong)FVar26 + 0x30))->DebugPtr;
      if (TVar5.field0_0x0 != (TObjectPtr<ULevel>_u_0)(this->LoadedLevel).field0_0x0.DebugPtr) {
        ((TEnumAsByte<EWorldType::Type> *)((longlong)FVar26 + 0x18a))->Value =
             (param_1->WorldType).Value;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        *(UWorld **)((longlong)TVar5.field0_0x0 + 0xc0) = param_1;
        PrepareLoadedLevel(this,((TObjectPtr<ULevel>_u_0 *)((longlong)FVar26 + 0x30))->DebugPtr,
                           pUVar22,-1);
      }
      goto LAB_147e7b93e;
    }
    if (5 < (byte)LogLevelStreaming._0_1_) {
      ::FName::ToString(&local_720,&local_4f0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
LAB_147e7b12d:
      if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
      }
    }
    bVar12 = false;
  }
LAB_147e7b940:
  FLoadTimeProfilerTrace::FRequestGroupScope::~FRequestGroupScope(&local_458);
LAB_147e7b94c:
  if ((local_6a0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_6a0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_6a0 & 4) != 0) {
    FThreadStats::AddMessage(local_6a8,CycleScopeEnd);
  }
  local_6a0 = 0;
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar41 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar34 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar34 == (FThreadStats *)0x0) {
      pFVar35 = FThreadStatsPool::Get();
      pFVar34 = FThreadStatsPool::GetFromPool(pFVar35);
    }
    if (pFVar34->bWaitForExplicitFlush < pFVar34->ScopeCount) {
      local_5d0.NameAndInfo.Index = FVar41.ComparisonIndex.Value;
      local_5d0.NameAndInfo.Number = FVar41.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_658);
      local_5d0.StatData.Pad[4] = '\0';
      local_5d0.StatData.Pad[5] = '\0';
      local_5d0.StatData.Pad[6] = '\0';
      local_5d0.StatData.Pad[7] = '\0';
      local_5d0.StatData.Pad[0] = local_658.s.LowPart._0_1_;
      local_5d0.StatData.Pad[1] = local_658.s.LowPart._1_1_;
      local_5d0.StatData.Pad[2] = local_658.s.LowPart._2_1_;
      local_5d0.StatData.Pad[3] = local_658.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar34,&local_5d0);
      piVar1 = &pFVar34->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar34,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar34,false,false);
      }
    }
  }
  return bVar12;
}

// RequestVisibilityChange @ 147e7bf40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::RequestVisibilityChange(ULevelStreaming *this,bool param_1)

{
  return true;
}

// ResetPriorityOverride @ 147e7bfc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::ResetPriorityOverride(ULevelStreaming *this)

{
  int iVar1;
  bool bVar2;
  UWorld *this_00;
  
  if ((this->StreamingPriorityOverrideBackup).bIsSet != false) {
    iVar1 = (this->StreamingPriorityOverrideBackup).TypedValue;
    if (iVar1 != this->StreamingPriority) {
      this->StreamingPriority = iVar1;
      if ((this->CurrentState != Removed) && (this->CurrentState != FailedToLoad)) {
        bVar2 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
        if (!bVar2) {
          this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
          if (this_00 != (UWorld *)0x0) {
            UWorld::UpdateStreamingLevelPriority(this_00,this);
          }
        }
      }
    }
    if ((this->StreamingPriorityOverrideBackup).bIsSet != false) {
      (this->StreamingPriorityOverrideBackup).bIsSet = false;
    }
  }
  return;
}

// Serialize @ 147e7de00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::Serialize(ULevelStreaming *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    if (((uint)pUVar1->PackageFlagsPrivate >> 0x14 & 1) != 0) {
      UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    }
  }
  return;
}

// Serialize @ 147e7de50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::Serialize(ULevelStreaming *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  UPackage *pUVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if ((pFVar1->field_0x28 & 1) != 0) {
    pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    if (((uint)pUVar2->PackageFlagsPrivate >> 0x14 & 1) != 0) {
      UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    }
  }
  return;
}

// ServerUpdateLevelVisibility @ 147e7deb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::ServerUpdateLevelVisibility
          (ULevelStreaming *this,bool param_1,bool param_2,FNetLevelVisibilityTransactionId param_3)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_00;
  APlayerController *this_01;
  undefined1 local_48 [8];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_40;
  FUpdateLevelVisibilityLevelInfo local_30;
  
  bVar4 = IsConcernedByNetVisibilityTransactionAck(this);
  if (bVar4) {
    bVar4 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar4) {
      this_00 = (UWorld *)0x0;
    }
    else {
      this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
    }
    UWorld::GetPlayerControllerIterator(this_00,&local_40);
    for (; (iVar3 = local_40.Index, pTVar2 = local_40.Container, -1 < local_40.Index &&
           (local_40.Index < (local_40.Container)->ArrayNum)); local_40.Index = local_40.Index + 1)
    {
      uVar5 = 0;
      if (local_40.Index < (local_40.Container)->ArrayNum) {
        uVar5 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if (this_01 != (APlayerController *)0x0) {
        FUpdateLevelVisibilityLevelInfo::FUpdateLevelVisibilityLevelInfo
                  (&local_30,(this->LoadedLevel).field0_0x0.DebugPtr,param_1,param_2);
        local_30.PackageName =
             APlayerController::NetworkRemapPath
                       (this_01,(FName)local_48,local_30.PackageName.ComparisonIndex.Value._0_1_);
        local_30.PackageName = *(FName *)local_30.PackageName;
        local_30.VisibilityRequestId.Data = param_3.Data;
        APlayerController::ServerUpdateLevelVisibility(this_01,&local_30);
      }
    }
  }
  return;
}

// SetCurrentState @ 147e7e260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetCurrentState(ULevelStreaming *this,ELevelStreamingState param_1)

{
  FPlatformRWLock *SRWLock;
  ELevelStreamingState EVar1;
  ULevel *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UWorld *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_48;
  
  SRWLock = &this->CurrentStateLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  EVar1 = this->CurrentState;
  this->CurrentState = param_1;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (EVar1 != param_1) {
    (**(code **)(this->_padding_ + 0x328))(this,EVar1,param_1);
  }
  pUVar2 = (this->LoadedLevel).field0_0x0.DebugPtr;
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar5) {
    pUVar9 = (UWorld *)0x0;
  }
  else {
    pUVar9 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FLevelStreamingDelegates::OnLevelStreamingStateChanged,(FWriteAccessScope *)&local_48)
  ;
  bVar5 = false;
  FLevelStreamingDelegates::OnLevelStreamingStateChanged._28_4_ =
       FLevelStreamingDelegates::OnLevelStreamingStateChanged._28_4_ + 1;
  uVar10 = FLevelStreamingDelegates::OnLevelStreamingStateChanged._16_4_ - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (int)FLevelStreamingDelegates::OnLevelStreamingStateChanged._16_4_) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(int *)(lVar11 + 8 + FLevelStreamingDelegates::OnLevelStreamingStateChanged._8_8_) == 0
           ) || (plVar3 = *(longlong **)
                           (lVar11 + FLevelStreamingDelegates::OnLevelStreamingStateChanged._8_8_),
                plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,pUVar9,this,pUVar2,EVar1,param_1),
         cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  FLevelStreamingDelegates::OnLevelStreamingStateChanged._28_4_ =
       FLevelStreamingDelegates::OnLevelStreamingStateChanged._28_4_ + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelStreamingStateChanged,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// SetIsRequestingUnloadAndRemoval @ 147e7e4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetIsRequestingUnloadAndRemoval(ULevelStreaming *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if ((param_1 != this->bIsRequestingUnloadAndRemoval) &&
     (this->field_0xf8 = this->field_0xf8 & 0xfe | param_1, param_1)) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      if (this_00 != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,this);
        return;
      }
    }
  }
  return;
}

// SetLevelLODIndex @ 147e7e520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetLevelLODIndex(ULevelStreaming *this,int param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if (param_1 != this->LevelLODIndex) {
    this->LevelLODIndex = param_1;
    if (this->CurrentState == FailedToLoad) {
      SetCurrentState(this,Unloaded);
    }
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      if (this_00 != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,this);
        return;
      }
    }
  }
  return;
}

// SetLoadedLevel @ 147e7e5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetLoadedLevel(ULevelStreaming *this,ULevel *param_1)

{
  ULevel *pUVar1;
  FLevelCollection *this_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FLevelAnnotation *pFVar5;
  bool bVar6;
  UWorld *this_01;
  FLevelCollection *this_02;
  ELevelStreamingState EVar7;
  TPairInitializer<UObjectBase_const_*_const_&,ULevelStreaming::FLevelAnnotation_const_&> local_res8
  ;
  ULevelStreaming *local_res18;
  FLevelAnnotation **local_38;
  ULevelStreaming **local_30;
  
  if ((this->PendingUnloadLevel).field0_0x0.DebugPtr != (ULevel *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUnloadLevel == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x55a,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr, pUVar1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PendingUnloadLevel).field0_0x0 = (this->LoadedLevel).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->LoadedLevel).field0_0x0.DebugPtr = param_1;
  this->bHasCachedLoadedLevelPackageName = '\0';
  FLevelStreamingGCHelper::CancelUnloadRequest(param_1);
  bVar6 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar6) {
    this_01 = (UWorld *)0x0;
  }
  else {
    this_01 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  this_02 = UWorld::FindOrAddCollectionForLevelStreaming(this_01,this);
  FLevelCollection::RemoveLevel(this_02,(this->PendingUnloadLevel).field0_0x0.DebugPtr);
  pUVar1 = (this->PendingUnloadLevel).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevel *)0x0) {
    FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::RemoveAnnotation
              (&LevelAnnotations,(UObjectBase *)pUVar1);
  }
  pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
  if (pUVar1 == (ULevel *)0x0) {
    EVar7 = Unloaded;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    (pUVar1->OwningWorld).field0_0x0.DebugPtr = this_01;
    local_res8.Value = (FLevelAnnotation *)(this->LoadedLevel).field0_0x0.DebugPtr;
    if ((ULevel *)local_res8.Value == (ULevel *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res18 = this;
    AcquireSRWLockExclusive((PSRWLOCK)&LevelAnnotations.AnnotationMapCritical);
    uVar4 = LevelAnnotations.AnnotationMap._52_4_;
    uVar3 = LevelAnnotations.AnnotationMap._8_4_;
    local_38 = &local_res8.Value;
    local_30 = &local_res18;
    TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UObjectBase_const_*_const_&,ULevelStreaming::FLevelAnnotation_const_&>_>
              ((TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
                *)&LevelAnnotations.AnnotationMap,&local_res8,(bool *)&local_38);
    pFVar5 = local_res8.Value;
    AcquireSRWLockExclusive((PSRWLOCK)&LevelAnnotations.AnnotationCacheCritical);
    LevelAnnotations.AnnotationCacheValue.LevelStreaming = local_res18;
    LevelAnnotations.AnnotationCacheKey = (UObjectBase *)pFVar5;
    ReleaseSRWLockExclusive((PSRWLOCK)&LevelAnnotations.AnnotationCacheCritical);
    ReleaseSRWLockExclusive((PSRWLOCK)&LevelAnnotations.AnnotationMapCritical);
    if (uVar3 == uVar4) {
      FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::ProcessRegistration
                (&LevelAnnotations);
    }
    pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
    this_00 = pUVar1->CachedLevelCollection;
    if (this_00 != (FLevelCollection *)0x0) {
      FLevelCollection::RemoveLevel(this_00,pUVar1);
    }
    FLevelCollection::AddLevel(this_02,(this->LoadedLevel).field0_0x0.DebugPtr);
    EVar7 = (((this->LoadedLevel).field0_0x0.DebugPtr)->field_0x240 & 0x20 | 0x40) >> 4;
  }
  SetCurrentState(this,EVar7);
  UWorld::UpdateStreamingLevelShouldBeConsidered(this_01,this);
  (**(code **)(this->_padding_ + 800))(this,(this->LoadedLevel).field0_0x0.DebugPtr);
  pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevel *)0x0) {
    ULevel::OnLevelLoaded(pUVar1);
    return;
  }
  return;
}

// SetPriority @ 147e7ea30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetPriority(ULevelStreaming *this,int param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if (param_1 != this->StreamingPriority) {
    this->StreamingPriority = param_1;
    if ((this->CurrentState != Removed) && (this->CurrentState != FailedToLoad)) {
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
        if (this_00 != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelPriority(this_00,this);
          return;
        }
      }
    }
  }
  return;
}

// SetPriorityOverride @ 147e7ea90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetPriorityOverride(ULevelStreaming *this,int param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if ((this->StreamingPriorityOverrideBackup).bIsSet == false) {
    if ((TOptional<int> *)&this->StreamingPriority != &this->StreamingPriorityOverrideBackup) {
      (this->StreamingPriorityOverrideBackup).TypedValue = this->StreamingPriority;
      (this->StreamingPriorityOverrideBackup).bIsSet = true;
    }
  }
  if (param_1 != this->StreamingPriority) {
    this->StreamingPriority = param_1;
    if ((this->CurrentState != Removed) && (this->CurrentState != FailedToLoad)) {
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
        if (this_00 != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelPriority(this_00,this);
          return;
        }
      }
    }
  }
  return;
}

// SetShouldBeLoaded @ 147e7eb10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetShouldBeLoaded(ULevelStreaming *this,bool param_1)

{
  return;
}

// SetShouldBeVisible @ 147e7eb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetShouldBeVisible(ULevelStreaming *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if (param_1 != this->bShouldBeVisible) {
    this->field_0xf8 = this->field_0xf8 & 0xf7 | param_1 << 3;
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      if (this_00 != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,this);
        return;
      }
    }
  }
  return;
}

// SetWorldAsset @ 147e7ec40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::SetWorldAsset(ULevelStreaming *this,TSoftObjectPtr<UWorld> *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  UWorld *this_00;
  
  bVar2 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->WorldAsset).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  if (!bVar2) {
    *(undefined8 *)&(this->WorldAsset).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)&(this->WorldAsset).SoftObjectPtr.field_0x8,
               (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    this->bHasCachedWorldAssetPackageFName = '\0';
    this->bHasCachedLoadedLevelPackageName = '\0';
    if (this->CurrentState == FailedToLoad) {
      SetCurrentState(this,Unloaded);
    }
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar2) {
      this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      if (this_00 != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,this);
      }
    }
  }
  return;
}

// SetWorldAssetByPackageName @ 147e7ece0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreaming::SetWorldAssetByPackageName(ULevelStreaming *this,FName param_1)

{
  ForAnyElementType _Src;
  int iVar1;
  FString *pFVar2;
  size_t _Size;
  FName local_res10;
  undefined8 local_a8;
  FName local_a0;
  FName FStack_98;
  FUtf8String local_90;
  TStringView<wchar_t> local_78;
  FSoftObjectPath local_68;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = param_1;
  ::FName::ToString(&local_res10,&local_48);
  pFVar2 = FPackageName::GetLongPackageAssetName((FString *)&local_78,&local_48);
  UWorld::RemovePIEPrefix(&local_28,pFVar2,(int *)0x0);
  if (local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_a8 = 0;
  FStack_98.ComparisonIndex.Value = 0;
  FStack_98.Number = 0;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FUtf8String::Reset(&local_90,0);
  ::FString::PrintfImpl(&local_38,L"%s.%s");
  local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_68.AssetPath.PackageName.Number = 0;
  local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_68.AssetPath.AssetName.Number = 0;
  local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SubPathString.Data.ArrayNum = 0;
  local_68.SubPathString.Data.ArrayMax = 0;
  local_78.Size = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_78.Size = 0;
  }
  local_78.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_68,&local_78);
  _Src.Data = local_68.SubPathString.Data.AllocatorInstance.Data;
  iVar1 = local_68.SubPathString.Data.ArrayNum;
  _Size = (size_t)local_68.SubPathString.Data.ArrayNum;
  local_a8 = 0;
  local_90.Data.ArrayNum = local_68.SubPathString.Data.ArrayNum;
  local_a0 = local_68.AssetPath.PackageName;
  FStack_98 = local_68.AssetPath.AssetName;
  if ((local_68.SubPathString.Data.ArrayNum == 0) && (local_90.Data.ArrayMax == 0)) {
    local_90.Data._8_8_ = local_68.SubPathString.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_68.SubPathString.Data.ArrayNum,local_90.Data.ArrayMax,
               (ForAnyElementType *)&local_90,local_68.SubPathString.Data.ArrayNum,
               &local_90.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_90.Data.AllocatorInstance.Data,_Src.Data,_Size);
    }
  }
  if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,&local_a8);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// ShouldBeLoaded @ 147e7f3b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::ShouldBeLoaded(ULevelStreaming *this)

{
  return true;
}

// ShouldBeVisible @ 147e7f3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::ShouldBeVisible(ULevelStreaming *this)

{
  bool bVar1;
  char cVar2;
  UWorld *this_00;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar1) {
    this_00 = (UWorld *)0x0;
  }
  else {
    this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  bVar1 = UWorld::IsGameWorld(this_00);
  if ((bVar1) && (this->bShouldBeVisible != '\0')) {
    cVar2 = (**(code **)(this->_padding_ + 0x2e8))(this);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// ShouldClientUseMakingInvisibleTransactionRequest @ 147e7f420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevelStreaming::ShouldClientUseMakingInvisibleTransactionRequest(ULevelStreaming *this)

{
  bool bVar1;
  UWorld *this_00;
  
  if (this->bSkipClientUseMakingInvisibleTransactionRequest == '\0') {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      if (this_00 != (UWorld *)0x0) {
        bVar1 = UWorld::SupportsMakingInvisibleTransactionRequests(this_00);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// ShouldClientUseMakingVisibleTransactionRequest @ 147e7f470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevelStreaming::ShouldClientUseMakingVisibleTransactionRequest(ULevelStreaming *this)

{
  bool bVar1;
  UWorld *this_00;
  
  if (this->bSkipClientUseMakingVisibleTransactionRequest == '\0') {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      if (this_00 != (UWorld *)0x0) {
        bVar1 = UWorld::SupportsMakingVisibleTransactionRequests(this_00);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// ShouldReuseUnloadedButStillAroundLevels @ 147e7f4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl ULevelStreaming::ShouldReuseUnloadedButStillAroundLevels(ULevel *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UWorld *this;
  
  if (param_1 != (ULevel *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    this = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
    if (this != (UWorld *)0x0) {
      bVar1 = UWorld::IsGameWorld(this);
      if (bVar1) {
        return LevelStreamingCVars::bShouldReuseUnloadedButStillAroundLevels != false;
      }
    }
  }
  return true;
}

// ShouldServerUseMakingVisibleTransactionRequest @ 147e7f510

bool __cdecl ULevelStreaming::ShouldServerUseMakingVisibleTransactionRequest(void)

{
  return LevelStreamingCVars::bShouldServerUseMakingVisibleTransactionRequest;
}

// ShouldWaitForServerAckBeforeChangingVisibilityState @ 147e7f520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevelStreaming::ShouldWaitForServerAckBeforeChangingVisibilityState
          (ULevelStreaming *this,ENetLevelVisibilityRequest param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = IsWaitingForNetVisibilityTransactionAck(this,param_1);
  if (!bVar1) {
    return false;
  }
  if ((this->NetVisibilityState).bHasClientPendingRequest == false) {
    if ((this->NetVisibilityState).ClientPendingRequestIndex ==
        (this->NetVisibilityState).ClientAckedRequestIndex) {
      (this->NetVisibilityState).bHasClientPendingRequest = false;
      if ((this->NetVisibilityState).PendingRequestType.bIsSet == false) {
        return false;
      }
      (this->NetVisibilityState).PendingRequestType.bIsSet = false;
      return false;
    }
  }
  else {
    uVar3 = (this->NetVisibilityState).ClientPendingRequestIndex;
    (this->NetVisibilityState).ClientAckedRequestIndex = uVar3;
    uVar2 = uVar3 + 1 & 0x7fffffff;
    uVar3 = 1;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    (this->NetVisibilityState).ClientPendingRequestIndex = uVar3;
    if ((this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet != false) {
      (this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet = false;
    }
    (this->NetVisibilityState).bHasClientPendingRequest = false;
    ServerUpdateLevelVisibility
              (this,false,param_1 == MakingVisible,
               (FNetLevelVisibilityTransactionId)(uVar3 | 0x80000000));
  }
  return true;
}

// StaticRegisterNativesULevelStreaming @ 147e82370

void __cdecl ULevelStreaming::StaticRegisterNativesULevelStreaming(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_ULevelStreaming_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateNetVisibilityTransactionState @ 147e84010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::UpdateNetVisibilityTransactionState
          (ULevelStreaming *this,bool param_1,FNetLevelVisibilityTransactionId param_2)

{
  ULevel *pUVar1;
  bool bVar2;
  uint uVar3;
  UWorld *this_00;
  TOptional<ENetLevelVisibilityRequest> *pTVar4;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((((!bVar2) &&
       (this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_), this_00 != (UWorld *)0x0)
       ) && (bVar2 = UWorld::IsGameWorld(this_00), bVar2)) &&
     ((-1 < (int)param_2.Data ||
      (bVar2 = IsWaitingForNetVisibilityTransactionAck(this,param_1 ^ MakingInvisible), !bVar2)))) {
    (this->NetVisibilityState).bHasClientPendingRequest = false;
    if ((this->NetVisibilityState).PendingRequestType.bIsSet != false) {
      (this->NetVisibilityState).PendingRequestType.bIsSet = false;
    }
    uVar3 = 0;
    if (-1 < (int)param_2.Data) {
      uVar3 = param_2.Data & 0x7fffffff;
    }
    (this->NetVisibilityState).ServerRequestIndex = uVar3;
    if (-1 >= (int)param_2.Data) {
      if (param_1) {
        bVar2 = ShouldClientUseMakingVisibleTransactionRequest(this);
        if (!bVar2) {
          return;
        }
        pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
        if ((pUVar1 != (ULevel *)0x0) &&
           (bVar2 = UWorld::IsLevelMakingVisible(this_00,pUVar1), bVar2)) {
          return;
        }
        (this->NetVisibilityState).bHasClientPendingRequest = true;
        pTVar4 = &(this->NetVisibilityState).PendingRequestType;
        if ((TOptional<ENetLevelVisibilityRequest> *)local_14 == pTVar4) {
          return;
        }
        pTVar4->TypedValue = MakingVisible;
      }
      else {
        bVar2 = ShouldClientUseMakingInvisibleTransactionRequest(this);
        if (!bVar2) {
          return;
        }
        pUVar1 = (this->LoadedLevel).field0_0x0.DebugPtr;
        if ((pUVar1 != (ULevel *)0x0) &&
           (bVar2 = UWorld::IsLevelMakingInvisible(this_00,pUVar1), bVar2)) {
          return;
        }
        (this->NetVisibilityState).bHasClientPendingRequest = true;
        pTVar4 = &(this->NetVisibilityState).PendingRequestType;
        if ((TOptional<ENetLevelVisibilityRequest> *)&local_18 == pTVar4) {
          return;
        }
        pTVar4->TypedValue = MakingInvisible;
      }
      (this->NetVisibilityState).PendingRequestType.bIsSet = true;
    }
  }
  return;
}

// UpdateStreamingState @ 147e84400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreaming::UpdateStreamingState
          (ULevelStreaming *this,bool *param_1,bool *param_2,TOptional<UE::FTimeout_const_> *param_3
          )

{
  bool *pbVar1;
  undefined1 uVar2;
  ELevelStreamingTargetState EVar3;
  uint uVar4;
  FSceneInterface *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  UWorld *pUVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_void___cdecl_ULevelStreaming::UpdateStreamingState(bool_&,bool_&,TOptional<UE::FTimeout_const_>_const_&)_::_31_::FStat_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld>
  FVar15;
  UWorldPartition *this_00;
  UWorld *pUVar16;
  UPackage *pUVar17;
  ELevelStreamingState EVar18;
  uint uVar19;
  ULevel *pUVar20;
  FColor_u_0 FVar21;
  FName FVar22;
  FColor_u_0 local_res8;
  uint uStackX_c;
  bool *local_res10;
  bool *local_res18;
  UWorld *local_c8;
  FName local_c0;
  byte local_b8;
  FColor_u_0 local_b0;
  uint local_ac;
  FName local_a8;
  longlong local_98;
  longlong local_90;
  ULevelStreaming *local_88;
  UWorld *local_80;
  ULevelStreaming *local_78;
  ULevelStreaming *local_70;
  UWorld **local_68;
  bool *local_60;
  bool *local_58;
  FName local_50;
  FName local_48 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_c0,(UObjectBaseUtility *)this);
  bVar9 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar9) {
    pUVar13 = (UWorld *)0x0;
  }
  else {
    pUVar13 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
  }
  local_68 = &local_c8;
  *param_1 = false;
  *param_2 = false;
  local_c8 = pUVar13;
  local_70 = this;
  local_60 = param_2;
  local_58 = param_1;
  switch(this->CurrentState) {
  case Unloaded:
    EVar3 = this->TargetState;
    if (EVar3 == Unloaded) goto switchD_147e844ba_caseD_2;
    if (EVar3 == UnloadedAndRemoved) {
      UWorld::RemoveStreamingLevel(pUVar13,this);
      *param_2 = true;
      break;
    }
    if (EVar3 != LoadedNotVisible) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3914447087793601403>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x485,"false");
      if (bVar9) goto code_r0x000147e84c58;
      break;
    }
    goto LAB_147e84f05;
  case FailedToLoad:
    goto switchD_147e844ba_caseD_2;
  case Loading:
    break;
  case LoadedNotVisible:
    EVar3 = this->TargetState;
    if (EVar3 == Unloaded) {
      DiscardPendingUnloadLevel(this,pUVar13);
      (**(code **)(this->_padding_ + 0x318))(this,0);
      DiscardPendingUnloadLevel(this,local_c8);
      *param_1 = true;
      *param_2 = true;
    }
    else if (EVar3 == LoadedNotVisible) {
      if (((this->LoadedLevel).field0_0x0.DebugPtr != (ULevel *)0x0) &&
         (bVar9 = IsDesiredLevelLoaded(this), !bVar9)) {
        DiscardPendingUnloadLevel(this,local_c8);
      }
      `ULevelStreaming::UpdateStreamingState'::__l2::<lambda_1>::operator()(&local_70);
      if (this->CurrentState != Loading) {
        bVar9 = *param_1;
        bVar11 = (**(code **)(this->_padding_ + 0x2f0))(this);
        *param_1 = (bool)(bVar11 | bVar9);
      }
    }
    else if (EVar3 == LoadedVisible) {
      SetCurrentState(this,MakingVisible);
      (this->NetVisibilityState).bHasClientPendingRequest = false;
      if ((this->NetVisibilityState).PendingRequestType.bIsSet != false) {
        (this->NetVisibilityState).PendingRequestType.bIsSet = false;
      }
      BeginClientNetVisibilityRequest(this,true);
      *param_1 = true;
    }
    else {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3914447087793601356>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x4b4,"false");
      if (bVar9) goto code_r0x000147e84c58;
    }
    break;
  case MakingVisible:
    if ((this->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3914447087793601530>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x406,"LoadedLevel");
      if (bVar9) goto code_r0x000147e84c58;
      break;
    }
    if (this->TargetState == LoadedNotVisible) {
      SetCurrentState(this,LoadedNotVisible);
      *param_1 = true;
      *param_2 = true;
      bVar9 = ShouldClientUseMakingVisibleTransactionRequest(this);
      if (bVar9) {
        ServerUpdateLevelVisibility(this,false,false,(FNetLevelVisibilityTransactionId)0x0);
      }
      break;
    }
    uVar19 = (this->NetVisibilityState).ServerRequestIndex;
    bVar9 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((((bVar9) ||
         (pUVar13 = CastChecked<UWorld,UObject>((UObject *)this->_padding_),
         pUVar13 == (UWorld *)0x0)) || (bVar9 = UWorld::IsGameWorld(pUVar13), !bVar9)) ||
       (pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr, pUVar20 == (ULevel *)0x0)) {
LAB_147e8478c:
      cVar10 = (**(code **)(this->_padding_ + 0x2b8))(this,1);
      if (((this->bSkipClientUseMakingVisibleTransactionRequest == '\0') &&
          ((bVar9 = UObjectBaseUtility::IsTemplate
                              ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
           !bVar9 && (pUVar13 = CastChecked<UWorld,UObject>((UObject *)this->_padding_),
                     pUVar13 != (UWorld *)0x0)))) &&
         (bVar9 = UWorld::SupportsMakingVisibleTransactionRequests(pUVar13), bVar9)) {
        bVar9 = (this->NetVisibilityState).PendingRequestType.bIsSet;
        if ((((bVar9 != false) && (bVar9 == true)) &&
            ((this->NetVisibilityState).PendingRequestType.TypedValue == MakingVisible)) &&
           (bVar9 = IsConcernedByNetVisibilityTransactionAck(this), bVar9)) {
          if ((((this->NetVisibilityState).PendingRequestType.bIsSet != true) ||
              ((((this->NetVisibilityState).PendingRequestType.TypedValue != MakingInvisible ||
                (bVar9 = ShouldClientUseMakingInvisibleTransactionRequest(this), !bVar9)) &&
               (((this->NetVisibilityState).PendingRequestType.bIsSet != true ||
                (((this->NetVisibilityState).PendingRequestType.TypedValue != MakingVisible ||
                 (bVar9 = ShouldClientUseMakingVisibleTransactionRequest(this), !bVar9)))))))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("((NetVisibilityState.PendingRequestType == ENetLevelVisibilityRequest::MakingInvisible) && ShouldClientUseMakingInvisibleTransactionRequest()) || ((NetVisibilityState.PendingRequestType == ENetLevelVisibilityRequest::MakingVisible) && ShouldClientUseMakingVisibleTransactionRequest())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                                 ,0x310,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = (this->NetVisibilityState).ClientPendingRequestIndex;
          pbVar1 = &(this->NetVisibilityState).bHasClientPendingRequest;
          uVar4 = (this->NetVisibilityState).ClientAckedRequestIndex;
          if ((uVar12 != uVar4) || (*pbVar1 != false)) {
            if (*pbVar1 != false) {
              (this->NetVisibilityState).ClientAckedRequestIndex = uVar12;
              uVar12 = uVar12 + 1 & 0x7fffffff;
              uVar19 = 1;
              if (uVar12 != 0) {
                uVar19 = uVar12;
              }
              (this->NetVisibilityState).ClientPendingRequestIndex = uVar19;
              if ((this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet != false) {
                (this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet = false;
              }
              *pbVar1 = false;
              ServerUpdateLevelVisibility
                        (this,false,true,(FNetLevelVisibilityTransactionId)(uVar19 | 0x80000000));
              pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
              goto LAB_147e84a4a;
            }
            if (uVar12 != uVar4) goto LAB_147e8477f;
            *pbVar1 = false;
            if ((this->NetVisibilityState).PendingRequestType.bIsSet != false) {
              (this->NetVisibilityState).PendingRequestType.bIsSet = false;
            }
          }
        }
        if (((this->NetVisibilityState).ClientAckedRequestCanMakeVisible.bIsSet != false) &&
           ((this->NetVisibilityState).ClientAckedRequestCanMakeVisible.TypedValue == false)) {
          bVar9 = (this->NetVisibilityState).PendingRequestType.bIsSet;
          if ((bVar9 != false) &&
             (((bVar9 == true &&
               ((this->NetVisibilityState).PendingRequestType.TypedValue == MakingVisible)) &&
              (bVar9 = IsConcernedByNetVisibilityTransactionAck(this), bVar9)))) {
            if ((((this->NetVisibilityState).PendingRequestType.bIsSet != true) ||
                ((((this->NetVisibilityState).PendingRequestType.TypedValue != MakingInvisible ||
                  (bVar9 = ShouldClientUseMakingInvisibleTransactionRequest(this), !bVar9)) &&
                 (((this->NetVisibilityState).PendingRequestType.bIsSet != true ||
                  (((this->NetVisibilityState).PendingRequestType.TypedValue != MakingVisible ||
                   (bVar9 = ShouldClientUseMakingVisibleTransactionRequest(this), !bVar9)))))))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("((NetVisibilityState.PendingRequestType == ENetLevelVisibilityRequest::MakingInvisible) && ShouldClientUseMakingInvisibleTransactionRequest()) || ((NetVisibilityState.PendingRequestType == ENetLevelVisibilityRequest::MakingVisible) && ShouldClientUseMakingVisibleTransactionRequest())"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                                   ,0x310,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((((this->NetVisibilityState).ClientPendingRequestIndex !=
                  (this->NetVisibilityState).ClientAckedRequestIndex) ||
                ((this->NetVisibilityState).bHasClientPendingRequest != false)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!IsWaitingForNetVisibilityTransactionAck(ENetLevelVisibilityRequest::MakingVisible)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                                   ,0x393,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          BeginClientNetVisibilityRequest(this,true);
          pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
          goto LAB_147e84a4a;
        }
      }
      pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
      if (cVar10 == '\0') {
LAB_147e84a4a:
        bVar9 = UWorld::IsLevelMakingVisible(local_c8,pUVar20);
        if ((bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!World->IsLevelMakingVisible(LoadedLevel)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                               ,0x41d,L""), bVar9)) {
code_r0x000147e84c58:
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      }
    }
    else {
      bVar9 = UWorld::IsLevelMakingVisible(pUVar13,pUVar20);
      if (!bVar9) {
        this_00 = ULevel::GetWorldPartition((this->LoadedLevel).field0_0x0.DebugPtr);
        if ((this_00 == (UWorldPartition *)0x0) ||
           (bVar9 = UWorldPartition::CanInitialize(this_00,pUVar13), bVar9)) goto LAB_147e8478c;
LAB_147e8477f:
        pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
        goto LAB_147e84a4a;
      }
      pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
    }
    UWorld::AddToWorld(local_c8,pUVar20,&this->LevelTransform,(bool)(~this->bShouldBlockOnLoad & 1),
                       param_3,(FNetLevelVisibilityTransactionId)(uVar19 & 0x7fffffff),this);
    if (((this->LoadedLevel).field0_0x0.DebugPtr)->bIsVisible == '\0') break;
    DiscardPendingUnloadLevel(this,local_c8);
    if (local_c8->Scene != (FSceneInterface *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld ==
            (FThreadSafeStaticStat<_private:_void___cdecl_ULevelStreaming::UpdateStreamingState(bool_&,bool_&,TOptional<UE::FTimeout_const_>_const_&)_::_31_::FStat_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld>
             )0x0) {
          pFVar14 = ::FName::FName(&local_50,"STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld,*pFVar14,
                     L"STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld","STATGROUP_Quick",
                     "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS0);
        }
        else {
          _Init_thread_footer(&::_TSS0);
        }
      }
      FVar15 = StatPtr_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld;
      if (StatPtr_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld ==
          (FThreadSafeStaticStat<_private:_void___cdecl_ULevelStreaming::UpdateStreamingState(bool_&,bool_&,TOptional<UE::FTimeout_const_>_const_&)_::_31_::FStat_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld>
           )0x0) {
        pFVar14 = ::FName::FName(local_48,"STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld");
        FVar15 = (FThreadSafeStaticStat<_private:_void___cdecl_ULevelStreaming::UpdateStreamingState(bool_&,bool_&,TOptional<UE::FTimeout_const_>_const_&)_::_31_::FStat_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld,*pFVar14,
                              L"STAT_UpdateLevelStreamingInner_OnLevelAddedToWorld",
                              "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                              false,MCR_Invalid);
      }
      FVar22 = *(FName *)FVar15;
      bVar9 = false;
      bVar8 = false;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      FVar21.Bits = (uint)FVar22.ComparisonIndex.Value;
      uVar19 = FVar22.Number;
      if ((FVar21.Bits == 0) && (uVar19 == 0)) {
LAB_147e84a89:
        bVar7 = false;
        FVar22 = local_a8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res8.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
          bVar9 = false;
          bVar8 = true;
          if (-1 < CpuChannel->Enabled) {
            local_b0.Bits = FVar21.Bits;
            local_ac = uVar19;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_b0._s_0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x42a);
            bVar9 = true;
            bVar8 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_147e84a89;
        local_res8.Bits = FVar21.Bits;
        uStackX_c = uVar19;
        FThreadStats::AddMessage(FVar22,CycleScopeStart);
        bVar7 = true;
      }
      pUVar13 = local_c8;
      pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
      pFVar5 = local_c8->Scene;
      pcVar6 = *(code **)(pFVar5->_padding_ + 0x4a0);
      pUVar17 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar20);
      local_98 = pUVar17->_padding_;
      (*pcVar6)(pFVar5,&local_98,pUVar13,pUVar20->bIsLightingScenario);
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      param_2 = local_res18;
      if (bVar7) {
        FThreadStats::AddMessage(FVar22,CycleScopeEnd);
        param_2 = local_res18;
      }
    }
    EVar18 = LoadedVisible;
    goto LAB_147e84b03;
  case LoadedVisible:
    if (this->TargetState == LoadedNotVisible) {
      SetCurrentState(this,MakingInvisible);
      (this->NetVisibilityState).bHasClientPendingRequest = false;
      if ((this->NetVisibilityState).PendingRequestType.bIsSet != false) {
        (this->NetVisibilityState).PendingRequestType.bIsSet = false;
      }
      BeginClientNetVisibilityRequest(this,false);
      *param_1 = true;
      break;
    }
    if (this->TargetState != LoadedVisible) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3914447087793601335>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x4c9,"false");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      break;
    }
LAB_147e84f05:
    `ULevelStreaming::UpdateStreamingState'::__l2::<lambda_1>::operator()(&local_70);
    break;
  case MakingInvisible:
    pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
    if (pUVar20 == (ULevel *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3914447087793601480>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x438,"LoadedLevel");
      if (!bVar9) break;
      goto code_r0x000147e84c58;
    }
    local_80 = pUVar13;
    local_78 = this;
    bVar9 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (((((bVar9) ||
          (pUVar16 = CastChecked<UWorld,UObject>((UObject *)this->_padding_),
          pUVar16 == (UWorld *)0x0)) || (bVar9 = UWorld::IsGameWorld(pUVar16), !bVar9)) ||
        ((pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr, pUVar20 == (ULevel *)0x0 ||
         (bVar9 = UWorld::IsLevelMakingInvisible(pUVar16,pUVar20), !bVar9)))) &&
       (((((cVar10 = (**(code **)(this->_padding_ + 0x2b8))(this,0),
           this->bSkipClientUseMakingInvisibleTransactionRequest == '\0' &&
           ((bVar9 = UObjectBaseUtility::IsTemplate
                               ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject)
            , !bVar9 &&
            (pUVar16 = CastChecked<UWorld,UObject>((UObject *)this->_padding_),
            pUVar16 != (UWorld *)0x0)))) &&
          (bVar9 = UWorld::SupportsMakingInvisibleTransactionRequests(pUVar16), bVar9)) &&
         (bVar9 = ShouldWaitForServerAckBeforeChangingVisibilityState(this,MakingInvisible), bVar9))
        || (cVar10 == '\0')))) {
      bVar9 = UWorld::IsLevelMakingInvisible(local_c8,(this->LoadedLevel).field0_0x0.DebugPtr);
      if ((bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!World->IsLevelMakingInvisible(LoadedLevel)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                             ,0x447,L""), bVar9)) goto code_r0x000147e84c58;
      break;
    }
    uVar19 = (this->NetVisibilityState).ServerRequestIndex;
    cVar10 = (**(code **)(this->_padding_ + 0x2f8))(this);
    if ((cVar10 == '\0') && (bVar9 = UWorld::IsGameWorld(local_c8), bVar9)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    UWorld::RemoveFromWorld
              (local_c8,(this->LoadedLevel).field0_0x0.DebugPtr,bVar9,param_3,
               (FNetLevelVisibilityTransactionId)(uVar19 & 0x7fffffff),this);
    pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
    if ((pUVar20->bIsVisible == '\0') || (pUVar20->bIsVisible != '\0')) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((pUVar20->bRequireFullVisibilityToRender != 0) && (bVar9)) {
      `ULevelStreaming::UpdateStreamingState'::__l34::<lambda_2>::operator()(&local_80);
    }
    pUVar20 = (this->LoadedLevel).field0_0x0.DebugPtr;
    if ((pUVar20->bIsVisible != '\0') || (pUVar20->bIsBeingRemoved != '\0')) break;
    if ((pUVar20->bRequireFullVisibilityToRender == 0) &&
       (pFVar5 = pUVar13->Scene, pFVar5 != (FSceneInterface *)0x0)) {
      pcVar6 = *(code **)(pFVar5->_padding_ + 0x4a8);
      pUVar17 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar20);
      local_90 = pUVar17->_padding_;
      (*pcVar6)(pFVar5,&local_90,pUVar13,pUVar20->bIsLightingScenario);
    }
    EVar18 = LoadedNotVisible;
LAB_147e84b03:
    SetCurrentState(this,EVar18);
    *local_res10 = true;
switchD_147e844ba_caseD_2:
    *param_2 = true;
    break;
  default:
    local_88 = this;
    `ULevelStreaming::UpdateStreamingState'::__l4::<lambda_3>::operator()(&local_88);
  }
  if ((local_b8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_b8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_b8 & 4) != 0) {
    FThreadStats::AddMessage(local_c0,CycleScopeEnd);
  }
  return;
}

// UpdateTargetState @ 147e85950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::UpdateTargetState(ULevelStreaming *this)

{
  ELevelStreamingTargetState EVar1;
  ELevelStreamingState EVar2;
  ULevel *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ELevelStreamingTargetState EVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  UWorld *pUVar12;
  longlong lVar13;
  uint uVar14;
  FName local_68;
  byte local_60;
  FDestructionSentinel local_58;
  
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,(UObjectBaseUtility *)this);
  if ((this->CurrentState != FailedToLoad) && (this->CurrentState != Removed)) {
    bVar6 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar6) {
      CastChecked<UWorld,UObject>((UObject *)this->_padding_);
    }
    EVar7 = DetermineTargetState(this);
    EVar1 = this->TargetState;
    if (EVar1 != EVar7) {
      this->TargetState = EVar7;
      EVar2 = this->CurrentState;
      pUVar3 = (this->LoadedLevel).field0_0x0.DebugPtr;
      bVar6 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (bVar6) {
        pUVar12 = (UWorld *)0x0;
      }
      else {
        pUVar12 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged,
                 (FWriteAccessScope *)&local_58);
      bVar6 = false;
      FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._28_4_ =
           FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._28_4_ + 1;
      uVar14 = FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._16_4_ - 1;
      if (-1 < (int)uVar14) {
        lVar13 = (longlong)(int)uVar14 << 4;
        bVar6 = false;
        do {
          uVar11 = 0;
          if ((int)uVar14 < (int)FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._16_4_
             ) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          if (((*(int *)(lVar13 + 8 +
                        FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._8_8_) == 0) ||
              (plVar4 = *(longlong **)
                         (lVar13 + FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged.
                                   _8_8_), plVar4 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,pUVar12,this,pUVar3,EVar2,EVar1,EVar7),
             cVar10 == '\0')) {
            bVar6 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._28_4_ =
           FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._28_4_ + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged,false);
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
    }
    switch(this->CurrentState) {
    default:
      goto switchD_147e85b92_caseD_0;
    case Unloaded:
      bVar6 = EVar7 != Unloaded;
      goto LAB_147e85bbe;
    case Loading:
    case MakingVisible:
    case MakingInvisible:
      goto switchD_147e85b92_caseD_3;
    case LoadedNotVisible:
      bVar6 = EVar7 == LoadedNotVisible;
      break;
    case LoadedVisible:
      bVar6 = EVar7 == LoadedVisible;
    }
    if (!bVar6) {
switchD_147e85b92_caseD_3:
      bVar6 = true;
      goto LAB_147e85bbe;
    }
    bVar6 = IsDesiredLevelLoaded(this);
    if (!bVar6) {
      bVar6 = true;
      goto LAB_147e85bbe;
    }
  }
switchD_147e85b92_caseD_0:
  bVar6 = false;
LAB_147e85bbe:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  return bVar6;
}

// ValidateUniqueWorldAsset @ 147e86cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevelStreaming::ValidateUniqueWorldAsset(ULevelStreaming *this,UWorld *param_1)

{
  FScriptContainerElement *pFVar1;
  ELevelStreamingState EVar2;
  int iVar3;
  ULevelStreaming *this_00;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar5 = (param_1->StreamingLevels).AllocatorInstance.Data;
  iVar3 = (param_1->StreamingLevels).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->StreamingLevels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    this_00 = *(ULevelStreaming **)pFVar5;
    if (((((this_00 != (ULevelStreaming *)0x0) && (this_00 != this)) &&
         (EVar2 = this_00->CurrentState, EVar2 != FailedToLoad)) && (EVar2 != Removed)) &&
       (((EVar2 != Unloaded ||
         ((this_00->TargetState != Unloaded && (this_00->TargetState != UnloadedAndRemoved)))) &&
        (bVar4 = FSoftObjectPath::operator==
                           ((FSoftObjectPath *)&(this_00->WorldAsset).SoftObjectPtr.field_0x8,
                            (FSoftObjectPath *)&(this->WorldAsset).SoftObjectPtr.field_0x8), bVar4))
       )) {
      if (this_00->bIsRequestingUnloadAndRemoval == 0) {
        if (2 < (byte)LogLevelStreaming._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0);
          FSoftObjectPath::GetLongPackageName
                    ((FSoftObjectPath *)&(this->WorldAsset).SoftObjectPtr.field_0x8,&local_58);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        SetCurrentState(this,FailedToLoad);
      }
      return false;
    }
    pFVar5 = pFVar5 + 8;
  }
  return true;
}

// execCreateInstance @ 147e8a290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULevelStreaming::execCreateInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULevelStreaming *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateInstance((ULevelStreaming *)param_1,&local_18);
  *(ULevelStreaming **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetIsRequestingUnloadAndRemoval @ 147e8a340

void __cdecl
ULevelStreaming::execGetIsRequestingUnloadAndRemoval(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[6].field_0x8 & 1;
  return;
}

// execGetLevelScriptActor @ 147e8a370

void __cdecl
ULevelStreaming::execGetLevelScriptActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[10].field_0x20 != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[10].field_0x20 + 0xf0);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetLoadedLevel @ 147e8a3f0

void __cdecl ULevelStreaming::execGetLoadedLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[10].field_0x20;
  return;
}

// execGetWorldAssetPackageFName @ 147e8a470

void __cdecl
ULevelStreaming::execGetWorldAssetPackageFName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,local_res8);
  *(undefined8 *)param_3 = *puVar1;
  return;
}

// execIsLevelLoaded @ 147e8a7f0

void __cdecl ULevelStreaming::execIsLevelLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)&param_1[10].field_0x20 != 0;
  return;
}

// execIsLevelVisible @ 147e8a820

void __cdecl ULevelStreaming::execIsLevelVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[10].field_0x20 != 0) &&
     ((*(byte *)(*(longlong *)&param_1[10].field_0x20 + 0x240) & 0x20) != 0)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsStreamingStatePending @ 147e8a8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULevelStreaming::execIsStreamingStatePending(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  UWorld *this;
  FName FVar5;
  undefined1 local_res18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    this = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
    if (this != (UWorld *)0x0) {
      lVar1 = *(longlong *)&param_1[10].field_0x20;
      cVar3 = (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
      if ((lVar1 != 0) == (bool)cVar3) {
        if ((*(longlong *)&param_1[10].field_0x20 == 0) ||
           ((*(byte *)(*(longlong *)&param_1[10].field_0x20 + 0x240) & 0x20) == 0)) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        cVar4 = (**(code **)(*(longlong *)param_1 + 0x2f0))(param_1);
        if (cVar3 != cVar4) {
          cVar3 = (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
          if (cVar3 != '\0') goto LAB_147e8a99d;
        }
        bVar2 = UWorld::IsGameWorld(this);
        if (bVar2) {
          FVar5 = GetLODPackageName((ULevelStreaming *)param_1);
        }
        else {
          FVar5 = (FName)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,local_res18);
        }
        if ((*(longlong *)&param_1[10].field_0x20 == 0) ||
           (*(longlong *)&param_1[0xb].field_0x10 == *(longlong *)FVar5)) {
          *(undefined1 *)param_3 = 0;
          return;
        }
      }
LAB_147e8a99d:
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetIsRequestingUnloadAndRemoval @ 147e8b9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULevelStreaming::execSetIsRequestingUnloadAndRemoval(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bVar2 != (bool)(param_1[6].field_0x8 & 1)) &&
     (param_1[6].field_0x8 = param_1[6].field_0x8 & 0xfe | bVar2, bVar2)) {
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar2) {
      this = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
      if (this != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this,(ULevelStreaming *)param_1);
      }
    }
  }
  return;
}

// execSetLevelLODIndex @ 147e8bab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULevelStreaming::execSetLevelLODIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  FProperty *pFVar2;
  bool bVar3;
  UWorld *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != *(int *)&param_1[6].field_0x4) {
    cVar1 = param_1[7].field_0x8;
    *(int *)&param_1[6].field_0x4 = local_res8[0];
    if (cVar1 == '\x02') {
      SetCurrentState((ULevelStreaming *)param_1,Unloaded);
    }
    bVar3 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar3) {
      this = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
      if (this != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this,(ULevelStreaming *)param_1);
      }
    }
  }
  return;
}

// execSetPriority @ 147e8bb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ULevelStreaming::execSetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UWorld *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != *(int *)(param_1 + 2)) {
    *(int *)(param_1 + 2) = local_res8[0];
    if ((param_1[7].field_0x8 != '\0') && (param_1[7].field_0x8 != '\x02')) {
      bVar2 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar2) {
        this = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
        if (this != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelPriority(this,(ULevelStreaming *)param_1);
        }
      }
    }
  }
  return;
}

// execSetShouldBeLoaded @ 147e8bc50

void __cdecl ULevelStreaming::execSetShouldBeLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res8[0] != 0);
  return;
}

// execSetShouldBeVisible @ 147e8bcf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ULevelStreaming::execSetShouldBeVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UWorld *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8[0] != 0) != (bool)((byte)param_1[6].field_0x8 >> 3 & 1)) {
    param_1[6].field_0x8 = param_1[6].field_0x8 & 0xf7 | (local_res8[0] != 0) << 3;
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar2) {
      this = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
      if (this != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this,(ULevelStreaming *)param_1);
      }
    }
  }
  return;
}

// execShouldBeLoaded @ 147e8bf10

void __cdecl ULevelStreaming::execShouldBeLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// operator() @ 15051c290

bool __thiscall `ULevelStreaming::UpdateStreamingState'::__l4::<lambda_3>::operator()(void *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3914447087793601325>);
  if (bVar3) {
    cVar1 = *(char *)(*(longlong *)this + 0x121);
    if ((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
       ((cVar1 != '\x03' &&
        (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3914447087793601276>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                            ,0x504,"false"), bVar3)))) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    EnumToString(*(ELevelStreamingState *)(*(longlong *)this + 0x120));
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3914447087793601325>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15051c3a0;
    }
  }
  bVar3 = false;
LAB_15051c3a0:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

