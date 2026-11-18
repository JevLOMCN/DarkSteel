// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticStruct @ 14b52b610

UScriptStruct * __cdecl FDS_NetSyncData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NetSyncData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NetSyncData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NetSyncData,(UObject *)pUVar1,
                         L"DS_NetSyncData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NetSyncData.OuterSingleton;
}

// FDS_NetSyncData @ 14b52eac0

FDS_NetSyncData * __thiscall FDS_NetSyncData::FDS_NetSyncData(FDS_NetSyncData *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->SkillContext).field0_0x0.DebugPtr = (UDS_SkillAbilityContext *)0x0;
  this->PrevTick = 0.0;
  this->Tick = 0.0;
  this->ServerRotateTime = 0.0;
  this->PrevTransportEntityID = 0;
  this->TransportEntityID = 0;
  this->PrevParentEntityID = 0;
  this->ParentEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ServerPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->ServerPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->ServerPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevServerPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevServerPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevServerPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NowPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NowPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->NowPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevRelativePosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevRelativePosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevRelativePosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NowRelativePosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NowRelativePosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->NowRelativePosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevDestinationPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevDestinationPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevDestinationPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DestinationPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DestinationPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->DestinationPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevTransformValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevTransformValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevTransformValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TransformValue).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->TransformValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->TransformValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevVelocityVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevVelocityVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevVelocityVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelocityVector).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->VelocityVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->VelocityVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->PrevEntityDirection).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->PrevEntityDirection).Yaw = dVar2;
  (this->PrevEntityDirection).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->EntityDirection).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->EntityDirection).Yaw = dVar2;
  (this->EntityDirection).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RelativeRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RelativeRotator).Yaw = dVar2;
  (this->RelativeRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->PrevInputValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->InputValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->PrevSkillData).TargetEntityID = 0;
  (this->PrevSkillData).SkillStartTime = 0.0;
  (this->PrevSkillData).SkillEndTime = 0.0;
  (this->PrevSkillData).SkillDuration = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->PrevSkillData).SkillRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->PrevSkillData).SkillRotation.Yaw = dVar2;
  (this->PrevSkillData).SkillRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PrevSkillData).IsSkillActive = false;
  (this->PrevSkillData).IsCollision = false;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.Z = (double)uVar1;
  (this->PrevSkillData).LocationLerpTime = 0.1;
  (this->PrevSkillData).SkillID = 0;
  (this->SkillData).TargetEntityID = 0;
  (this->SkillData).SkillStartTime = 0.0;
  (this->SkillData).SkillEndTime = 0.0;
  (this->SkillData).SkillDuration = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillData).SkillRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillData).SkillRotation.Yaw = dVar2;
  (this->SkillData).SkillRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillData).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillData).StartLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->SkillData).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SkillData).IsSkillActive = false;
  (this->SkillData).IsCollision = false;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.Z = (double)uVar1;
  (this->SkillData).LocationLerpTime = 0.1;
  (this->SkillData).SkillID = 0;
  (this->HeightMoveDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightMoveDataList).ArrayNum = 0;
  (this->HeightMoveDataList).ArrayMax = 0;
  this->ServerMoveSpeed = 0.0;
  this->ClientMoveSpeed = 0.0;
  this->PrevAccelerationValue = 0.0;
  this->AccelerationValue = 0.0;
  this->FallingDistance = 0.0;
  this->SendFallingHeight = 0.0;
  this->PatrolMoveSpeed = 0.0;
  this->PatrolStepNum = 0;
  (this->StateFlags).Packed = 0;
  this->IsServerRotation = false;
  return this;
}

// operator= @ 14b530ed0

FDS_NetSyncData * __thiscall
FDS_NetSyncData::operator=(FDS_NetSyncData *this,FDS_NetSyncData *param_1)

