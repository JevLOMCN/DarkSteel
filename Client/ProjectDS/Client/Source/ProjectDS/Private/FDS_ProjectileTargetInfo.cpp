// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// FDS_ProjectileTargetInfo @ 14baed330

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

FDS_ProjectileTargetInfo * __thiscall
FDS_ProjectileTargetInfo::FDS_ProjectileTargetInfo
          (FDS_ProjectileTargetInfo *this,FDS_ProjectileSkillAttackInfo *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  this->ParentSkillAttackInfo = (FDS_ProjectileSkillAttackInfo *)0x0;
  this->TargetEntity = (FDS_EntityBase *)0x0;
  local_res8 = 0;
  (this->TargetEntityActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetEntityActor).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->TargetMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetMovementCore).WeakPtr,(FObjectPtr)&local_res8);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->LastTargetLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastTargetLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LastTargetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ArrivalTime = 0.0;
  this->MoveTotalTime = 0.0;
  this->EndAfterTime = 0.0;
  this->bIsMultiHitCollision = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HitSphereLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HitSphereLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->HitSphereLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->HitSphereRadius = 0.0;
  (this->HitSphereComp).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->HitSphereComp).WeakPtr,(FObjectPtr)&local_res8);
  this->ParentSkillAttackInfo = param_1;
  return this;
}

// ClearTargetInfo @ 14baf9f80

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

void __thiscall FDS_ProjectileTargetInfo::ClearTargetInfo(FDS_ProjectileTargetInfo *this)

{
  undefined8 uVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->ParentSkillAttackInfo = (FDS_ProjectileSkillAttackInfo *)0x0;
  this->TargetEntity = (FDS_EntityBase *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->TargetEntityActor).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->TargetMovementCore).WeakPtr = local_res8;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  (this->LastTargetLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastTargetLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LastTargetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ArrivalTime = 0.0;
  this->MoveTotalTime = 0.0;
  this->EndAfterTime = 0.0;
  this->bIsMultiHitCollision = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HitSphereLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HitSphereLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->HitSphereLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->HitSphereRadius = 0.0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->HitSphereComp).WeakPtr = local_res8;
  return;
}

// UpdateTargetLocationByMoveType @ 14bb3ff40

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
FDS_ProjectileTargetInfo::UpdateTargetLocationByMoveType(FDS_ProjectileTargetInfo *this)

