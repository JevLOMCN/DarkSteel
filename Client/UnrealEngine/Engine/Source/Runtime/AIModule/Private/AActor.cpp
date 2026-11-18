// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// GetActorRotation @ 146e8d470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
AActor::GetActorRotation(AActor *this,TRotator<double> *__return_storage_ptr__)

{
  longlong *plVar1;
  void *pvVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  int iVar7;
  TObjectPtr<USceneComponent>_u_0 extraout_RAX;
  TObjectPtr<USceneComponent>_u_0 TVar8;
  TRotator<double> *pTVar9;
  uint uVar10;
  longlong lVar11;
  longlong local_48;
  TRotator<double> local_40;
  TQuat<double> local_28;
  
  TVar8 = (this->RootComponent).field0_0x0;
  if (TVar8.DebugPtr == (USceneComponent *)0x0) {
    local_40.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_40.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_40.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    local_28.X._0_4_ = *(undefined4 *)((TVar8.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64;
    local_28.X._4_4_ =
         *(undefined4 *)((longlong)((TVar8.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64 + 4);
    local_28.Y._0_4_ =
         *(undefined4 *)(((TVar8.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64 + 1);
    local_28.Y._4_4_ =
         *(undefined4 *)((longlong)((TVar8.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64 + 0xc)
    ;
    local_28.Z._0_4_ = *(undefined4 *)((TVar8.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64;
    local_28.Z._4_4_ =
         *(undefined4 *)((longlong)((TVar8.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64 + 4);
    local_28.W._0_4_ =
         *(undefined4 *)(((TVar8.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64 + 1);
    local_28.W._4_4_ =
         *(undefined4 *)((longlong)((TVar8.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64 + 0xc)
    ;
    plVar1 = (longlong *)((longlong)TVar8 + 0x1e0);
    if (*plVar1 == 0) {
      this = ::operator_new(0x40);
      dVar6 = UE::Math::TQuat<double>::Identity.Y;
      if (this == (AActor *)0x0) {
        this = (AActor *)0x0;
      }
      else {
        this->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.X;
        this->_padding_ = (longlong)dVar6;
        dVar6 = UE::Math::TQuat<double>::Identity.W;
        this->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
        this->_padding_ = (longlong)dVar6;
        dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        this->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
        (this->PrimaryActorTick)._padding_ = (longlong)dVar6;
        (this->PrimaryActorTick)._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      if (plVar1 != &local_48) {
        pvVar2 = (void *)*plVar1;
        *plVar1 = (longlong)this;
        this = (AActor *)0x0;
        ::operator_delete(pvVar2,0x40);
      }
      ::operator_delete(this,0x40);
      TVar8 = extraout_RAX;
    }
    pdVar3 = (double *)*plVar1;
    lVar11 = -(ulonglong)(pdVar3[3] != (double)CONCAT44(local_28.W._4_4_,local_28.W._0_4_));
    auVar4._8_4_ = (int)lVar11;
    auVar4._0_8_ = -(ulonglong)(pdVar3[2] != (double)CONCAT44(local_28.Z._4_4_,local_28.Z._0_4_));
    auVar4._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    uVar10 = movmskpd((int)this,auVar4);
    lVar11 = -(ulonglong)((double)CONCAT44(local_28.Y._4_4_,local_28.Y._0_4_) != pdVar3[1]);
    auVar5._8_4_ = (int)lVar11;
    auVar5._0_8_ = -(ulonglong)((double)CONCAT44(local_28.X._4_4_,local_28.X._0_4_) != *pdVar3);
    auVar5._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    iVar7 = movmskpd(TVar8._0_4_,auVar5);
    if ((uVar10 & 0x3fffffff) != 0 || iVar7 != 0) {
      *(undefined4 *)pdVar3 = local_28.X._0_4_;
      *(undefined4 *)((longlong)pdVar3 + 4) = local_28.X._4_4_;
      *(undefined4 *)(pdVar3 + 1) = local_28.Y._0_4_;
      *(undefined4 *)((longlong)pdVar3 + 0xc) = local_28.Y._4_4_;
      pdVar3[2] = (double)CONCAT44(local_28.Z._4_4_,local_28.Z._0_4_);
      pdVar3[3] = (double)CONCAT44(local_28.W._4_4_,local_28.W._0_4_);
      pTVar9 = UE::Math::TQuat<double>::Rotator(&local_28,&local_40);
      dVar6 = pTVar9->Yaw;
      pdVar3[4] = pTVar9->Pitch;
      pdVar3[5] = dVar6;
      pdVar3[6] = pTVar9->Roll;
    }
    local_40.Pitch = pdVar3[4];
    local_40.Yaw = pdVar3[5];
    local_40.Roll = pdVar3[6];
  }
  __return_storage_ptr__->Pitch = local_40.Pitch;
  __return_storage_ptr__->Yaw = local_40.Yaw;
  __return_storage_ptr__->Roll = local_40.Roll;
  return __return_storage_ptr__;
}

// FindComponentByClass<UBehaviorTreeComponent> @ 146eb3a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBehaviorTreeComponent * __thiscall
AActor::FindComponentByClass<UBehaviorTreeComponent>(AActor *this)

{
  code *pcVar1;
  UBehaviorTreeComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UBehaviorTreeComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

// FindComponentByClass<UBlackboardComponent> @ 146f1aa80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBlackboardComponent * __thiscall AActor::FindComponentByClass<UBlackboardComponent>(AActor *this)

{
  code *pcVar1;
  UBlackboardComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UBlackboardComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

// FindComponentByClass<UBrainComponent> @ 146f1aae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBrainComponent * __thiscall AActor::FindComponentByClass<UBrainComponent>(AActor *this)

{
  code *pcVar1;
  UBrainComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = UBrainComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UBrainComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

// FindComponentByClass<UPathFollowingComponent> @ 146f1ab40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPathFollowingComponent * __thiscall
AActor::FindComponentByClass<UPathFollowingComponent>(AActor *this)

{
  code *pcVar1;
  UPathFollowingComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = Z_Construct_UClass_UPathFollowingComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UPathFollowingComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

// FindComponentByClass<UAIPerceptionComponent> @ 146f89f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAIPerceptionComponent * __thiscall
AActor::FindComponentByClass<UAIPerceptionComponent>(AActor *this)

{
  code *pcVar1;
  UAIPerceptionComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = UAIPerceptionComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UAIPerceptionComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