{
  int *piVar1;
  TArray<FDS_HeightMoveData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  UDS_SkillAbilityContext *pUVar5;
  FScriptContainerElement *_Src;
  double dVar6;
  float fVar7;
  bool bVar8;
  undefined6 uVar9;
  
  this->PrevTick = param_1->PrevTick;
  this->Tick = param_1->Tick;
  this->ServerRotateTime = param_1->ServerRotateTime;
  this->PrevTransportEntityID = param_1->PrevTransportEntityID;
  this->TransportEntityID = param_1->TransportEntityID;
  this->PrevParentEntityID = param_1->PrevParentEntityID;
  this->ParentEntityID = param_1->ParentEntityID;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->SkillContext).field0_0x0.DebugPtr, pUVar5 != (UDS_SkillAbilityContext *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SkillContext).field0_0x0 = (param_1->SkillContext).field0_0x0;
  dVar6 = (param_1->ServerPosition).field0_0x0._s_0.Y;
  (this->ServerPosition).field0_0x0._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
  (this->ServerPosition).field0_0x0._s_0.Y = dVar6;
  (this->ServerPosition).field0_0x0._s_0.Z = (param_1->ServerPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevServerPosition).field0_0x0._s_0.Y;
  (this->PrevServerPosition).field0_0x0._s_0.X = (param_1->PrevServerPosition).field0_0x0._s_0.X;
  (this->PrevServerPosition).field0_0x0._s_0.Y = dVar6;
  (this->PrevServerPosition).field0_0x0._s_0.Z = (param_1->PrevServerPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevPosition).field0_0x0._s_0.Y;
  (this->PrevPosition).field0_0x0._s_0.X = (param_1->PrevPosition).field0_0x0._s_0.X;
  (this->PrevPosition).field0_0x0._s_0.Y = dVar6;
  (this->PrevPosition).field0_0x0._s_0.Z = (param_1->PrevPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->NowPosition).field0_0x0._s_0.Y;
  (this->NowPosition).field0_0x0._s_0.X = (param_1->NowPosition).field0_0x0._s_0.X;
  (this->NowPosition).field0_0x0._s_0.Y = dVar6;
  (this->NowPosition).field0_0x0._s_0.Z = (param_1->NowPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevRelativePosition).field0_0x0._s_0.Y;
  (this->PrevRelativePosition).field0_0x0._s_0.X = (param_1->PrevRelativePosition).field0_0x0._s_0.X
  ;
  (this->PrevRelativePosition).field0_0x0._s_0.Y = dVar6;
  (this->PrevRelativePosition).field0_0x0._s_0.Z = (param_1->PrevRelativePosition).field0_0x0._s_0.Z
  ;
  dVar6 = (param_1->NowRelativePosition).field0_0x0._s_0.Y;
  (this->NowRelativePosition).field0_0x0._s_0.X = (param_1->NowRelativePosition).field0_0x0._s_0.X;
  (this->NowRelativePosition).field0_0x0._s_0.Y = dVar6;
  (this->NowRelativePosition).field0_0x0._s_0.Z = (param_1->NowRelativePosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevDestinationPosition).field0_0x0._s_0.Y;
  (this->PrevDestinationPosition).field0_0x0._s_0.X =
       (param_1->PrevDestinationPosition).field0_0x0._s_0.X;
  (this->PrevDestinationPosition).field0_0x0._s_0.Y = dVar6;
  (this->PrevDestinationPosition).field0_0x0._s_0.Z =
       (param_1->PrevDestinationPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->DestinationPosition).field0_0x0._s_0.Y;
  (this->DestinationPosition).field0_0x0._s_0.X = (param_1->DestinationPosition).field0_0x0._s_0.X;
  (this->DestinationPosition).field0_0x0._s_0.Y = dVar6;
  (this->DestinationPosition).field0_0x0._s_0.Z = (param_1->DestinationPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevTransformValue).field0_0x0._s_0.Y;
  (this->PrevTransformValue).field0_0x0._s_0.X = (param_1->PrevTransformValue).field0_0x0._s_0.X;
  (this->PrevTransformValue).field0_0x0._s_0.Y = dVar6;
  (this->PrevTransformValue).field0_0x0._s_0.Z = (param_1->PrevTransformValue).field0_0x0._s_0.Z;
  dVar6 = (param_1->TransformValue).field0_0x0._s_0.Y;
  (this->TransformValue).field0_0x0._s_0.X = (param_1->TransformValue).field0_0x0._s_0.X;
  (this->TransformValue).field0_0x0._s_0.Y = dVar6;
  (this->TransformValue).field0_0x0._s_0.Z = (param_1->TransformValue).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevVelocityVector).field0_0x0._s_0.Y;
  (this->PrevVelocityVector).field0_0x0._s_0.X = (param_1->PrevVelocityVector).field0_0x0._s_0.X;
  (this->PrevVelocityVector).field0_0x0._s_0.Y = dVar6;
  (this->PrevVelocityVector).field0_0x0._s_0.Z = (param_1->PrevVelocityVector).field0_0x0._s_0.Z;
  dVar6 = (param_1->VelocityVector).field0_0x0._s_0.Y;
  (this->VelocityVector).field0_0x0._s_0.X = (param_1->VelocityVector).field0_0x0._s_0.X;
  (this->VelocityVector).field0_0x0._s_0.Y = dVar6;
  (this->VelocityVector).field0_0x0._s_0.Z = (param_1->VelocityVector).field0_0x0._s_0.Z;
  dVar6 = (param_1->PrevEntityDirection).Yaw;
  (this->PrevEntityDirection).Pitch = (param_1->PrevEntityDirection).Pitch;
  (this->PrevEntityDirection).Yaw = dVar6;
  (this->PrevEntityDirection).Roll = (param_1->PrevEntityDirection).Roll;
  dVar6 = (param_1->EntityDirection).Yaw;
  (this->EntityDirection).Pitch = (param_1->EntityDirection).Pitch;
  (this->EntityDirection).Yaw = dVar6;
  (this->EntityDirection).Roll = (param_1->EntityDirection).Roll;
  dVar6 = (param_1->RelativeRotator).Yaw;
  (this->RelativeRotator).Pitch = (param_1->RelativeRotator).Pitch;
  (this->RelativeRotator).Yaw = dVar6;
  (this->RelativeRotator).Roll = (param_1->RelativeRotator).Roll;
  dVar6 = (param_1->PrevInputValue).field0_0x0._s_0.Y;
  (this->PrevInputValue).field0_0x0._s_0.X = (param_1->PrevInputValue).field0_0x0._s_0.X;
  (this->PrevInputValue).field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->InputValue).field0_0x0._s_0.Y;
  (this->InputValue).field0_0x0._s_0.X = (param_1->InputValue).field0_0x0._s_0.X;
  (this->InputValue).field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->PrevSkillData).SkillStartTime;
  (this->PrevSkillData).TargetEntityID = (param_1->PrevSkillData).TargetEntityID;
  (this->PrevSkillData).SkillStartTime = dVar6;
  dVar6 = (param_1->PrevSkillData).SkillDuration;
  (this->PrevSkillData).SkillEndTime = (param_1->PrevSkillData).SkillEndTime;
  (this->PrevSkillData).SkillDuration = dVar6;
  dVar6 = (param_1->PrevSkillData).SkillRotation.Yaw;
  (this->PrevSkillData).SkillRotation.Pitch = (param_1->PrevSkillData).SkillRotation.Pitch;
  (this->PrevSkillData).SkillRotation.Yaw = dVar6;
  dVar6 = (param_1->PrevSkillData).StartLocation.field0_0x0._s_0.X;
  (this->PrevSkillData).SkillRotation.Roll = (param_1->PrevSkillData).SkillRotation.Roll;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_1->PrevSkillData).StartLocation.field0_0x0._s_0.Z;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.Y =
       (param_1->PrevSkillData).StartLocation.field0_0x0._s_0.Y;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.Z = dVar6;
  dVar6 = (param_1->PrevSkillData).DestinationLocation.field0_0x0._s_0.Y;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.X =
       (param_1->PrevSkillData).DestinationLocation.field0_0x0._s_0.X;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.Y = dVar6;
  fVar7 = (param_1->PrevSkillData).LocationLerpTime;
  iVar3 = (param_1->PrevSkillData).SkillID;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.Z =
       (param_1->PrevSkillData).DestinationLocation.field0_0x0._s_0.Z;
  (this->PrevSkillData).LocationLerpTime = fVar7;
  (this->PrevSkillData).SkillID = iVar3;
  bVar8 = (param_1->PrevSkillData).IsCollision;
  uVar9 = *(undefined6 *)&(param_1->PrevSkillData).field_0x72;
  (this->PrevSkillData).IsSkillActive = (param_1->PrevSkillData).IsSkillActive;
  (this->PrevSkillData).IsCollision = bVar8;
  *(undefined6 *)&(this->PrevSkillData).field_0x72 = uVar9;
  dVar6 = (param_1->SkillData).SkillStartTime;
  pTVar2 = &this->HeightMoveDataList;
  (this->SkillData).TargetEntityID = (param_1->SkillData).TargetEntityID;
  (this->SkillData).SkillStartTime = dVar6;
  dVar6 = (param_1->SkillData).SkillDuration;
  (this->SkillData).SkillEndTime = (param_1->SkillData).SkillEndTime;
  (this->SkillData).SkillDuration = dVar6;
  dVar6 = (param_1->SkillData).SkillRotation.Yaw;
  (this->SkillData).SkillRotation.Pitch = (param_1->SkillData).SkillRotation.Pitch;
  (this->SkillData).SkillRotation.Yaw = dVar6;
  dVar6 = (param_1->SkillData).StartLocation.field0_0x0._s_0.X;
  (this->SkillData).SkillRotation.Roll = (param_1->SkillData).SkillRotation.Roll;
  (this->SkillData).StartLocation.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_1->SkillData).StartLocation.field0_0x0._s_0.Z;
  (this->SkillData).StartLocation.field0_0x0._s_0.Y =
       (param_1->SkillData).StartLocation.field0_0x0._s_0.Y;
  (this->SkillData).StartLocation.field0_0x0._s_0.Z = dVar6;
  dVar6 = (param_1->SkillData).DestinationLocation.field0_0x0._s_0.Y;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.X =
       (param_1->SkillData).DestinationLocation.field0_0x0._s_0.X;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.Y = dVar6;
  fVar7 = (param_1->SkillData).LocationLerpTime;
  iVar3 = (param_1->SkillData).SkillID;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.Z =
       (param_1->SkillData).DestinationLocation.field0_0x0._s_0.Z;
  (this->SkillData).LocationLerpTime = fVar7;
  (this->SkillData).SkillID = iVar3;
  bVar8 = (param_1->SkillData).IsCollision;
  uVar9 = *(undefined6 *)&(param_1->SkillData).field_0x72;
  (this->SkillData).IsSkillActive = (param_1->SkillData).IsSkillActive;
  (this->SkillData).IsCollision = bVar8;
  *(undefined6 *)&(this->SkillData).field_0x72 = uVar9;
  if (pTVar2 != &param_1->HeightMoveDataList) {
    iVar3 = (this->HeightMoveDataList).ArrayMax;
    piVar1 = &(this->HeightMoveDataList).ArrayMax;
    _Src = (param_1->HeightMoveDataList).AllocatorInstance.Data;
    iVar4 = (param_1->HeightMoveDataList).ArrayNum;
    (this->HeightMoveDataList).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x30);
      }
    }
  }
  this->ServerMoveSpeed = param_1->ServerMoveSpeed;
  this->ClientMoveSpeed = param_1->ClientMoveSpeed;
  this->PrevAccelerationValue = param_1->PrevAccelerationValue;
  this->AccelerationValue = param_1->AccelerationValue;
  this->FallingDistance = param_1->FallingDistance;
  this->SendFallingHeight = param_1->SendFallingHeight;
  this->PatrolMoveSpeed = param_1->PatrolMoveSpeed;
  this->PatrolStepNum = param_1->PatrolStepNum;
  (this->StateFlags).Packed = (param_1->StateFlags).Packed;
  this->IsServerRotation = param_1->IsServerRotation;
  return this;
}

