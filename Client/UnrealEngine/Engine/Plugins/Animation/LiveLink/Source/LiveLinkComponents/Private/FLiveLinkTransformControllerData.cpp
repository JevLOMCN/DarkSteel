// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 3

// StaticStruct @ 14d090860

UScriptStruct * __cdecl FLiveLinkTransformControllerData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformControllerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkComponents();
    Z_Registration_Info_UScriptStruct_FLiveLinkTransformControllerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData,
                         (UObject *)pUVar1,L"LiveLinkTransformControllerData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkTransformControllerData.OuterSingleton;
}

// ApplyTransform @ 14d092800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLiveLinkTransformControllerData::ApplyTransform
          (FLiveLinkTransformControllerData *this,USceneComponent *param_1,
          TTransform<double> *param_2,FLiveLinkTransformStaticData *param_3)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  TQuat<double> *pTVar5;
  TVector<double>_u_0 local_88;
  TQuat<double> local_68;
  TQuat<double> local_48;
  
  if (param_1 != (USceneComponent *)0x0) {
    if ((this->bUseLocation != false) && (param_3->bIsLocationSupported != false)) {
      if (this->bWorldTransform == false) {
        local_68.Z = (param_2->Translation).ZW.m128d_f64[0];
        local_88._s_0.Z = (param_1->RelativeRotation).Roll;
        local_88._s_0.X = (param_1->RelativeRotation).Pitch;
        local_88._s_0.Y = (param_1->RelativeRotation).Yaw;
        bVar1 = this->bTeleport;
        bVar2 = this->bSweep;
        dVar3 = (param_2->Translation).XY.m128d_f64[0];
        dVar4 = (param_2->Translation).XY.m128d_f64[1];
        pTVar5 = FRotationConversionCache::RotatorToQuat
                           (&param_1->RelativeRotationCache,&local_48,
                            (TRotator<double> *)&local_88._s_0);
        local_88._s_0.Z = local_68.Z;
        local_88._s_0.X = dVar3;
        local_88._s_0.Y = dVar4;
        USceneComponent::SetRelativeLocationAndRotation
                  (param_1,(TVector<double> *)&local_88._s_0,pTVar5,bVar2,(FHitResult *)0x0,
                   (bVar1 == false) + TeleportPhysics);
      }
      else {
        local_88._s_0.X = (param_2->Translation).XY.m128d_f64[0];
        local_88._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
        local_88._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
        USceneComponent::SetWorldLocation
                  (param_1,(TVector<double> *)&local_88._s_0,this->bSweep,(FHitResult *)0x0,
                   (this->bTeleport == false) + TeleportPhysics);
      }
    }
    if ((this->bUseRotation != false) && (param_3->bIsRotationSupported != false)) {
      local_68.X = (param_2->Rotation).XY.m128d_f64[0];
      local_68.Y = (param_2->Rotation).XY.m128d_f64[1];
      local_68.Z = (param_2->Rotation).ZW.m128d_f64[0];
      local_68.W = (param_2->Rotation).ZW.m128d_f64[1];
      if (this->bWorldTransform == false) {
        local_88._s_0.X = (param_1->RelativeLocation).field0_0x0._s_0.X;
        local_88._s_0.Y = (param_1->RelativeLocation).field0_0x0._s_0.Y;
        local_88._s_0.Z = (param_1->RelativeLocation).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeLocationAndRotation
                  (param_1,(TVector<double> *)&local_88._s_0,&local_68,this->bSweep,
                   (FHitResult *)0x0,(this->bTeleport == false) + TeleportPhysics);
      }
      else {
        USceneComponent::SetWorldRotation
                  (param_1,&local_68,this->bSweep,(FHitResult *)0x0,
                   (this->bTeleport == false) + TeleportPhysics);
      }
    }
    if ((this->bUseScale != false) && (param_3->bIsScaleSupported != false)) {
      local_88._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
      local_88._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
      local_88._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
      if (this->bWorldTransform == false) {
        USceneComponent::SetRelativeScale3D(param_1,(TVector<double> *)&local_88._s_0);
      }
      else {
        USceneComponent::SetWorldScale3D(param_1,(TVector<double> *)&local_88._s_0);
      }
    }
  }
  return;
}

// CheckForError @ 14d092a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLiveLinkTransformControllerData::CheckForError
          (FLiveLinkTransformControllerData *this,FName param_1,USceneComponent *param_2)

{
  FString *pFVar1;
  FStaticBasicLogRecord *pFVar2;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  if (param_2 == (USceneComponent *)0x0) {
    if ((byte)LogLiveLinkComponents._0_1_ < 3) {
      return;
    }
    pFVar1 = ::FName::ToString(local_res10,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pFVar2 = &::LOG_Static;
    }
    else {
      pFVar2 = &::LOG_Static;
    }
  }
  else {
    if ((param_2->Mobility).Value == '\x02') {
      return;
    }
    if ((byte)LogLiveLinkComponents._0_1_ < 3) {
      return;
    }
    ::FName::ToString(local_res10,&local_18);
    pFVar2 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogLiveLinkComponents);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

