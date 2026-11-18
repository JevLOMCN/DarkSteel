// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// FCameraActorAttachmentInfoReader @ 14d5fb6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraActorAttachmentInfoReader * __thiscall
UE::Cameras::FCameraActorAttachmentInfoReader::FCameraActorAttachmentInfoReader
          (FCameraActorAttachmentInfoReader *this,FCameraActorAttachmentInfo *param_1,
          FCameraContextDataID param_2)

{
  AActor *pAVar1;
  
  (this->DefaultAttachmentInfo).Weight = 1.0;
  (this->DefaultAttachmentInfo).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->DefaultAttachmentInfo).SocketName.ComparisonIndex = 0;
  (this->DefaultAttachmentInfo).SocketName.Number = 0;
  (this->DefaultAttachmentInfo).BoneName.ComparisonIndex = 0;
  (this->DefaultAttachmentInfo).BoneName.Number = 0;
  (this->CachedAttachmentInfo).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->CachedAttachmentInfo).SocketName.ComparisonIndex = 0;
  (this->CachedAttachmentInfo).SocketName.Number = 0;
  (this->CachedAttachmentInfo).BoneName.ComparisonIndex = 0;
  (this->CachedAttachmentInfo).BoneName.Number = 0;
  this->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (this->CachedBoneName).ComparisonIndex = 0;
  (this->CachedBoneName).Number = 0;
  (this->DataID).Value = 0xffffffff;
  (this->CachedAttachmentInfo).Weight = 1.0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar1 = (param_1->Actor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->DefaultAttachmentInfo).Actor.field0_0x0 = (param_1->Actor).field0_0x0;
  (this->DefaultAttachmentInfo).SocketName = param_1->SocketName;
  (this->DefaultAttachmentInfo).BoneName = param_1->BoneName;
  (this->DefaultAttachmentInfo).Weight = param_1->Weight;
  (this->DataID).Value = param_2.Value;
  CacheAttachmentInfo(this,&this->DefaultAttachmentInfo);
  return this;
}

// CacheAttachmentInfo @ 14d60d430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraActorAttachmentInfoReader::CacheAttachmentInfo
          (FCameraActorAttachmentInfoReader *this,FCameraActorAttachmentInfo *param_1)

{
  AActor *pAVar1;
  USkeletalMeshComponent *this_00;
  FName FVar2;
  undefined8 local_res8;
  
  pAVar1 = (param_1->Actor).field0_0x0.DebugPtr;
  if (((((this->CachedAttachmentInfo).Actor.field0_0x0.DebugPtr != pAVar1) ||
       ((this->CachedAttachmentInfo).SocketName != param_1->SocketName)) ||
      ((this->CachedAttachmentInfo).BoneName != param_1->BoneName)) ||
     (param_1->Weight != (this->CachedAttachmentInfo).Weight)) {
    if ((GC::GIsIncrementalReachabilityPending) && (pAVar1 != (AActor *)0x0)) {
      GC::MarkAsReachable((UObject *)pAVar1);
    }
    (this->CachedAttachmentInfo).Actor.field0_0x0 = (param_1->Actor).field0_0x0;
    this_00 = (USkeletalMeshComponent *)0x0;
    (this->CachedAttachmentInfo).SocketName = param_1->SocketName;
    (this->CachedAttachmentInfo).BoneName = param_1->BoneName;
    (this->CachedAttachmentInfo).Weight = param_1->Weight;
    this->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
    pAVar1 = (param_1->Actor).field0_0x0.DebugPtr;
    if ((pAVar1 != (AActor *)0x0) &&
       ((param_1->SocketName != (FName)0x0 || (param_1->BoneName != (FName)0x0)))) {
      this_00 = AActor::FindComponentByClass<USkeletalMeshComponent>(pAVar1);
      this->CachedSkeletalMeshComponent = this_00;
    }
    local_res8 = 0;
    (this->CachedBoneName).ComparisonIndex = 0;
    (this->CachedBoneName).Number = 0;
    if ((this_00 != (USkeletalMeshComponent *)0x0) &&
       (this->CachedBoneName = param_1->BoneName, param_1->SocketName != (FName)0x0)) {
      FVar2 = USkinnedMeshComponent::GetSocketBoneName
                        ((USkinnedMeshComponent *)this_00,(FName)&local_res8);
      this->CachedBoneName = *(FName *)FVar2;
    }
  }
  return;
}

// GetAttachmentTransform @ 14d618dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraActorAttachmentInfoReader::GetAttachmentTransform
          (FCameraActorAttachmentInfoReader *this,FCameraContextDataTable *param_1,
          TTransform<double> *param_2)

