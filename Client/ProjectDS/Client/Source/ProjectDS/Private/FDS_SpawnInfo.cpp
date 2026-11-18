// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// FDS_SpawnInfo @ 14baed5d0

FDS_SpawnInfo * __thiscall FDS_SpawnInfo::FDS_SpawnInfo(FDS_SpawnInfo *this,FDS_SpawnInfo *param_1)

{
  double dVar1;
  
  this->EntityID = param_1->EntityID;
  this->EntityType = param_1->EntityType;
  this->TableID = param_1->TableID;
  ::FString::FString(&this->BlueprintPath,&param_1->BlueprintPath);
  dVar1 = (param_1->SpawnTransform).Rotation.XY.m128d_f64[1];
  (this->SpawnTransform).Rotation.XY.m128d_f64[0] =
       (param_1->SpawnTransform).Rotation.XY.m128d_f64[0];
  (this->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1];
  (this->SpawnTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0];
  (this->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->SpawnTransform).Translation.XY.m128d_f64[1];
  (this->SpawnTransform).Translation.XY.m128d_f64[0] =
       (param_1->SpawnTransform).Translation.XY.m128d_f64[0];
  (this->SpawnTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->SpawnTransform).Translation.ZW.m128d_f64[1];
  (this->SpawnTransform).Translation.ZW.m128d_f64[0] =
       (param_1->SpawnTransform).Translation.ZW.m128d_f64[0];
  (this->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1];
  (this->SpawnTransform).Scale3D.XY.m128d_f64[0] = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1];
  (this->SpawnTransform).Scale3D.ZW.m128d_f64[0] = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->SpawnTableID = param_1->SpawnTableID;
  this->MountEntity = param_1->MountEntity;
  this->SeatIndex = param_1->SeatIndex;
  this->UnbeatableTime = param_1->UnbeatableTime;
  this->bGimmickOpened = param_1->bGimmickOpened;
  this->bGimmickEnabled = param_1->bGimmickEnabled;
  this->OwnerEntityID = param_1->OwnerEntityID;
  this->EvolveLevel = param_1->EvolveLevel;
  this->TotemCloneTargetEntityID = param_1->TotemCloneTargetEntityID;
  TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy>
            (&this->SpawnInitDelegate,&param_1->SpawnInitDelegate);
  return this;
}

// FDS_SpawnInfo @ 14baed6d0

FDS_SpawnInfo * __thiscall FDS_SpawnInfo::FDS_SpawnInfo(FDS_SpawnInfo *this)

{
  this->EntityID = 0;
  this->EntityType = None;
  this->TableID = 0;
  ::FString::FString(&this->BlueprintPath,"");
  *&(this->SpawnTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->SpawnTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->SpawnTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->SpawnTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->SpawnTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->SpawnTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&this->SpawnInitDelegate = 0;
  *(undefined8 *)&(this->SpawnInitDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SpawnInitDelegate).field_0x10 = 0;
  this->SpawnTableID = 0;
  this->MountEntity = 0;
  this->SeatIndex = 0;
  this->UnbeatableTime = 0.0;
  this->bGimmickOpened = false;
  this->bGimmickEnabled = false;
  this->OwnerEntityID = 0;
  this->EvolveLevel = 0;
  this->TotemCloneTargetEntityID = 0;
  return this;
}