{
  double dVar1;
  EDS_ProjectileMoveType EVar2;
  FDS_ProjectileSkillAttackInfo *pFVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_MovementCore *pUVar7;
  TVector<double> *pTVar8;
  TVector<double> local_28;
  
  pFVar3 = this->ParentSkillAttackInfo;
  if (((((pFVar3 != (FDS_ProjectileSkillAttackInfo *)0x0) &&
        (pFVar3->SkillAttackTable != (FDS_SkillAttackTableRow *)0x0)) &&
       (pFVar3->SkillProjectileTable != (FDS_SkillProjectileTableRow *)0x0)) &&
      ((this->TargetEntity != (FDS_EntityBase *)0x0 &&
       (bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          (&this->TargetEntityActor,(void *)0x0), !bVar5)))) &&
     (bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        (&this->TargetMovementCore,(void *)0x0), !bVar5)) {
    EVar2 = this->ParentSkillAttackInfo->SkillProjectileTable->ProjectileMoveType;
    if (EVar2 == TargetMove) {
      bVar5 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                        (&this->HitSphereComp,(void *)0x0);
      if (!bVar5) {
        pUVar6 = FWeakObjectPtr::Get(&(this->HitSphereComp).WeakPtr);
        dVar4 = *(double *)&pUVar6[0xd].field_0x10;
        dVar1 = *(double *)&pUVar6[0xd].field_0x18;
        (this->LastTargetLocation).field0_0x0._s_0.X = *(double *)&pUVar6[0xd].field_0x8;
        (this->LastTargetLocation).field0_0x0._s_0.Y = dVar4;
        (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
        return;
      }
      pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
      pTVar8 = UDS_MovementCore::GetActorLocation(pUVar7,&local_28);
    }
    else {
      if ((EVar2 == TargetCurve) || (EVar2 == DirectTargetMove)) {
        bVar5 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                          (&this->HitSphereComp,(void *)0x0);
        if (!bVar5) {
          pUVar6 = FWeakObjectPtr::Get(&(this->HitSphereComp).WeakPtr);
          dVar4 = *(double *)&pUVar6[0xd].field_0x10;
          dVar1 = *(double *)&pUVar6[0xd].field_0x18;
          (this->LastTargetLocation).field0_0x0._s_0.X = *(double *)&pUVar6[0xd].field_0x8;
          (this->LastTargetLocation).field0_0x0._s_0.Y = dVar4;
          (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
          pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
          pTVar8 = UDS_MovementCore::GetActorFootLocation(pUVar7,&local_28);
          (this->LastTargetLocation).field0_0x0._s_0.Z =
               (double)this->ParentSkillAttackInfo->StartHeight + (pTVar8->field0_0x0)._s_0.Z;
          return;
        }
        pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
        pTVar8 = UDS_MovementCore::GetActorFootLocation(pUVar7,&local_28);
        dVar1 = (pTVar8->field0_0x0)._s_0.Y;
        (this->LastTargetLocation).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
        (this->LastTargetLocation).field0_0x0._s_0.Y = dVar1;
        pFVar3 = this->ParentSkillAttackInfo;
        (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
        (this->LastTargetLocation).field0_0x0._s_0.Z =
             (double)pFVar3->StartHeight + (this->LastTargetLocation).field0_0x0._s_0.Z;
        return;
      }
      if (EVar2 != ZoneCurve) {
        return;
      }
      bVar5 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                        (&this->HitSphereComp,(void *)0x0);
      if (!bVar5) {
        pUVar6 = FWeakObjectPtr::Get(&(this->HitSphereComp).WeakPtr);
        dVar4 = *(double *)&pUVar6[0xd].field_0x10;
        dVar1 = *(double *)&pUVar6[0xd].field_0x18;
        (this->LastTargetLocation).field0_0x0._s_0.X = *(double *)&pUVar6[0xd].field_0x8;
        (this->LastTargetLocation).field0_0x0._s_0.Y = dVar4;
        (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
        pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
        pTVar8 = UDS_MovementCore::GetActorFootLocation(pUVar7,&local_28);
        (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
        return;
      }
      pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
      pTVar8 = UDS_MovementCore::GetActorFootLocation(pUVar7,&local_28);
    }
    dVar1 = (pTVar8->field0_0x0)._s_0.Y;
    (this->LastTargetLocation).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (this->LastTargetLocation).field0_0x0._s_0.Y = dVar1;
    (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  }
  return;
}

// UpdateTargetLocation_DirectTargetMove @ 14bb40190

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
FDS_ProjectileTargetInfo::UpdateTargetLocation_DirectTargetMove(FDS_ProjectileTargetInfo *this)

{
  double dVar1;
  FDS_ProjectileSkillAttackInfo *pFVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_MovementCore *pUVar6;
  TVector<double> *pTVar7;
  TVector<double> local_28;
  
  bVar4 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->HitSphereComp,(void *)0x0);
  if (bVar4) {
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
    pTVar7 = UDS_MovementCore::GetActorFootLocation(pUVar6,&local_28);
    dVar1 = (pTVar7->field0_0x0)._s_0.Y;
    (this->LastTargetLocation).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    (this->LastTargetLocation).field0_0x0._s_0.Y = dVar1;
    pFVar2 = this->ParentSkillAttackInfo;
    (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    dVar1 = (double)pFVar2->StartHeight + (this->LastTargetLocation).field0_0x0._s_0.Z;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&(this->HitSphereComp).WeakPtr);
    dVar3 = *(double *)&pUVar5[0xd].field_0x10;
    dVar1 = *(double *)&pUVar5[0xd].field_0x18;
    (this->LastTargetLocation).field0_0x0._s_0.X = *(double *)&pUVar5[0xd].field_0x8;
    (this->LastTargetLocation).field0_0x0._s_0.Y = dVar3;
    (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
    pTVar7 = UDS_MovementCore::GetActorFootLocation(pUVar6,&local_28);
    dVar1 = (double)this->ParentSkillAttackInfo->StartHeight + (pTVar7->field0_0x0)._s_0.Z;
  }
  (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
  return;
}

// UpdateTargetLocation_TargetCurve @ 14bb40250

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
FDS_ProjectileTargetInfo::UpdateTargetLocation_TargetCurve(FDS_ProjectileTargetInfo *this)

{
  double dVar1;
  FDS_ProjectileSkillAttackInfo *pFVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_MovementCore *pUVar6;
  TVector<double> *pTVar7;
  TVector<double> local_28;
  
  bVar4 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->HitSphereComp,(void *)0x0);
  if (bVar4) {
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
    pTVar7 = UDS_MovementCore::GetActorFootLocation(pUVar6,&local_28);
    dVar1 = (pTVar7->field0_0x0)._s_0.Y;
    (this->LastTargetLocation).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    (this->LastTargetLocation).field0_0x0._s_0.Y = dVar1;
    pFVar2 = this->ParentSkillAttackInfo;
    (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    dVar1 = (double)pFVar2->StartHeight + (this->LastTargetLocation).field0_0x0._s_0.Z;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&(this->HitSphereComp).WeakPtr);
    dVar3 = *(double *)&pUVar5[0xd].field_0x10;
    dVar1 = *(double *)&pUVar5[0xd].field_0x18;
    (this->LastTargetLocation).field0_0x0._s_0.X = *(double *)&pUVar5[0xd].field_0x8;
    (this->LastTargetLocation).field0_0x0._s_0.Y = dVar3;
    (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
    pTVar7 = UDS_MovementCore::GetActorFootLocation(pUVar6,&local_28);
    dVar1 = (double)this->ParentSkillAttackInfo->StartHeight + (pTVar7->field0_0x0)._s_0.Z;
  }
  (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
  return;
}

// UpdateTargetLocation_TargetMove @ 14bb40310

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
FDS_ProjectileTargetInfo::UpdateTargetLocation_TargetMove(FDS_ProjectileTargetInfo *this)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar5;
  TVector<double> local_28;
  
  bVar3 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->HitSphereComp,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->HitSphereComp).WeakPtr);
    dVar2 = *(double *)&pUVar4[0xd].field_0x10;
    dVar1 = *(double *)&pUVar4[0xd].field_0x18;
    (this->LastTargetLocation).field0_0x0._s_0.X = *(double *)&pUVar4[0xd].field_0x8;
    (this->LastTargetLocation).field0_0x0._s_0.Y = dVar2;
    (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
    return;
  }
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
  pTVar5 = UDS_MovementCore::GetActorLocation(this_00,&local_28);
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  (this->LastTargetLocation).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (this->LastTargetLocation).field0_0x0._s_0.Y = dVar1;
  (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  return;
}

// UpdateTargetLocation_ZoneCurve @ 14bb40390

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
FDS_ProjectileTargetInfo::UpdateTargetLocation_ZoneCurve(FDS_ProjectileTargetInfo *this)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_MovementCore *pUVar5;
  TVector<double> *pTVar6;
  TVector<double> local_28;
  
  bVar3 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->HitSphereComp,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->HitSphereComp).WeakPtr);
    dVar2 = *(double *)&pUVar4[0xd].field_0x10;
    dVar1 = *(double *)&pUVar4[0xd].field_0x18;
    (this->LastTargetLocation).field0_0x0._s_0.X = *(double *)&pUVar4[0xd].field_0x8;
    (this->LastTargetLocation).field0_0x0._s_0.Y = dVar2;
    (this->LastTargetLocation).field0_0x0._s_0.Z = dVar1;
    pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
    pTVar6 = UDS_MovementCore::GetActorFootLocation(pUVar5,&local_28);
    (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    return;
  }
  pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->TargetMovementCore).WeakPtr);
  pTVar6 = UDS_MovementCore::GetActorFootLocation(pUVar5,&local_28);
  dVar1 = (pTVar6->field0_0x0)._s_0.Y;
  (this->LastTargetLocation).field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
  (this->LastTargetLocation).field0_0x0._s_0.Y = dVar1;
  (this->LastTargetLocation).field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
  return;
}