{
  FCameraContextDataID FVar1;
  USkeletalMeshComponent *pUVar2;
  AActor *pAVar3;
  USceneComponent *pUVar4;
  double dVar5;
  bool bVar6;
  UPackage *pUVar7;
  FCameraActorAttachmentInfoReader *pFVar8;
  TTransform<double> *pTVar9;
  undefined1 auStack_b8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FVar1.Value = (this->DataID).Value;
  if (FVar1.Value != 0xffffffff) {
    if (Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_GameplayCameras();
      Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorAttachmentInfo,(UObject *)pUVar7,
                           L"CameraActorAttachmentInfo");
    }
    pFVar8 = (FCameraActorAttachmentInfoReader *)
             FCameraContextDataTable::TryGetData
                       (param_1,FVar1,Struct,
                        (UObject *)
                        Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton,
                        true);
    if (pFVar8 == (FCameraActorAttachmentInfoReader *)0x0) {
      pFVar8 = this;
    }
    CacheAttachmentInfo(this,&pFVar8->DefaultAttachmentInfo);
  }
  pUVar2 = this->CachedSkeletalMeshComponent;
  if ((pUVar2 == (USkeletalMeshComponent *)0x0) || (this->CachedBoneName == (FName)0x0)) {
    pAVar3 = (this->CachedAttachmentInfo).Actor.field0_0x0.DebugPtr;
    bVar6 = false;
    if (pAVar3 != (AActor *)0x0) {
      pUVar4 = (pAVar3->RootComponent).field0_0x0.DebugPtr;
      if (pUVar4 == (USceneComponent *)0x0) {
        pTVar9 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar9 = &pUVar4->ComponentToWorld;
      }
      dVar5 = (pTVar9->Rotation).XY.m128d_f64[1];
      (param_2->Rotation).XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Translation).XY.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Translation).ZW.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Scale3D).XY.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Scale3D).ZW.m128d_f64[1];
      bVar6 = true;
      (param_2->Scale3D).ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar5;
    }
  }
  else {
    (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2,&local_88,this->CachedBoneName,0);
    bVar6 = true;
    (param_2->Rotation).XY.m128d_f64[0] = local_88;
    (param_2->Rotation).XY.m128d_f64[1] = dStack_80;
    (param_2->Rotation).ZW.m128d_f64[0] = local_78;
    (param_2->Rotation).ZW.m128d_f64[1] = dStack_70;
    (param_2->Translation).XY.m128d_f64[0] = local_68;
    (param_2->Translation).XY.m128d_f64[1] = dStack_60;
    (param_2->Translation).ZW.m128d_f64[0] = local_58;
    (param_2->Translation).ZW.m128d_f64[1] = dStack_50;
    (param_2->Scale3D).XY.m128d_f64[0] = local_48;
    (param_2->Scale3D).XY.m128d_f64[1] = dStack_40;
    (param_2->Scale3D).ZW.m128d_f64[0] = local_38;
    (param_2->Scale3D).ZW.m128d_f64[1] = dStack_30;
  }
  return bVar6;
}

// Initialize @ 14d61f940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraActorAttachmentInfoReader::Initialize
          (FCameraActorAttachmentInfoReader *this,FCameraActorAttachmentInfo *param_1,
          FCameraContextDataID param_2)

{
  AActor *pAVar1;
  
  if ((GC::GIsIncrementalReachabilityPending) &&
     (pAVar1 = (param_1->Actor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->DefaultAttachmentInfo).Actor.field0_0x0 = (param_1->Actor).field0_0x0;
  (this->DefaultAttachmentInfo).SocketName = param_1->SocketName;
  (this->DefaultAttachmentInfo).BoneName = param_1->BoneName;
  (this->DefaultAttachmentInfo).Weight = param_1->Weight;
  (this->DataID).Value = param_2.Value;
  CacheAttachmentInfo(this,&this->DefaultAttachmentInfo);
  return;
}

// RenderAttachmentInfo @ 14d631950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UE::Cameras::FCameraActorAttachmentInfoReader::RenderAttachmentInfo
          (FCameraActorAttachmentInfoReader *this,FString *__return_storage_ptr__)

{
  AActor *pAVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&this->CachedBoneName,&local_18);
  pAVar1 = (this->CachedAttachmentInfo).Actor.field0_0x0.DebugPtr;
  if (pAVar1 == (AActor *)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    local_res8 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Actor \'%s\' (Bone \'%s\')");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

