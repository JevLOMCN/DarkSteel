// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 103

// AController @ 1479a2cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AController * __thiscall AController::AController(AController *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined8 *)&(this->OnNewPawn).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->PlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->StartSpot).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnInstigatedAnyDamage = 0;
  *(undefined8 *)&(this->OnInstigatedAnyDamage).field_0x8 = 0;
  *(undefined8 *)&(this->OnInstigatedAnyDamage).field_0x10 = 0;
  *(undefined8 *)&this->OnPossessedPawnChanged = 0;
  *(undefined8 *)&(this->OnPossessedPawnChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPossessedPawnChanged).field_0x10 = 0;
  (this->StateName).ComparisonIndex = 0;
  (this->StateName).Number = 0;
  (this->Pawn).field0_0x0.DebugPtr = (APawn *)0x0;
  (this->OldPawn).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Character).field0_0x0.DebugPtr = (ACharacter *)0x0;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined8 *)&this->OnNewPawn = 0;
  *(undefined8 *)&(this->OnNewPawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnNewPawn).field_0x10 = 0;
  return this;
}

// AController @ 1479a2d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AController * __thiscall AController::AController(AController *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  USceneComponent *pUVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&(this->OnNewPawn).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->PlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->StartSpot).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnInstigatedAnyDamage = 0;
  *(undefined8 *)&(this->OnInstigatedAnyDamage).field_0x8 = 0;
  *(undefined8 *)&(this->OnInstigatedAnyDamage).field_0x10 = 0;
  *(undefined8 *)&this->OnPossessedPawnChanged = 0;
  *(undefined8 *)&(this->OnPossessedPawnChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPossessedPawnChanged).field_0x10 = 0;
  (this->StateName).ComparisonIndex = 0;
  (this->StateName).Number = 0;
  (this->Pawn).field0_0x0.DebugPtr = (APawn *)0x0;
  (this->OldPawn).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Character).field0_0x0.DebugPtr = (ACharacter *)0x0;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined8 *)&this->OnNewPawn = 0;
  *(undefined8 *)&(this->OnNewPawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnNewPawn).field_0x10 = 0;
  AActor::SetHidden((AActor *)this,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  pFVar4 = ::FName::FName(&local_res8,L"TransformComponent0");
  FVar3 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar6 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->TransformComponent).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  this->_padding_ = (longlong)(this->TransformComponent).field0_0x0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  this->bAttachToPawn = '\0';
  this->bCanPossessWithoutAuthority = '\0';
  this->bIsPlayerController = '\0';
  if ((USceneComponent *)this->_padding_ != (USceneComponent *)0x0) {
    USceneComponent::SetUsingAbsoluteRotation((USceneComponent *)this->_padding_,true);
  }
  return this;
}

// ~AController @ 1479a8c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::~AController(AController *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnNewPawn).field_0x8,
             *(int *)&(this->OnNewPawn).field_0x10);
  pvVar1 = *(void **)&(this->OnNewPawn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNewPawn);
  pvVar1 = *(void **)&(this->OnPossessedPawnChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPossessedPawnChanged);
  pvVar1 = *(void **)&(this->OnInstigatedAnyDamage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstigatedAnyDamage);
  this->_padding_ = (longlong)&___7INavAgentInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddPawnTickDependency @ 1479af110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::AddPawnTickDependency(AController *this,APawn *param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_01;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar4;
  UObject *local_res10;
  FWeakObjectPtr local_18;
  FWeakObjectPtr local_10;
  
  if (param_1 != (APawn *)0x0) {
    pUVar3 = (UObject *)(**(code **)(param_1->_padding_ + 0x760))(param_1);
    if ((pUVar3 != (UObject *)0x0) &&
       (this_00 = &pUVar3[1].field_0x10, (pUVar3[1].field_0x1a & 2) != 0)) {
      FTickFunction::AddPrerequisite
                ((FTickFunction *)this_00,(UObject *)this,(FTickFunction *)&this->_padding_);
      if ((pUVar3[7].field_0x8 & 4) != 0) {
        return;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_18.ObjectIndex = 0;
      local_18.ObjectSerialNumber = 0;
      local_res10 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_res10);
      local_10 = (FWeakObjectPtr)this_00;
      if ((this_00 == (undefined1 *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrerequisiteTickFunction",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineBaseTypes.h"
                             ,0x8c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)param_1->_padding_;
      pTVar4 = this_01 + (longlong)(int)param_1->_padding_ * 2;
      for (; this_01 != pTVar4; this_01 = this_01 + 2) {
        bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_18);
        if ((bVar2) && (this_01[1].WeakPtr == local_10)) {
          return;
        }
      }
    }
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&param_1->_padding_,(UObject *)this,
               (FTickFunction *)&this->_padding_);
  }
  return;
}

// AttachToPawn @ 1479b3c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::AttachToPawn(AController *this,APawn *param_1)