// Clear @ 14ba39580

void __thiscall FDS_NetSyncData::Clear(FDS_NetSyncData *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->InputValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->EntityDirection).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->EntityDirection).Yaw = dVar2;
  (this->EntityDirection).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelocityVector).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->VelocityVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->VelocityVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  (this->StateFlags).Packed = (this->StateFlags).Packed & 0xffffffffc1fff80c;
  this->AccelerationValue = 0.0;
  this->FallingDistance = 0.0;
  this->SendFallingHeight = 0.0;
  this->TransportEntityID = 0;
  (this->SkillData).TargetEntityID = 0;
  (this->SkillData).SkillID = 0;
  (this->SkillData).SkillStartTime = 0.0;
  (this->SkillData).SkillEndTime = 0.0;
  (this->SkillData).SkillDuration = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillData).SkillRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillData).SkillRotation.Yaw = dVar2;
  (this->SkillData).SkillRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillData).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillData).StartLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->SkillData).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->SkillData).DestinationLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SkillData).LocationLerpTime = 0.1;
  (this->SkillData).IsSkillActive = false;
  (this->SkillData).IsCollision = false;
  return;
}

// IsActiveNewSkill @ 14ba59c70

bool __thiscall FDS_NetSyncData::IsActiveNewSkill(FDS_NetSyncData *this)

