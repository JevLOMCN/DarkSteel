// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// CachePreAnimatedValue @ 1468ac670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPreAnimatedCameraCutState * __cdecl
UE::MovieScene::FPreAnimatedCameraCutTraits::CachePreAnimatedValue
          (FPreAnimatedCameraCutState *__return_storage_ptr__,UObject *param_1,uchar param_2)

{
  char cVar1;
  APlayerCameraManager *this;
  ULocalPlayer *pUVar2;
  APlayerController *this_00;
  ULocalPlayer *pUVar3;
  ULocalPlayer *pUVar4;
  EAspectRatioAxisConstraint EVar5;
  bool bVar6;
  FWeakObjectPtr local_res10;
  ULocalPlayer *local_res20;
  
  if ((((param_1 == (UObject *)0x0) ||
       (pUVar2 = (ULocalPlayer *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1),
       pUVar2 == (ULocalPlayer *)0x0)) || ((pUVar2->SlateOperations)._padding_ == 0)) ||
     ((cVar1 = (pUVar2->SubsystemCollection).field_0x2a, cVar1 == '\x02' || (cVar1 == '\x04')))) {
    *(undefined8 *)&(__return_storage_ptr__->LastViewTarget).ObjectSerialNumber = 0;
    *(undefined2 *)&(__return_storage_ptr__->LastAspectRatioAxisConstraint).field_0x5 = 0;
    (__return_storage_ptr__->LastAspectRatioAxisConstraint).field_0x7 = 0;
    (__return_storage_ptr__->LastWorld).ObjectIndex = 0;
    (__return_storage_ptr__->LastWorld).ObjectSerialNumber = 0;
    (__return_storage_ptr__->LastLocalPlayer).ObjectIndex = 0;
    (__return_storage_ptr__->LastLocalPlayer).ObjectSerialNumber = 0;
    (__return_storage_ptr__->LastViewTarget).ObjectIndex = 0;
    (__return_storage_ptr__->LastAspectRatioAxisConstraint).bIsSet = false;
    return __return_storage_ptr__;
  }
  this_00 = GetPlaybackController(param_1);
  pUVar4 = (ULocalPlayer *)0x0;
  if ((this_00 == (APlayerController *)0x0) ||
     (this = (this_00->PlayerCameraManager).field0_0x0.DebugPtr, this == (APlayerCameraManager *)0x0
     )) {
    pUVar3 = pUVar4;
    if (this_00 != (APlayerController *)0x0) goto LAB_1468ac708;
  }
  else {
    pUVar3 = (ULocalPlayer *)APlayerCameraManager::GetViewTarget(this);
LAB_1468ac708:
    pUVar4 = APlayerController::GetLocalPlayer(this_00);
    if (pUVar4 != (ULocalPlayer *)0x0) {
      bVar6 = true;
      EVar5 = (uint)(pUVar4->AspectRatioAxisConstraint).Value;
      goto LAB_1468ac733;
    }
  }
  bVar6 = false;
  EVar5 = local_res10.ObjectIndex;
LAB_1468ac733:
  (__return_storage_ptr__->LastWorld).ObjectIndex = 0;
  (__return_storage_ptr__->LastWorld).ObjectSerialNumber = 0;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar2;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  (__return_storage_ptr__->LastWorld).ObjectIndex = local_res10.ObjectIndex;
  (__return_storage_ptr__->LastWorld).ObjectSerialNumber = local_res10.ObjectSerialNumber;
  (__return_storage_ptr__->LastLocalPlayer).ObjectIndex = 0;
  (__return_storage_ptr__->LastLocalPlayer).ObjectSerialNumber = 0;
  if (pUVar4 != (ULocalPlayer *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = pUVar4;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    (__return_storage_ptr__->LastLocalPlayer).ObjectIndex = local_res10.ObjectIndex;
    (__return_storage_ptr__->LastLocalPlayer).ObjectSerialNumber = local_res10.ObjectSerialNumber;
  }
  (__return_storage_ptr__->LastViewTarget).ObjectIndex = 0;
  (__return_storage_ptr__->LastViewTarget).ObjectSerialNumber = 0;
  if (pUVar3 != (ULocalPlayer *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = pUVar3;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    (__return_storage_ptr__->LastViewTarget).ObjectIndex = local_res10.ObjectIndex;
    (__return_storage_ptr__->LastViewTarget).ObjectSerialNumber = local_res10.ObjectSerialNumber;
  }
  (__return_storage_ptr__->LastAspectRatioAxisConstraint).bIsSet = bVar6;
  if (bVar6 != false) {
    (__return_storage_ptr__->LastAspectRatioAxisConstraint).TypedValue = EVar5;
  }
  return __return_storage_ptr__;
}

// RestorePreAnimatedValue @ 1468cc060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedCameraCutTraits::RestorePreAnimatedValue
          (FPreAnimatedCameraCutTraits *this,uchar param_1,FPreAnimatedCameraCutState *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  int iVar2;
  APlayerCameraManager *pAVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UPlayer *this_00;
  APlayerController *this_01;
  UObject *pUVar6;
  ULocalPlayer *pUVar7;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  local_res18[0].ObjectIndex = (param_2->LastWorld).ObjectIndex;
  local_res18[0].ObjectSerialNumber = (param_2->LastWorld).ObjectSerialNumber;
  pUVar4 = (UWorld *)FWeakObjectPtr::Get(local_res18);
  if (pUVar4 == (UWorld *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if (*(int *)(pUVar4->_padding_ + 0x38) < iVar2) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  if ((pUVar4->OwningGameInstance).field0_0x0.DebugPtr == (UGameInstance *)0x0) {
    return;
  }
  uVar1 = (pUVar4->WorldType).Value;
  if (uVar1 == '\x02') {
    return;
  }
  if (uVar1 == '\x04') {
    return;
  }
  local_58.ObjectIndex = (param_2->LastLocalPlayer).ObjectIndex;
  local_58.ObjectSerialNumber = (param_2->LastLocalPlayer).ObjectSerialNumber;
  this_00 = (UPlayer *)FWeakObjectPtr::Get(&local_58);
  if (this_00 != (UPlayer *)0x0) {
    pUVar5 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if (((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar5->_padding_)) &&
       (this_01 = UPlayer::GetPlayerController(this_00,pUVar4), this_01 != (APlayerController *)0x0)
       ) {
      pAVar3 = (this_01->PlayerCameraManager).field0_0x0.DebugPtr;
      if (pAVar3 != (APlayerCameraManager *)0x0) {
        local_50.ObjectIndex = (param_2->LastViewTarget).ObjectIndex;
        local_50.ObjectSerialNumber = (param_2->LastViewTarget).ObjectSerialNumber;
        pUVar6 = FWeakObjectPtr::Get(&local_50);
        if (pUVar6 == (UObject *)0x0) {
LAB_1468cc1b1:
          pUVar6 = (UObject *)0x0;
        }
        else {
          pUVar5 = Z_Construct_UClass_AActor_NoRegister();
          iVar2 = (int)pUVar5->_padding_;
          if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar5->_padding_)) goto LAB_1468cc1b1;
        }
        uStack_2c = uStack_2c & 0xfffffffe;
        local_38 = 0;
        uStack_34 = CONCAT31(uStack_34._1_3_,1);
        uStack_30 = 0x40000000;
        local_28 = 0;
        uStack_24 = uStack_34;
        uStack_20 = 0x40000000;
        uStack_1c = uStack_2c;
        (**(code **)(pAVar3->_padding_ + 0x898))(pAVar3,pUVar6,&local_28);
        pAVar3->bClientSimulatingViewTarget = 0;
      }
      pUVar7 = APlayerController::GetLocalPlayer(this_01);
      goto LAB_1468cc256;
    }
  }
  local_48[0].ObjectIndex = (param_2->LastLocalPlayer).ObjectIndex;
  local_48[0].ObjectSerialNumber = (param_2->LastLocalPlayer).ObjectSerialNumber;
  pUVar7 = (ULocalPlayer *)FWeakObjectPtr::Get(local_48);
  if (pUVar7 != (ULocalPlayer *)0x0) {
    pUVar5 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) goto LAB_1468cc256;
  }
  pUVar7 = (ULocalPlayer *)0x0;
LAB_1468cc256:
  if ((pUVar7 != (ULocalPlayer *)0x0) && ((param_2->LastAspectRatioAxisConstraint).bIsSet != false))
  {
    (pUVar7->AspectRatioAxisConstraint).Value =
         (char)(param_2->LastAspectRatioAxisConstraint).TypedValue;
  }
  return;
}

// ShouldHandleWorldCameraCuts @ 1468cfd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::MovieScene::FPreAnimatedCameraCutTraits::ShouldHandleWorldCameraCuts(UWorld *param_1)

{
  uchar uVar1;
  
  if ((((param_1 != (UWorld *)0x0) &&
       ((param_1->OwningGameInstance).field0_0x0.DebugPtr != (UGameInstance *)0x0)) &&
      (uVar1 = (param_1->WorldType).Value, uVar1 != '\x02')) && (uVar1 != '\x04')) {
    return true;
  }
  return false;
}