{
  longlong *plVar1;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  if ((this->bAttachToPawn != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    if (param_1 == (APawn *)0x0) {
      (**(code **)(this->_padding_ + 0x788))(this);
    }
    else if ((param_1->_padding_ != 0) && (plVar1[0x1a] != param_1->_padding_)) {
      (**(code **)(*plVar1 + 0x518))(plVar1,&FDetachmentTransformRules::KeepRelativeTransform);
      local_48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)this->_padding_,(TVector<double> *)&local_28._s_0,&local_48,
                 false,(FHitResult *)0x0,None);
                    /* WARNING: Could not recover jumptable at 0x0001479b3cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x508))
                ((longlong *)this->_padding_,param_1->_padding_,
                 &FAttachmentTransformRules::KeepRelativeTransform,0);
      return;
    }
  }
  return;
}

// BeginInactiveState @ 1479b48a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::BeginInactiveState(AController *this)

{
  return;
}

// ChangeState @ 1479b7cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::ChangeState(AController *this,FName param_1)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar2;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar2 = this->StateName;
  if (param_1 != FVar2) {
    FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar3.Number = 0;
    FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value);
    if (FVar2 == FVar3) {
      (**(code **)(this->_padding_ + 0x8a8))(this);
    }
    this->StateName = param_1;
    FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar1.Value);
    if (param_1 == FVar2) {
      (**(code **)(this->_padding_ + 0x8a0))(this);
    }
  }
  return;
}

// CleanupPlayerState @ 1479b8050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::CleanupPlayerState(AController *this)

{
  AActor::Destroy((AActor *)(this->PlayerState).field0_0x0.DebugPtr,false,true);
  if ((UE::Gameplay::CVars::bIsControllerPushBased == false) ||
     ((this->PlayerState).field0_0x0.DebugPtr != (APlayerState *)0x0)) {
    (this->PlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  }
  return;
}

// ClientSetLocation @ 1479b81e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::ClientSetLocation(AController *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  UFunction *pUVar1;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_38 = (param_1->field0_0x0)._s_0.X;
  dStack_30 = (param_1->field0_0x0)._s_0.Y;
  local_28 = (param_1->field0_0x0)._s_0.Z;
  local_20 = param_2->Pitch;
  dStack_18 = param_2->Yaw;
  local_10 = param_2->Roll;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ClientSetLocation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_38);
  return;
}

// ClientSetLocation_Implementation @ 1479b8250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::ClientSetLocation_Implementation
          (AController *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  APawn *this_00;
  code *pcVar1;
  UFunction *pUVar2;
  TRotator<double> *pTVar3;
  TRotator<double> local_28;
  undefined1 local_10;
  
  local_28.Pitch = param_2->Pitch;
  local_28.Yaw = param_2->Yaw;
  local_28.Roll = param_2->Roll;
  local_10 = 0;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ClientSetRotation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_28);
  this_00 = (this->Pawn).field0_0x0.DebugPtr;
  if (this_00 != (APawn *)0x0) {
    pcVar1 = *(code **)(this_00->_padding_ + 0x5f8);
    pTVar3 = AActor::GetActorRotation((AActor *)this_00,&local_28);
    (*pcVar1)(this_00,param_1,pTVar3,0,0);
  }
  return;
}

// ClientSetLocation_Validate @ 1479b82f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
AController::ClientSetLocation_Validate
          (AController *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  return true;
}

// ClientSetRotation @ 1479b8300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::ClientSetRotation(AController *this,TRotator<double> *param_1,bool param_2)

{
  UFunction *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  undefined1 local_10;
  
  local_28 = param_1->Pitch;
  dStack_20 = param_1->Yaw;
  local_18 = param_1->Roll;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ClientSetRotation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// ClientSetRotation_Implementation @ 1479b8360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::ClientSetRotation_Implementation
          (AController *this,TRotator<double> *param_1,bool param_2)

{
  APawn *pAVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  (**(code **)(this->_padding_ + 0x7b0))();
  pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
  if (pAVar1 != (APawn *)0x0) {
    local_28 = *(undefined4 *)&param_1->Pitch;
    uStack_24 = *(undefined4 *)((longlong)&param_1->Pitch + 4);
    uStack_20 = *(undefined4 *)&param_1->Yaw;
    uStack_1c = *(undefined4 *)((longlong)&param_1->Yaw + 4);
    local_18 = param_1->Roll;
    (**(code **)(pAVar1->_padding_ + 0x850))(pAVar1,&local_28,0);
  }
  return;
}

// ClientSetRotation_Validate @ 1479b83c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
AController::ClientSetRotation_Validate(AController *this,TRotator<double> *param_1,bool param_2)

{
  return true;
}

// CurrentLevelUnloaded @ 1479bc6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::CurrentLevelUnloaded(AController *this)

{
  return;
}

// Destroyed @ 1479bd0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::Destroyed(AController *this)

{
  AGameModeBase *pAVar1;
  UWorld *pUVar2;
  
  if (((char)this->_padding_ == '\x03') &&
     ((this->PlayerState).field0_0x0.DebugPtr != (APlayerState *)0x0)) {
    pUVar2 = AActor::GetWorld((AActor *)this);
    pAVar1 = (pUVar2->AuthorityGameMode).field0_0x0.DebugPtr;
    if (pAVar1 != (AGameModeBase *)0x0) {
      (**(code **)(pAVar1->_padding_ + 0x8a0))(pAVar1,this);
    }
    (**(code **)(this->_padding_ + 0x7f8))(this);
  }
  UnPossess(this);
  pUVar2 = AActor::GetWorld((AActor *)this);
  UWorld::RemoveController(pUVar2,this);
  AActor::Destroyed((AActor *)this);
  return;
}

// DetachFromPawn @ 1479bd120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::DetachFromPawn(AController *this)

{
  int iVar1;
  USceneComponent *this_00;
  AActor *pAVar2;
  UClass *pUVar3;
  
  if ((((this->bAttachToPawn != 0) &&
       (this_00 = (USceneComponent *)this->_padding_, this_00 != (USceneComponent *)0x0)) &&
      ((this_00->AttachParent).field0_0x0.DebugPtr != (USceneComponent *)0x0)) &&
     (pAVar2 = USceneComponent::GetAttachmentRootActor(this_00), pAVar2 != (AActor *)0x0)) {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x518))
                ((longlong *)this->_padding_,&FDetachmentTransformRules::KeepWorldTransform);
    }
  }
  return;
}

// DisplayDebug @ 1479bd1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::DisplayDebug
          (AController *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  APlayerState *pAVar1;
  float local_res8 [2];
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((this->Pawn).field0_0x0.DebugPtr == (APawn *)0x0) {
    pAVar1 = (this->PlayerState).field0_0x0.DebugPtr;
    if (pAVar1 == (APlayerState *)0x0) {
      local_res8[0] = 0.0;
      ::FString::FString(&local_48,L"NO PlayerState");
      FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_48,local_res8);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      (**(code **)(pAVar1->_padding_ + 0x758))();
    }
    AActor::DisplayDebug((AActor *)this,param_1,param_2,param_3,param_4);
  }
  else {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f800000;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = 0;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         0x3f800000;
    local_res8[0] = 0.0;
    local_res10 = (FName)((this->Pawn).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    ::FString::PrintfImpl(&local_38,L"CONTROLLER %s Pawn %s");
    FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_38,local_res8);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndInactiveState @ 1479bfed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::EndInactiveState(AController *this)

{
  return;
}

// FailedToSpawnPawn @ 1479c1030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::FailedToSpawnPawn(AController *this)

{
  code *UNRECOVERED_JUMPTABLE;
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x7a0);
  FVar1 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res8 = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  uStackX_c = 0;
                    /* WARNING: Could not recover jumptable at 0x0001479c1079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,local_res8);
  return;
}

// GameHasEnded @ 1479c21a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::GameHasEnded(AController *this,AActor *param_1,bool param_2)

{
  return;
}

// GetActorEyesViewPoint @ 1479c3c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::GetActorEyesViewPoint
          (AController *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  APawn *pAVar1;
  
  pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
  if (pAVar1 != (APawn *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479c3c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pAVar1->_padding_ + 0x720))();
    return;
  }
  return;
}

// GetControlRotation @ 1479c5a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
AController::GetControlRotation(AController *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ControlRotation).Yaw;
  dVar1 = (this->ControlRotation).Roll;
  __return_storage_ptr__->Pitch = (this->ControlRotation).Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetDesiredRotation @ 1479c5ed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
AController::GetDesiredRotation(AController *this,TRotator<double> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x7a8))();
  return __return_storage_ptr__;
}

// GetHumanReadableName @ 1479c9bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
AController::GetHumanReadableName(AController *this,FString *__return_storage_ptr__)

{
  APlayerState *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_00 = (this->PlayerState).field0_0x0.DebugPtr;
  if (this_00 == (APlayerState *)0x0) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar4 = ::FString::FString(&local_28,(wchar_t *)FVar5.Data);
    bVar3 = false;
    bVar2 = true;
    bVar1 = true;
  }
  else {
    pFVar4 = APlayerState::GetPlayerName(this_00,&local_18);
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (bVar2) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 1479ca420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::GetLifetimeReplicatedProps
          (AController *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  local_38.RepIndex = 10;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.bIsPushBased = UE::Gameplay::CVars::bIsControllerPushBased;
  local_38.PropertyName = L"PlayerState";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_28.RepNotifyCondition = REPNOTIFY_Always;
  local_38.PropertyName = L"Pawn";
  local_38.RepIndex = 0xb;
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetMoveGoalReachTest @ 1479cc3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::GetMoveGoalReachTest
          (AController *this,AActor *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float *param_4,float *param_5)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479cc3f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(this->_padding_ + 0x2c0) + 0x38))();
    return;
  }
  return;
}

// GetNavAgentLocation @ 1479cc570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
AController::GetNavAgentLocation(AController *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  longlong *plVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (this->_padding_ == 0) {
    pdVar3 = &local_28;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    plVar4 = (longlong *)(this->_padding_ + 0x2c0);
    pdVar3 = (double *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_28);
  }
  dVar2 = pdVar3[1];
  dVar1 = pdVar3[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetNavAgentPropertiesRef @ 1479cc5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavAgentProperties * __thiscall AController::GetNavAgentPropertiesRef(AController *this)

{
  FNavAgentProperties *pFVar1;
  
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479cc5f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FNavAgentProperties *)(**(code **)(*(longlong *)(this->_padding_ + 0x2c0) + 0x10))();
    return pFVar1;
  }
  return &FNavAgentProperties::DefaultProperties;
}

// GetPathFollowingAgent @ 1479ccc40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

IPathFollowingAgentInterface * __thiscall AController::GetPathFollowingAgent(AController *this)

{
  IPathFollowingAgentInterface *pIVar1;
  
  pIVar1 = FNavigationSystem::FindPathFollowingAgentForActor((AActor *)&this[-1]._padding_);
  return pIVar1;
}

// GetPlayerViewPoint @ 1479cd040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::GetPlayerViewPoint
          (AController *this,TVector<double> *param_1,TRotator<double> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001479cd043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x720))();
  return;
}

// GetPrivateStaticClass @ 1479cd810

UClass * __cdecl AController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Controller",
               &Z_Registration_Info_UClass_AController.InnerSingleton,
               StaticRegisterNativesAController,0x370,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<AController>,
               InternalVTableHelperCtorCaller<AController>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AController.InnerSingleton;
}

// GetStateName @ 1479d1b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall AController::GetStateName(AController *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->StateName;
  return in_RDX;
}

// GetViewTarget @ 1479d5270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall AController::GetViewTarget(AController *this)

{
  AController *pAVar1;
  
  pAVar1 = (AController *)(this->Pawn).field0_0x0.DebugPtr;
  if (pAVar1 != (AController *)0x0) {
    this = pAVar1;
  }
  return (AActor *)this;
}

// InitPlayerState @ 1479d7ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::InitPlayerState(AController *this)

{
  int iVar1;
  AGameStateBase *this_00;
  code *pcVar2;
  ENetMode EVar3;
  UWorld *this_01;
  AGameModeBase *pAVar4;
  UClass *pUVar5;
  APlayerState *pAVar6;
  APlayerState *pAVar7;
  FString *pFVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  APlayerState *pAVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pAVar11 = (APlayerState *)0x0;
  local_a8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data & 0xffffffff00000000;
  EVar3 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar3 == NM_Client) {
    return;
  }
  this_01 = AActor::GetWorld((AActor *)this);
  if (this_01 == (UWorld *)0x0) {
    return;
  }
  pAVar4 = (this_01->AuthorityGameMode).field0_0x0.DebugPtr;
  if (pAVar4 == (AGameModeBase *)0x0) {
    this_00 = (this_01->GameState).field0_0x0.DebugPtr;
    if (this_00 == (AGameStateBase *)0x0) {
      return;
    }
    pAVar4 = AGameStateBase::GetDefaultGameMode(this_00);
    if (pAVar4 == (AGameModeBase *)0x0) {
      return;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98._16_8_ = this;
  local_98._24_8_ = AActor::GetInstigator((AActor *)this);
  local_98._52_4_ = local_98._52_4_ | RF_Transient;
  pwVar10 = L"";
  pAVar6 = (APlayerState *)(pAVar4->PlayerStateClass).Class.field0_0x0.DebugPtr;
  local_98[0x30] = AlwaysSpawn;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar6 != (APlayerState *)0x0) goto LAB_1479d7bab;
LAB_1479d7bd9:
    if (4 < (byte)LogPlayerController._0_1_) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pAVar4->_padding_;
      ::FName::ToString((FName *)&local_a8,&local_b8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    pAVar6 = (APlayerState *)Z_Construct_UClass_APlayerState_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1479d7c47:
      if (pAVar6 != (APlayerState *)0x0) goto LAB_1479d7c4c;
    }
    else if (pAVar6 != (APlayerState *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
      goto LAB_1479d7c47;
    }
LAB_1479d7c7a:
    pAVar6 = pAVar11;
  }
  else {
    if (pAVar6 == (APlayerState *)0x0) goto LAB_1479d7bd9;
    UE::GC::MarkAsReachable((UObject *)pAVar6);
LAB_1479d7bab:
    pUVar5 = Z_Construct_UClass_APlayerState_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_1479d7bd9;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pAVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pAVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_1479d7bd9;
LAB_1479d7c4c:
    pUVar5 = Z_Construct_UClass_APlayerState_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_1479d7c7a;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pAVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pAVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_1479d7c7a;
  }
  pAVar7 = (APlayerState *)
           UWorld::SpawnActor(this_01,(UClass *)pAVar6,(TVector<double> *)0x0,
                              (TRotator<double> *)0x0,(FActorSpawnParameters *)local_98);
  pAVar6 = pAVar11;
  if (pAVar7 != (APlayerState *)0x0) {
    pUVar5 = Z_Construct_UClass_APlayerState_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
       (pAVar6 = pAVar7,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar5->_padding_)) {
      pFVar8 = GetTypeName<APlayerState>(&local_b8);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<AActor>(&local_a8,(AActor *)pAVar7);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar12);
    }
  }
  if (UE::Gameplay::CVars::bIsControllerPushBased == false) {
LAB_1479d7d05:
    (this->PlayerState).field0_0x0.DebugPtr = pAVar6;
    pAVar7 = pAVar6;
  }
  else {
    pAVar7 = (this->PlayerState).field0_0x0.DebugPtr;
    if (pAVar7 == (APlayerState *)0x0) {
      bVar13 = pAVar6 == (APlayerState *)0x0;
    }
    else {
      bVar13 = pAVar7 == pAVar6;
    }
    if (!bVar13) goto LAB_1479d7d05;
  }
  if (pAVar7 != (APlayerState *)0x0) {
    pAVar11 = (APlayerState *)0x1;
    pFVar8 = APlayerState::GetPlayerName(pAVar7,&local_b8);
    if ((pFVar8->Data).ArrayNum < 2) {
      bVar13 = true;
      goto LAB_1479d7d30;
    }
  }
  bVar13 = false;
LAB_1479d7d30:
  if ((pAVar11 != (APlayerState *)0x0) &&
     (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
    pAVar11 = (this->PlayerState).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pAVar11->_padding_ + 0x7b0);
    pFVar8 = FText::ToString(&pAVar4->DefaultPlayerName);
    (*pcVar2)(pAVar11,pFVar8);
  }
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// InstigatedAnyDamage @ 1479d8a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::InstigatedAnyDamage
          (AController *this,float param_1,UDamageType *param_2,AActor *param_3,AActor *param_4)

{
  UFunction *pUVar1;
  float local_38 [2];
  UDamageType *local_30;
  AActor *local_28;
  AActor *local_20;
  
  local_20 = param_4;
  local_38[0] = param_1;
  local_30 = param_2;
  local_28 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ReceiveInstigatedAnyDamage)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_38);
  local_20 = param_4;
  local_38[0] = param_1;
  local_30 = param_2;
  local_28 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInstigatedAnyDamage,
             local_38);
  return;
}

// IsFollowingAPath @ 1479da490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::IsFollowingAPath(AController *this)

{
  bool bVar1;
  
  bVar1 = FNavigationSystem::IsFollowingAPath((AController *)&this[-1]._padding_);
  return bVar1;
}

// IsInState @ 1479da520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::IsInState(AController *this,FName param_1)

{
  return this->StateName == param_1;
}

// IsLocalController @ 1479da550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::IsLocalController(AController *this)

{
  ENetMode EVar1;
  
  EVar1 = AActor::InternalGetNetMode((AActor *)this);
  if ((EVar1 != NM_Standalone) && ((EVar1 != NM_Client || ((char)this->_padding_ != '\x02')))) {
    if ((char)this->_padding_ != '\x02') {
      return (char)this->_padding_ == '\x03';
    }
    return false;
  }
  return true;
}

// IsLookInputIgnored @ 1479da5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::IsLookInputIgnored(AController *this)

{
  return this->IgnoreLookInput != '\0';
}

// IsMoveInputIgnored @ 1479da5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::IsMoveInputIgnored(AController *this)

{
  return this->IgnoreMoveInput != '\0';
}

// IsValidControlRotation @ 1479da940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::IsValidControlRotation(AController *this,TRotator<double> *param_1)

{
  double _X;
  double _X_00;
  double _X_01;
  int iVar1;
  double dVar2;
  
  _X = param_1->Pitch;
  iVar1 = _finite(_X);
  if (iVar1 != 0) {
    _X_00 = param_1->Yaw;
    iVar1 = _finite(_X_00);
    if (iVar1 != 0) {
      _X_01 = param_1->Roll;
      iVar1 = _finite(_X_01);
      if (((iVar1 != 0) &&
          (dVar2 = (double)UE::Gameplay::CVars::InvalidControlRotationMagnitude,
          (double)CONCAT44((uint)((ulonglong)_X >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(_X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar2)) &&
         ((double)CONCAT44((uint)((ulonglong)_X_00 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(_X_00,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar2))
      {
        return (double)CONCAT44((uint)((ulonglong)_X_01 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(_X_01,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
               dVar2;
      }
    }
  }
  return false;
}

// K2_DestroyActor @ 1479daa10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::K2_DestroyActor(AController *this)

{
  return;
}

// K2_GetPawn @ 1479daa20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall AController::K2_GetPawn(AController *this)

{
  APawn *pAVar1;
  
  pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pAVar1 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  return pAVar1;
}

// LineOfSightTo @ 1479daad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
AController::LineOfSightTo(AController *this,AActor *param_1,TVector<double> *param_2,bool param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  APawn *pAVar4;
  USceneComponent *pUVar5;
  bool bVar6;
  FName *pFVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  undefined7 in_register_00000089;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStackY_1b8 [32];
  float local_158 [2];
  TVector<double>_u_0 local_150;
  undefined1 local_138 [8];
  TStatId local_130;
  FName local_128;
  undefined1 local_120 [16];
  double local_110;
  TVector<double> local_108;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_1 == (AActor *)0x0) {
    return false;
  }
  if ((((param_2->field0_0x0)._s_0.X == 0.0) && ((param_2->field0_0x0)._s_0.Y == 0.0)) &&
     ((param_2->field0_0x0)._s_0.Z == 0.0)) {
    (**(code **)(this->_padding_ + 0x720))
              (0,param_2,local_120,CONCAT71(in_register_00000089,param_3));
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_LineOfSight =
         (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_AController::LineOfSightTo(AActor_const_*,UE::Math::TVector<double>,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_LineOfSight>
          )0x0;
    pFVar7 = ::FName::FName(&local_128,"LineOfSight");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_LineOfSight,*pFVar7,L"LineOfSight",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_130.StatIdPtr = (TStatIdData *)StatPtr_LineOfSight;
  if (StatPtr_LineOfSight ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_AController::LineOfSightTo(AActor_const_*,UE::Math::TVector<double>,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_LineOfSight>
       )0x0) {
    pFVar7 = ::FName::FName(&local_128,"LineOfSight");
    local_130.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_LineOfSight,*pFVar7,L"LineOfSight",
                    "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64
                    ,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"LineOfSight");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_e8,::StaticName,&local_130,true,param_1);
  pAVar4 = (this->Pawn).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  FCollisionQueryParams::AddIgnoredActor(&local_e8,(AActor *)pAVar4);
  (**(code **)(param_1->_padding_ + 0x728))(param_1,&local_108,(this->Pawn).field0_0x0.DebugPtr);
  pUVar8 = AActor::GetWorld((AActor *)this);
  bVar6 = UWorld::LineTraceTestByChannel
                    (pUVar8,param_2,&local_108,ECC_Visibility,&local_e8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (!bVar6) {
    bVar6 = true;
    goto LAB_1479dae46;
  }
  pUVar9 = Z_Construct_UClass_APawn_NoRegister();
  iVar2 = (int)pUVar9->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar9->_padding_)) {
    pUVar5 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar5 != (USceneComponent *)0x0) {
      pUVar9 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
      lVar3 = pUVar5->_padding_;
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar9->_padding_)) goto LAB_1479dad03;
    }
  }
  else {
LAB_1479dad03:
    pUVar5 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar5 == (USceneComponent *)0x0) {
      uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar15 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      local_150._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(pUVar5->ComponentToWorld).Translation.XY.m128d_f64;
      uVar14 = auVar1._8_4_;
      uVar15 = auVar1._12_4_;
      local_150._s_0.Z = (pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
      uVar12 = auVar1._0_8_;
    }
    dVar11 = local_150._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    dVar10 = (double)CONCAT44(uVar15,uVar14) - (param_2->field0_0x0)._s_0.Y;
    dVar13 = (double)uVar12 - (param_2->field0_0x0)._s_0.X;
    fVar16 = (float)(dVar10 * dVar10 + dVar13 * dVar13 + dVar11 * dVar11);
    if (fVar16 <= ___real_4c742400) {
      pUVar9 = Z_Construct_UClass_APawn_NoRegister();
      iVar2 = (int)pUVar9->_padding_;
      if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar9->_padding_)) || (fVar16 <= __real_4a742400)) {
        (**(code **)(param_1->_padding_ + 0x688))(param_1,local_138,local_158);
        pUVar8 = AActor::GetWorld((AActor *)this);
        pUVar5 = (param_1->RootComponent).field0_0x0.DebugPtr;
        local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_150._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_150._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (pUVar5 != (USceneComponent *)0x0) {
          local_110 = (pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
          local_150._s_0.X = (pUVar5->ComponentToWorld).Translation.XY.m128d_f64[0];
          local_150._s_0.Y = (pUVar5->ComponentToWorld).Translation.XY.m128d_f64[1];
        }
        local_150._s_0.Z = (double)local_158[0] + local_110;
        bVar6 = UWorld::LineTraceTestByChannel
                          (pUVar8,param_2,(TVector<double> *)&local_150._s_0,ECC_Visibility,
                           &local_e8,&FCollisionResponseParams::DefaultResponseParam);
        bVar6 = !bVar6;
        goto LAB_1479dae46;
      }
    }
  }
  bVar6 = false;
LAB_1479dae46:
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar6;
}

// OnPossess @ 1479dc3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::OnPossess(AController *this,APawn *param_1)

{
  APawn *pAVar1;
  AController *pAVar2;
  code *pcVar3;
  bool bVar4;
  FName local_res8;
  FString local_48;
  TRotator<double> local_38;
  
  pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pAVar1 != (APawn *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
      goto LAB_1479dc3e5;
    }
LAB_1479dc425:
    bVar4 = param_1 == (APawn *)0x0;
  }
  else {
    if (pAVar1 == (APawn *)0x0) goto LAB_1479dc425;
LAB_1479dc3e5:
    bVar4 = pAVar1 == param_1;
  }
  if (!bVar4) {
    pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pAVar1 == (APawn *)0x0) goto LAB_1479dc43f;
    }
    else {
      if (pAVar1 == (APawn *)0x0) goto LAB_1479dc43f;
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    UnPossess(this);
  }
LAB_1479dc43f:
  if (param_1 != (APawn *)0x0) {
    pAVar2 = (param_1->Controller).field0_0x0.DebugPtr;
    if (pAVar2 != (AController *)0x0) {
      if ((2 < (byte)LogController._0_1_) && (pAVar2 == this)) {
        local_res8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res8,(FString *)&local_38);
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogController);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((void *)local_38.Pitch != (void *)0x0) {
          FMemory::Free((void *)local_38.Pitch);
        }
      }
      UnPossess((param_1->Controller).field0_0x0.DebugPtr);
    }
    (**(code **)(param_1->_padding_ + 0x7e8))(param_1,this);
    (**(code **)(this->_padding_ + 0x7d8))(this,param_1);
    pcVar3 = *(code **)(this->_padding_ + 0x7b0);
    AActor::GetActorRotation((AActor *)(this->Pawn).field0_0x0.DebugPtr,&local_38);
    (*pcVar3)(this);
    APawn::DispatchRestart((this->Pawn).field0_0x0.DebugPtr,false);
  }
  return;
}

// OnRep_Pawn @ 1479dc830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::OnRep_Pawn(AController *this)

{
  APawn *pAVar1;
  TObjectPtr<APawn>_u_0 this_00;
  bool bVar2;
  FWeakObjectPtr local_res8;
  APawn *local_res10;
  TObjectPtr<APawn>_u_0 local_28;
  APawn *local_20;
  
  this_00.DebugPtr = (APawn *)FWeakObjectPtr::Get(&(this->OldPawn).WeakPtr);
  if ((this_00.DebugPtr != (APawn *)0x0) &&
     (((pAVar1 = (this->Pawn).field0_0x0.DebugPtr, pAVar1 == (APawn *)0x0 ||
       (pAVar1 != this_00.DebugPtr)) &&
      (((this_00.DebugPtr)->Controller).field0_0x0.DebugPtr == this)))) {
    APawn::SetController(this_00.DebugPtr,(AController *)0x0);
    if (UE::Gameplay::CVars::bAlwaysNotifyClientOnControllerChange != false) {
      (**(code **)((this_00.DebugPtr)->_padding_ + 0x7a8))();
    }
  }
  pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pAVar1 != (APawn *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->OldPawn).WeakPtr = local_res8;
  (**(code **)(this->_padding_ + 0x7d8))(this,(this->Pawn).field0_0x0.DebugPtr);
  local_20 = (this->Pawn).field0_0x0.DebugPtr;
  if (local_20 == (APawn *)0x0) {
    bVar2 = this_00.DebugPtr == (APawn *)0x0;
  }
  else {
    bVar2 = local_20 == this_00.DebugPtr;
  }
  if (!bVar2) {
    local_28.DebugPtr = this_00.DebugPtr;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPossessedPawnChanged
               ,&local_28);
  }
  return;
}

// OnRep_PlayerState @ 1479dc970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::OnRep_PlayerState(AController *this)

{
  APlayerState *pAVar1;
  
  pAVar1 = (this->PlayerState).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479dc982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pAVar1->_padding_ + 0x788))(pAVar1,this);
    return;
  }
  return;
}

// OnUnPossess @ 1479dca30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::OnUnPossess(AController *this)

{
  APawn *pAVar1;
  
  pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
  if (pAVar1 != (APawn *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x7f0))();
                    /* WARNING: Could not recover jumptable at 0x0001479dca5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x7d8))(this,0);
    return;
  }
  return;
}

// PawnPendingDestroy @ 1479dd800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::PawnPendingDestroy(AController *this,APawn *param_1)

{
  APawn *pAVar1;
  code *pcVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  bool bVar4;
  FName local_res8;
  FString local_18;
  
  FVar3 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res8.Number = 0;
  local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if ((this->StateName == local_res8) && (4 < (byte)LogController._0_1_)) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogController);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
  if (pAVar1 == (APawn *)0x0) {
    bVar4 = param_1 == (APawn *)0x0;
  }
  else {
    bVar4 = pAVar1 == param_1;
  }
  if (bVar4) {
    UnPossess(this);
    pcVar2 = *(code **)(this->_padding_ + 0x7a0);
    FVar3 = FNameEntryId::FromValidEName((EName)&local_res8);
    local_res8.Number = 0;
    local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    (*pcVar2)(this);
    if ((this->PlayerState).field0_0x0.DebugPtr == (APlayerState *)0x0) {
      AActor::Destroy((AActor *)this,false,true);
    }
  }
  return;
}

// Possess @ 1479dd970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall AController::Possess(AController *this,APawn *param_1)

{
  FPlatformRWLock *SRWLock;
  TObjectPtr<APawn>_u_0 TVar1;
  TObjectPtr<APawn>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  FMessageLog *this_00;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FVisualLogger *this_01;
  UObject *pUVar8;
  UFunction *pUVar9;
  UWorld *pUVar10;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FString local_108;
  FName local_f8;
  FName local_f0;
  TObjectPtr<APawn>_u_0 local_e8;
  FString local_e0;
  FString local_d0;
  TObjectPtr<APawn>_u_0 local_c0;
  TObjectPtr<APawn>_u_0 local_b8;
  TSharedRef<FTokenizedMessage,1> local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FTextFormat local_70;
  FMessageLog local_60;
  
  if ((this->bCanPossessWithoutAuthority == '\0') && ((char)this->_padding_ != '\x03')) {
    ::FName::FName(&local_res8,"PIE");
    this_00 = FMessageLog::FMessageLog(&local_60,&local_res8);
    local_res18 = (FName)this->_padding_;
    pFVar5 = FText::FromName(&local_80,&local_res18);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"Controller",L"ControllerPossessAuthorityOnly",
                        L"Possess function should only be used by the network authority for {0}");
    pFVar7 = FTextFormat::FTextFormat(&local_70,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_a0,pFVar7,pFVar5);
    FMessageLog::Warning(this_00,&local_b0,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_60);
    if ((byte)LogController._0_1_ < 3) {
      return;
    }
    if (param_1 == (APawn *)0x0) {
      ::FString::FString(&local_108,L"None");
    }
    else {
      local_res20 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res20,&local_108);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogController);
    if (local_108.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
    return;
  }
  this_01 = FVisualLogger::Get();
  SRWLock = &this_01->RedirectRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pUVar8 = FVisualLogger::RedirectInternal(this_01,(UObject *)param_1,(UObject *)this);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if ((((FVisualLogger::bIsRecording != 0) && (param_1 != (APawn *)0x0)) &&
      (pUVar8 != (UObject *)0x0)) && (FVisualLogger::bIsRecording != 0)) {
    local_f8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
    local_f8.Number = *(uint *)&pUVar8->field_0x1c;
    ::FName::ToString(&local_f8,&local_d0);
    local_f0 = (FName)param_1->_padding_;
    ::FName::ToString(&local_f0,&local_e0);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)param_1,(FName *)&LogVisual.field_0x4,Log,L"Redirected \'%s\' to \'%s\'");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  TVar1 = (TObjectPtr<APawn>_u_0)(this->Pawn).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr != (APawn *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if (((TVar1.DebugPtr)->Controller).field0_0x0.DebugPtr == (AController *)0x0) {
      bVar4 = true;
      goto LAB_1479ddc49;
    }
  }
  bVar4 = false;
LAB_1479ddc49:
  (**(code **)(this->_padding_ + 0x810))(this,param_1);
  TVar2 = (TObjectPtr<APawn>_u_0)(this->Pawn).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  if ((TVar2.DebugPtr != TVar1.DebugPtr) || (bVar4)) {
    local_e8 = TVar2;
    pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ReceivePossess);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&local_e8);
    TMulticastDelegate<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnNewPawn,TVar2.DebugPtr);
    local_c0 = TVar1;
    if (bVar4) {
      local_c0.DebugPtr = (APawn *)0x0;
    }
    local_b8 = TVar2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPossessedPawnChanged
               ,&local_c0);
  }
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (bVar4) {
    pUVar10 = AActor::GetWorld((AActor *)this);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar10);
    if (bVar4) {
      if (param_1 != (APawn *)0x0) {
        bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)param_1);
        if (!bVar4) {
          return;
        }
        pUVar10 = AActor::GetWorld((AActor *)param_1);
        bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar10);
        if (!bVar4) {
          return;
        }
      }
      FObjectTrace::OutputPawnPossess((UObject *)this,(UObject *)param_1);
    }
  }
  return;
}

// PostInitializeComponents @ 1479dde90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::PostInitializeComponents(AController *this)

{
  USceneComponent *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *this_01;
  double *pdVar3;
  TRotator<double> local_48;
  undefined1 local_28 [32];
  
  AActor::PostInitializeComponents((AActor *)this);
  if ((this == (AController *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    this_01 = AActor::GetWorld((AActor *)this);
    UWorld::AddController(this_01,this);
    this_00 = (USceneComponent *)this->_padding_;
    if ((this_00 != (USceneComponent *)0x0) && (this_00->bAbsoluteRotation != '\0')) {
      pdVar3 = (double *)(**(code **)(this->_padding_ + 0x7a8))(this,local_28);
      local_48.Pitch = *pdVar3;
      local_48.Yaw = pdVar3[1];
      local_48.Roll = pdVar3[2];
      USceneComponent::SetWorldRotation(this_00,&local_48,false,(FHitResult *)0x0,None);
    }
  }
  return;
}

// ReceiveInstigatedAnyDamage @ 1479e0d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::ReceiveInstigatedAnyDamage
          (AController *this,float param_1,UDamageType *param_2,AActor *param_3,AActor *param_4)

{
  UFunction *pUVar1;
  float local_28 [2];
  UDamageType *local_20;
  AActor *local_18;
  AActor *local_10;
  
  local_10 = param_4;
  local_28[0] = param_1;
  local_20 = param_2;
  local_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ReceiveInstigatedAnyDamage)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_28);
  return;
}

// ReceivePossess @ 1479e0d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::ReceivePossess(AController *this,APawn *param_1)

{
  UFunction *pUVar1;
  APawn *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ReceivePossess);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveUnPossess @ 1479e0db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::ReceiveUnPossess(AController *this,APawn *param_1)

{
  UFunction *pUVar1;
  APawn *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ReceiveUnPossess);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// RemovePawnTickDependency @ 1479e4050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::RemovePawnTickDependency(AController *this,APawn *param_1)

{
  longlong lVar1;
  
  if (param_1 != (APawn *)0x0) {
    lVar1 = (**(code **)(param_1->_padding_ + 0x760))(param_1);
    if (lVar1 != 0) {
      FTickFunction::RemovePrerequisite
                ((FTickFunction *)(lVar1 + 0x38),(UObject *)this,(FTickFunction *)&this->_padding_);
    }
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&param_1->_padding_,(UObject *)this,
               (FTickFunction *)&this->_padding_);
  }
  return;
}

// Reset @ 1479e4c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::Reset(AController *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  AActor::Reset((AActor *)this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->StartSpot).WeakPtr = local_res8;
  return;
}

// ResetIgnoreInputFlags @ 1479e4d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::ResetIgnoreInputFlags(AController *this)

{
  (**(code **)(this->_padding_ + 0x860))();
                    /* WARNING: Could not recover jumptable at 0x0001479e4d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x878))(this);
  return;
}

// ResetIgnoreLookInput @ 1479e4d40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::ResetIgnoreLookInput(AController *this)

{
  this->IgnoreLookInput = '\0';
  return;
}

// ResetIgnoreMoveInput @ 1479e4d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::ResetIgnoreMoveInput(AController *this)

{
  this->IgnoreMoveInput = '\0';
  return;
}

// SetControlRotation @ 1479e6e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::SetControlRotation(AController *this,TRotator<double> *param_1)

{
  undefined8 _X;
  undefined8 _X_00;
  USceneComponent *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  double *pdVar9;
  undefined4 uVar10;
  uint uVar11;
  AController *pAVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  TRotator<double> *local_res10 [3];
  TRotator<double> local_88;
  undefined1 local_68 [96];
  
  local_88.Roll = param_1->Roll;
  _X = param_1->Pitch;
  _X_00 = param_1->Yaw;
  pAVar12 = this;
  iVar8 = _finite((double)_X);
  uVar10 = SUB84(pAVar12,0);
  if ((iVar8 != 0) && (iVar8 = _finite((double)_X_00), iVar8 != 0)) {
    uVar11 = SUB84(local_88.Roll,0);
    uVar13 = (ulonglong)local_88.Roll >> 0x20;
    iVar8 = _finite(local_88.Roll);
    if ((iVar8 != 0) &&
       (((dVar19 = (double)UE::Gameplay::CVars::InvalidControlRotationMagnitude,
         (double)CONCAT44((uint)((ulonglong)_X >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)_X & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar19 &&
         ((double)CONCAT44((uint)((ulonglong)_X_00 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)_X_00 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar19)) &&
        ((double)CONCAT44((uint)uVar13 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar11 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar19)))) {
      dVar34 = (this->ControlRotation).Pitch - param_1->Pitch;
      dVar36 = (this->ControlRotation).Yaw - param_1->Yaw;
      dVar3 = (this->ControlRotation).Roll - param_1->Roll;
      auVar20._8_4_ = SUB84(dVar36,0);
      auVar20._0_8_ = dVar34;
      auVar20._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      auVar21 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar21 = roundpd(in_XMM1,auVar21,3);
      dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar28._0_8_ = auVar21._0_8_ * dVar5;
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar28._8_8_ = auVar21._8_8_ * dVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar3;
      dVar34 = dVar34 - auVar28._0_8_;
      dVar36 = dVar36 - auVar28._8_8_;
      auVar21 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar21 = roundpd(auVar28,auVar21,3);
      dVar19 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar2 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar23._8_4_ = SUB84(dVar36,0);
      auVar23._0_8_ = dVar34;
      auVar23._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      dVar3 = dVar3 - auVar21._0_8_ * dVar19;
      dVar4 = 0.0 - auVar21._8_8_ * dVar2;
      uVar13 = -(ulonglong)(0.0 <= dVar34);
      uVar15 = -(ulonglong)(0.0 <= dVar36);
      auVar29._0_8_ = uVar13 & (ulonglong)dVar34;
      auVar29._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar36);
      auVar29._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar36) >> 0x20);
      dVar36 = auVar23._8_8_ + dVar6;
      uVar14 = -(ulonglong)(0.0 <= dVar3);
      uVar16 = -(ulonglong)(0.0 <= dVar4);
      auVar37._0_4_ = ~(uint)uVar13 & SUB84(dVar34 + dVar5,0);
      auVar37._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar34 + dVar5) >> 0x20);
      auVar37._8_4_ = ~(uint)uVar15 & SUB84(dVar36,0);
      auVar37._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
      auVar37 = auVar37 | auVar29;
      auVar24._8_4_ = SUB84(dVar4,0);
      auVar24._0_8_ = dVar3;
      auVar24._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar36 = auVar24._8_8_ + dVar2;
      auVar35._0_4_ = ~(uint)uVar14 & SUB84(dVar3 + dVar19,0);
      auVar35._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar3 + dVar19) >> 0x20);
      auVar35._8_4_ = ~(uint)uVar16 & SUB84(dVar36,0);
      auVar35._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
      auVar21._8_4_ = (int)((ulonglong)dVar4 & uVar16);
      auVar21._0_8_ = (ulonglong)dVar3 & uVar14;
      auVar21._12_4_ = (int)(((ulonglong)dVar4 & uVar16) >> 0x20);
      auVar35 = auVar35 | auVar21;
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar35._0_8_);
      uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar35._8_8_);
      uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar37._0_8_);
      uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar37._8_8_);
      auVar30._0_8_ = uVar14 & (ulonglong)(auVar35._0_8_ - dVar19);
      uVar13 = uVar16 & (ulonglong)(auVar35._8_8_ - dVar2);
      auVar30._8_4_ = (undefined4)uVar13;
      auVar30._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar25._0_4_ = ~(uint)uVar14 & auVar35._0_4_;
      auVar25._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar35._4_4_;
      auVar25._8_4_ = ~(uint)uVar16 & auVar35._8_4_;
      auVar25._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar35._12_4_;
      auVar30 = auVar30 | auVar25;
      auVar26._8_4_ = SUB84(__real_3f50624de0000000,0);
      auVar26._0_8_ = __real_3f50624de0000000;
      auVar26._12_4_ = (int)((ulonglong)__real_3f50624de0000000 >> 0x20);
      auVar31._0_8_ =
           (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
      auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
      auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < auVar31._8_8_);
      auVar27._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar31._0_8_);
      uVar11 = movmskpd(uVar10,auVar27);
      auVar32._0_8_ = uVar15 & (ulonglong)(auVar37._0_8_ - dVar5);
      uVar13 = uVar17 & (ulonglong)(auVar37._8_8_ - dVar6);
      auVar32._8_4_ = (undefined4)uVar13;
      auVar32._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar1._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar37._4_4_;
      auVar1._0_4_ = ~(uint)uVar15 & auVar37._0_4_;
      auVar1._8_4_ = ~(uint)uVar17 & auVar37._8_4_;
      auVar1._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar37._12_4_;
      auVar32 = auVar32 | auVar1;
      auVar33._0_8_ =
           (double)CONCAT44(auVar32._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar32._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar33._8_4_ = auVar32._8_4_ & _UNK_15061cc88;
      auVar33._12_4_ = auVar32._12_4_ & _UNK_15061cc8c;
      lVar18 = -(ulonglong)(__real_3f50624de0000000 < auVar33._8_8_);
      auVar7._8_4_ = (int)lVar18;
      auVar7._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar33._0_8_);
      auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar8 = movmskpd(iVar8,auVar7);
      if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
        return;
      }
      dVar19 = param_1->Yaw;
      (this->ControlRotation).Pitch = param_1->Pitch;
      (this->ControlRotation).Yaw = dVar19;
      this_00 = (USceneComponent *)this->_padding_;
      (this->ControlRotation).Roll = param_1->Roll;
      if (this_00 == (USceneComponent *)0x0) {
        return;
      }
      if (this_00->bAbsoluteRotation == '\0') {
        return;
      }
      pdVar9 = (double *)(**(code **)(this->_padding_ + 0x7a8))(this,local_68);
      local_88.Pitch = *pdVar9;
      local_88.Yaw = pdVar9[1];
      local_88.Roll = pdVar9[2];
      USceneComponent::SetWorldRotation(this_00,&local_88,false,(FHitResult *)0x0,None);
      return;
    }
  }
  if (GEnsureOnNANDiagnostic == 0) {
    if (::OnceOnly == false) {
      ::FString::PrintfImpl((FString *)&local_88,L"P=%f Y=%f R=%f");
      UEAsserts_Private::InternalLogNANDiagnosticMessage
                (
                L"AController::SetControlRotation attempted to apply NaN-containing or NaN-causing rotation! (%s)"
                );
      if ((void *)local_88.Pitch != (void *)0x0) {
        FMemory::Free((void *)local_88.Pitch);
      }
      ::OnceOnly = true;
    }
  }
  else {
    local_res10[0] = param_1;
    `AController::SetControlRotation'::__l13::<lambda_1>::operator()(local_res10);
  }
  return;
}

// SetIgnoreLookInput @ 1479e8a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::SetIgnoreLookInput(AController *this,bool param_1)

{
  uchar uVar1;
  int iVar2;
  
  iVar2 = (uint)param_1 * 2 + -1 + (uint)this->IgnoreLookInput;
  uVar1 = '\0';
  if (0 < iVar2) {
    uVar1 = (uchar)iVar2;
  }
  this->IgnoreLookInput = uVar1;
  return;
}

// SetIgnoreMoveInput @ 1479e8a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::SetIgnoreMoveInput(AController *this,bool param_1)

{
  uchar uVar1;
  int iVar2;
  
  iVar2 = (uint)param_1 * 2 + -1 + (uint)this->IgnoreMoveInput;
  uVar1 = '\0';
  if (0 < iVar2) {
    uVar1 = (uchar)iVar2;
  }
  this->IgnoreMoveInput = uVar1;
  return;
}

// SetInitialLocationAndRotation @ 1479e8ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::SetInitialLocationAndRotation
          (AController *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  local_48.Pitch = param_2->Pitch;
  local_48.Yaw = param_2->Yaw;
  local_48.Roll = param_2->Roll;
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  AActor::SetActorLocationAndRotation
            ((AActor *)this,(TVector<double> *)&local_28._s_0,&local_48,false,(FHitResult *)0x0,
             ResetPhysics);
                    /* WARNING: Could not recover jumptable at 0x0001479e8b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7b0))(this,param_2);
  return;
}

// SetPawn @ 1479e9c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::SetPawn(AController *this,APawn *param_1)

{
  TObjectPtr<APawn> *this_00;
  APawn *pAVar1;
  UClass *pUVar2;
  ACharacter *pAVar3;
  bool bVar4;
  
  this_00 = &this->Pawn;
  (**(code **)(this->_padding_ + 0x798))(this,(this_00->field0_0x0).DebugPtr);
  if (UE::Gameplay::CVars::bIsControllerPushBased == false) {
LAB_1479e9cc8:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this_00->field0_0x0).DebugPtr = param_1;
    pAVar1 = param_1;
  }
  else {
    pAVar1 = (this_00->field0_0x0).DebugPtr;
    if (pAVar1 == (APawn *)0x0) {
      bVar4 = param_1 == (APawn *)0x0;
    }
    else {
      bVar4 = pAVar1 == param_1;
    }
    if (!bVar4) goto LAB_1479e9cc8;
  }
  if (pAVar1 != (APawn *)0x0) {
    pUVar2 = Z_Construct_UClass_ACharacter_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar4) {
      pAVar3 = (ACharacter *)(this_00->field0_0x0).DebugPtr;
      goto LAB_1479e9d04;
    }
  }
  pAVar3 = (ACharacter *)0x0;
LAB_1479e9d04:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (ACharacter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
  }
  (this->Character).field0_0x0.DebugPtr = pAVar3;
  (**(code **)(this->_padding_ + 0x780))(this,(this_00->field0_0x0).DebugPtr);
                    /* WARNING: Could not recover jumptable at 0x0001479e9d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x790))(this,(this_00->field0_0x0).DebugPtr);
  return;
}

// SetPawnFromRep @ 1479e9d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::SetPawnFromRep(AController *this,APawn *param_1)

{
  APawn *pAVar1;
  bool bVar2;
  
  (**(code **)(this->_padding_ + 0x798))(this,(this->Pawn).field0_0x0.DebugPtr);
  if (UE::Gameplay::CVars::bIsControllerPushBased != false) {
    pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
    if (pAVar1 == (APawn *)0x0) {
      bVar2 = param_1 == (APawn *)0x0;
    }
    else {
      bVar2 = pAVar1 == param_1;
    }
    if (bVar2) goto LAB_1479e9dc1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Pawn).field0_0x0.DebugPtr = param_1;
LAB_1479e9dc1:
                    /* WARNING: Could not recover jumptable at 0x0001479e9dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7c8))(this);
  return;
}

// SetPawn_Direct @ 1479e9de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::SetPawn_Direct(AController *this,APawn *param_1)

{
  APawn *pAVar1;
  bool bVar2;
  
  if (UE::Gameplay::CVars::bIsControllerPushBased) {
    pAVar1 = (this->Pawn).field0_0x0.DebugPtr;
    if (pAVar1 == (APawn *)0x0) {
      bVar2 = param_1 == (APawn *)0x0;
    }
    else {
      bVar2 = pAVar1 == param_1;
    }
    if (bVar2) {
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Pawn).field0_0x0.DebugPtr = param_1;
  return;
}

// SetPlayerState @ 1479e9eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::SetPlayerState(AController *this,APlayerState *param_1)

{
  APlayerState *pAVar1;
  bool bVar2;
  
  if (UE::Gameplay::CVars::bIsControllerPushBased) {
    pAVar1 = (this->PlayerState).field0_0x0.DebugPtr;
    if (pAVar1 == (APlayerState *)0x0) {
      bVar2 = param_1 == (APlayerState *)0x0;
    }
    else {
      bVar2 = pAVar1 == param_1;
    }
    if (bVar2) {
      return;
    }
  }
  (this->PlayerState).field0_0x0.DebugPtr = param_1;
  return;
}

// ShouldParticipateInSeamlessTravel @ 1479edc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::ShouldParticipateInSeamlessTravel(AController *this)

{
  return (this->PlayerState).field0_0x0.DebugPtr != (APlayerState *)0x0;
}

// ShouldPostponePathUpdates @ 1479edcb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::ShouldPostponePathUpdates(AController *this)

{
  undefined1 uVar1;
  
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479edcc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(this->_padding_ + 0x2c0) + 0x40))();
    return (bool)uVar1;
  }
  return false;
}

// StaticRegisterNativesAController @ 1479edda0

void __cdecl AController::StaticRegisterNativesAController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x19;
  local_18.DataPtr = Z_Construct_UClass_AController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopMovement @ 1479ee1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::StopMovement(AController *this)

{
  longlong *plVar1;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.StopMovement,&FStack_28);
  plVar1 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.StopMovement._16_4_ != 0) {
    plVar1 = (longlong *)FNavigationSystem::Delegates.StopMovement._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// UnPossess @ 1479ef9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AController::UnPossess(AController *this)

{
  TObjectPtr<APawn>_u_0 TVar1;
  APawn *pAVar2;
  bool bVar3;
  UFunction *pUVar4;
  UWorld *pUVar5;
  TObjectPtr<APawn>_u_0 local_res8;
  TObjectPtr<APawn>_u_0 local_18;
  APawn *local_10;
  
  TVar1 = (TObjectPtr<APawn>_u_0)(this->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr == (APawn *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  else if (TVar1.DebugPtr == (APawn *)0x0) {
    return;
  }
  (**(code **)(this->_padding_ + 0x818))(this);
  pAVar2 = (this->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1479efa27:
    if (pAVar2 == TVar1.DebugPtr) goto LAB_1479efa82;
  }
  else if (pAVar2 != (APawn *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
    goto LAB_1479efa27;
  }
  local_res8 = TVar1;
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_AController_ReceiveUnPossess);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_res8);
  TMulticastDelegate<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnNewPawn,pAVar2);
  local_18 = TVar1;
  local_10 = pAVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPossessedPawnChanged,
             &local_18);
LAB_1479efa82:
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (bVar3) {
    pUVar5 = AActor::GetWorld((AActor *)this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (bVar3) {
      FObjectTrace::OutputPawnPossess((UObject *)this,(UObject *)0x0);
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 1479f4ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::ValidateGeneratedRepEnums
          (AController *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
    ::FName::FName(&Name_PlayerState,L"PlayerState");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_Pawn,L"Pawn");
    _Init_thread_footer(&::_TSS1);
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
  if (Name_PlayerState == FVar4) {
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
    if (bVar3) {
      FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_Pawn == FVar6) {
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\Controller.gen.cpp"
                     ,0x796,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AController"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// _getUObject @ 1479f69b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall AController::_getUObject(AController *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execClientSetLocation @ 1479f72c0

void __cdecl AController::execClientSetLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48 = local_78;
  uStack_40 = uStack_70;
  local_38 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_50;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x770))(param_1,&local_28,&local_48);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ClientSetLocation_Validate");
  }
  else {
    local_28 = local_78;
    uStack_20 = uStack_70;
    local_18 = local_68;
    local_38 = local_50;
    (**(code **)(*(longlong *)param_1 + 0x778))(param_1,&local_48,&local_28);
  }
  return;
}

// execClientSetRotation @ 1479f7400

void __cdecl AController::execClientSetRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  bVar3 = local_res8[0] != 0;
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x760))(param_1,&local_28,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ClientSetRotation_Validate");
  }
  else {
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    local_18 = local_38;
    (**(code **)(*(longlong *)param_1 + 0x768))(param_1,&local_28,bVar3);
  }
  return;
}

// execGetControlRotation @ 1479f9f40

void __cdecl AController::execGetControlRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x7a8))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetDesiredRotation @ 1479fa180

void __cdecl AController::execGetDesiredRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x7e8))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetPlayerViewPoint @ 1479fd240

void __cdecl AController::execGetPlayerViewPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_38 [24];
  uchar local_20 [24];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar2 = local_38;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  puVar3 = local_20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x840))(param_1,puVar2,puVar3);
  return;
}

// execGetViewTarget @ 147a02550

void __cdecl AController::execGetViewTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7e0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execIsLocalController @ 147a02eb0

void __cdecl AController::execIsLocalController(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7f0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsLocalPlayerController @ 147a02ef0

void __cdecl
AController::execIsLocalPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x15].field_0x20 & 2) != 0) {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0x7f0))();
    if (cVar1 != '\0') {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsLookInputIgnored @ 147a02f40

void __cdecl AController::execIsLookInputIgnored(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x880))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsMoveInputIgnored @ 147a02f80

void __cdecl AController::execIsMoveInputIgnored(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x868))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsPlayerController @ 147a02fc0

void __cdecl AController::execIsPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x15].field_0x20 >> 1 & 1;
  return;
}

// execK2_GetPawn @ 147a030b0

void __cdecl AController::execK2_GetPawn(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = *(UObject **)&param_1[0x13].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(UObject **)param_3 = pUVar1;
  return;
}

// execLineOfSightTo @ 147a031d0

void __cdecl AController::execLineOfSightTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
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
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  local_28 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7c0))
                    (param_1,local_res10,&local_38,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execOnRep_Pawn @ 147a03350

void __cdecl AController::execOnRep_Pawn(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147a03368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7c8))();
  return;
}

// execOnRep_PlayerState @ 147a03380

void __cdecl AController::execOnRep_PlayerState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147a03398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 2000))();
  return;
}

// execPossess @ 147a036a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AController::execPossess(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APawn *local_res10;
  
  local_res10 = (APawn *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Possess((AController *)param_1,local_res10);
  return;
}

// execResetIgnoreInputFlags @ 147a03ad0

void __cdecl AController::execResetIgnoreInputFlags(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147a03ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x888))();
  return;
}

// execResetIgnoreLookInput @ 147a03b00

void __cdecl AController::execResetIgnoreLookInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147a03b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x878))();
  return;
}

// execResetIgnoreMoveInput @ 147a03b30

void __cdecl AController::execResetIgnoreMoveInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147a03b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x860))();
  return;
}

// execSetControlRotation @ 147a04290

void __cdecl AController::execSetControlRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x7b0))(param_1,puVar2);
  return;
}

// execSetIgnoreLookInput @ 147a062c0

void __cdecl AController::execSetIgnoreLookInput(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x870))(param_1,local_res8[0] != 0);
  return;
}

// execSetIgnoreMoveInput @ 147a06360

void __cdecl AController::execSetIgnoreMoveInput(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x858))(param_1,local_res8[0] != 0);
  return;
}

// execSetInitialLocationAndRotation @ 147a064c0

void __cdecl
AController::execSetInitialLocationAndRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_38 [24];
  uchar local_20 [24];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar2 = local_38;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  puVar3 = local_20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x7b8))(param_1,puVar2,puVar3);
  return;
}

// execStopMovement @ 147a0b5f0

void __cdecl AController::execStopMovement(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147a0b608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x850))();
  return;
}

// execUnPossess @ 147a0b690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AController::execUnPossess(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnPossess((AController *)param_1);
  return;
}

// IsLocalPlayerController @ 147bf1030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AController::IsLocalPlayerController(AController *this)

{
  char cVar1;
  
  if (this->bIsPlayerController != '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x7f0))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// TickActor @ 147ee27f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AController::TickActor
          (AController *this,float param_1,ELevelTick param_2,FActorTickFunction *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != LEVELTICK_ViewportsOnly) {
    if ((this == (AController *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
      (**(code **)(this->_padding_ + 0x518))(this,param_1);
    }
  }
  return;
}

// operator() @ 150516030

bool __thiscall `AController::SetControlRotation'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1355841456459219076>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"P=%f Y=%f R=%f");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1355841456459219076>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505160bc;
    }
  }
  bVar2 = false;
LAB_1505160bc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