{
  double dVar1;
  
  if ((this->SkillData).SkillID == (this->PrevSkillData).SkillID) {
    dVar1 = (this->SkillData).SkillEndTime - (this->PrevSkillData).SkillEndTime;
    return __real_3e45798ee2308c3a <
           (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  return true;
}

// SavePrevData @ 14ba699d0

void __thiscall FDS_NetSyncData::SavePrevData(FDS_NetSyncData *this)

{
  double dVar1;
  float fVar2;
  double dVar3;
  ulong64 uVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined6 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = (this->StateFlags).Packed;
  uVar12 = (((ulonglong)((uint)uVar11 & 0x7f0) << 2 | (ulonglong)((uint)uVar11 & 0x3e000000)) << 3 |
           uVar11 & 0x1800000003) << 2 | uVar11 & 0xffffff983ffc07f3;
  (this->StateFlags).Packed = uVar12;
  if ((uVar11 & 0x7f0) != 0) {
    uVar11 = (uVar12 >> 4 & 0xff) << 0x12;
    (this->StateFlags).Packed = (uVar11 ^ uVar12) & 0xfffffffffe03ffff ^ uVar11;
  }
  dVar5 = (this->InputValue).field0_0x0._s_0.Y;
  dVar3 = this->Tick;
  dVar1 = (this->ServerPosition).field0_0x0._s_0.Z;
  (this->PrevInputValue).field0_0x0._s_0.X = (this->InputValue).field0_0x0._s_0.X;
  (this->PrevInputValue).field0_0x0._s_0.Y = dVar5;
  this->PrevTick = dVar3;
  dVar3 = (this->ServerPosition).field0_0x0._s_0.X;
  dVar5 = (this->ServerPosition).field0_0x0._s_0.Y;
  this->PrevTransportEntityID = this->TransportEntityID;
  fVar2 = this->AccelerationValue;
  (this->PrevServerPosition).field0_0x0._s_0.X = dVar3;
  (this->PrevServerPosition).field0_0x0._s_0.Y = dVar5;
  this->PrevAccelerationValue = fVar2;
  dVar3 = (this->NowPosition).field0_0x0._s_0.X;
  dVar5 = (this->NowPosition).field0_0x0._s_0.Y;
  uVar4 = this->ParentEntityID;
  (this->PrevServerPosition).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->NowPosition).field0_0x0._s_0.Z;
  (this->PrevPosition).field0_0x0._s_0.X = dVar3;
  (this->PrevPosition).field0_0x0._s_0.Y = dVar5;
  this->PrevParentEntityID = uVar4;
  dVar3 = (this->EntityDirection).Pitch;
  dVar5 = (this->EntityDirection).Yaw;
  (this->PrevPosition).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->EntityDirection).Roll;
  (this->PrevEntityDirection).Pitch = dVar3;
  (this->PrevEntityDirection).Yaw = dVar5;
  dVar3 = (this->NowRelativePosition).field0_0x0._s_0.X;
  dVar5 = (this->NowRelativePosition).field0_0x0._s_0.Y;
  (this->PrevEntityDirection).Roll = dVar1;
  dVar1 = (this->NowRelativePosition).field0_0x0._s_0.Z;
  (this->PrevRelativePosition).field0_0x0._s_0.X = dVar3;
  (this->PrevRelativePosition).field0_0x0._s_0.Y = dVar5;
  dVar3 = (this->DestinationPosition).field0_0x0._s_0.X;
  dVar5 = (this->DestinationPosition).field0_0x0._s_0.Y;
  (this->PrevRelativePosition).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->DestinationPosition).field0_0x0._s_0.Z;
  (this->PrevDestinationPosition).field0_0x0._s_0.X = dVar3;
  (this->PrevDestinationPosition).field0_0x0._s_0.Y = dVar5;
  dVar3 = (this->TransformValue).field0_0x0._s_0.X;
  dVar5 = (this->TransformValue).field0_0x0._s_0.Y;
  (this->PrevDestinationPosition).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->TransformValue).field0_0x0._s_0.Z;
  (this->PrevTransformValue).field0_0x0._s_0.X = dVar3;
  (this->PrevTransformValue).field0_0x0._s_0.Y = dVar5;
  dVar3 = (this->VelocityVector).field0_0x0._s_0.X;
  dVar5 = (this->VelocityVector).field0_0x0._s_0.Y;
  (this->PrevTransformValue).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->VelocityVector).field0_0x0._s_0.Z;
  (this->PrevVelocityVector).field0_0x0._s_0.X = dVar3;
  (this->PrevVelocityVector).field0_0x0._s_0.Y = dVar5;
  uVar4 = (this->SkillData).TargetEntityID;
  dVar3 = (this->SkillData).SkillStartTime;
  (this->PrevVelocityVector).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->SkillData).SkillEndTime;
  dVar5 = (this->SkillData).SkillDuration;
  (this->PrevSkillData).TargetEntityID = uVar4;
  (this->PrevSkillData).SkillStartTime = dVar3;
  dVar3 = (this->SkillData).SkillRotation.Pitch;
  dVar6 = (this->SkillData).SkillRotation.Yaw;
  (this->PrevSkillData).SkillEndTime = dVar1;
  (this->PrevSkillData).SkillDuration = dVar5;
  dVar1 = (this->SkillData).SkillRotation.Roll;
  dVar5 = (this->SkillData).StartLocation.field0_0x0._s_0.X;
  (this->PrevSkillData).SkillRotation.Pitch = dVar3;
  (this->PrevSkillData).SkillRotation.Yaw = dVar6;
  dVar3 = (this->SkillData).StartLocation.field0_0x0._s_0.Y;
  dVar6 = (this->SkillData).StartLocation.field0_0x0._s_0.Z;
  (this->PrevSkillData).SkillRotation.Roll = dVar1;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.X = dVar5;
  dVar1 = (this->SkillData).DestinationLocation.field0_0x0._s_0.X;
  dVar5 = (this->SkillData).DestinationLocation.field0_0x0._s_0.Y;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.Y = dVar3;
  (this->PrevSkillData).StartLocation.field0_0x0._s_0.Z = dVar6;
  dVar3 = (this->SkillData).DestinationLocation.field0_0x0._s_0.Z;
  fVar2 = (this->SkillData).LocationLerpTime;
  iVar7 = (this->SkillData).SkillID;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.X = dVar1;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.Y = dVar5;
  bVar8 = (this->SkillData).IsSkillActive;
  bVar9 = (this->SkillData).IsCollision;
  uVar10 = *(undefined6 *)&(this->SkillData).field_0x72;
  (this->PrevSkillData).DestinationLocation.field0_0x0._s_0.Z = dVar3;
  (this->PrevSkillData).LocationLerpTime = fVar2;
  (this->PrevSkillData).SkillID = iVar7;
  (this->PrevSkillData).IsSkillActive = bVar8;
  (this->PrevSkillData).IsCollision = bVar9;
  *(undefined6 *)&(this->PrevSkillData).field_0x72 = uVar10;
  return;
}

