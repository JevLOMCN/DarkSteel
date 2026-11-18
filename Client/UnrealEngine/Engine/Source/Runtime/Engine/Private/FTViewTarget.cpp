// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 148337550

UScriptStruct * __cdecl FTViewTarget::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTViewTarget.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTViewTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTViewTarget,(UObject *)pUVar1,L"TViewTarget");
  }
  return Z_Registration_Info_UScriptStruct_FTViewTarget.OuterSingleton;
}

// operator= @ 14834e5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTViewTarget * __thiscall FTViewTarget::operator=(FTViewTarget *this,FTViewTarget *param_1)

{
  AActor *pAVar1;
  APlayerState *pAVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pAVar1 = (param_1->Target).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->Target).field0_0x0 = (param_1->Target).field0_0x0;
  FMinimalViewInfo::operator=(&this->POV,&param_1->POV);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar2 = (param_1->PlayerState).field0_0x0.DebugPtr, pAVar2 != (APlayerState *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  (this->PlayerState).field0_0x0 = (param_1->PlayerState).field0_0x0;
  return this;
}

// CheckViewTarget @ 148362e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FTViewTarget::CheckViewTarget(FTViewTarget *this,APlayerController *param_1)

{
  int iVar1;
  AActor *pAVar2;
  APlayerState *pAVar3;
  longlong lVar4;
  UObject *pUVar5;
  APlayerCameraManager *pAVar6;
  code *pcVar7;
  bool bVar8;
  APlayerController *pAVar9;
  UClass *pUVar10;
  FString *pFVar11;
  APlayerState *pAVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint local_res8;
  undefined4 uStack_94;
  uint uStack_8c;
  undefined4 uStack_84;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined2 local_63;
  undefined1 local_61;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  FString local_38;
  FString local_28;
  
  pwVar14 = L"";
  if ((param_1 == (APlayerController *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningController",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerCameraManager.cpp"
                         ,0x5b1,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar9 = (APlayerController *)(this->Target).field0_0x0.DebugPtr;
  if (pAVar9 == (APlayerController *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Target).field0_0x0.DebugPtr = (AActor *)param_1;
    pAVar9 = param_1;
    if (param_1 != (APlayerController *)0x0) goto LAB_148362e6c;
    bVar8 = true;
  }
  else {
LAB_148362e6c:
    bVar8 = pAVar9 == param_1;
  }
  if (bVar8) {
LAB_1483630cb:
    (this->PlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
LAB_1483630d2:
    if (param_1 == (APlayerController *)0x0) {
      return;
    }
  }
  else {
    if (pAVar9 == (APlayerController *)0x0) {
LAB_148362ec6:
      if ((this->Target).field0_0x0.DebugPtr != (AActor *)0x0) {
        pUVar10 = Z_Construct_UClass_APawn_NoRegister();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
        if ((bVar8) && (pAVar2 = (this->Target).field0_0x0.DebugPtr, pAVar2 != (AActor *)0x0)) {
          pAVar12 = (APlayerState *)pAVar2[1]._padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar12 != (APlayerState *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar12);
          }
          goto LAB_148362f09;
        }
        if ((this->Target).field0_0x0.DebugPtr != (AActor *)0x0) {
          pUVar10 = APlayerState::StaticClass();
          bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
          if ((bVar8) &&
             (pAVar12 = (APlayerState *)(this->Target).field0_0x0.DebugPtr,
             pAVar12 != (APlayerState *)0x0)) {
            (this->PlayerState).field0_0x0.ObjectPtr.field0_0x0.Handle = (UObject *)pAVar12;
            goto LAB_148362f55;
          }
        }
      }
      goto LAB_1483630cb;
    }
    pUVar10 = Z_Construct_UClass_AController_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
    if ((!bVar8) || (pAVar2 = (this->Target).field0_0x0.DebugPtr, pAVar2 == (AActor *)0x0))
    goto LAB_148362ec6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)pAVar2[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar2[1]._padding_);
    }
    pAVar12 = (APlayerState *)pAVar2[1]._padding_;
LAB_148362f09:
    (this->PlayerState).field0_0x0.DebugPtr = pAVar12;
    if (pAVar12 == (APlayerState *)0x0) goto LAB_1483630d2;
LAB_148362f55:
    if (((uint)pAVar12->_padding_ >> 0x1e & 1) != 0) goto LAB_1483630d2;
    pAVar2 = (this->Target).field0_0x0.DebugPtr;
    if (((pAVar2 != (AActor *)0x0) && (((uint)pAVar2->_padding_ >> 0x1e & 1) == 0)) &&
       ((this->Target).field0_0x0.DebugPtr != (AActor *)0x0)) {
      pUVar10 = Z_Construct_UClass_APawn_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
      if ((bVar8) && ((this->Target).field0_0x0.DebugPtr != (AActor *)0x0)) {
        pUVar10 = Z_Construct_UClass_APawn_NoRegister();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
        if ((!bVar8) || (pAVar2 = (this->Target).field0_0x0.DebugPtr, pAVar2 == (AActor *)0x0)) {
          pFVar11 = GetTypeName<APawn>(&local_38);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          pFVar11 = GetFullNameForCastLogError<AActor>(&local_28,(this->Target).field0_0x0.DebugPtr)
          ;
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar14,pwVar13);
        }
        pAVar12 = (APlayerState *)pAVar2[1]._padding_;
        pAVar3 = (this->PlayerState).field0_0x0.DebugPtr;
        if (pAVar3 == (APlayerState *)0x0) {
          bVar8 = pAVar12 == (APlayerState *)0x0;
        }
        else {
          bVar8 = pAVar3 == pAVar12;
        }
        if (bVar8) goto LAB_1483630d2;
      }
    }
    (this->Target).field0_0x0.DebugPtr = (AActor *)0x0;
    lVar4 = ((this->PlayerState).field0_0x0.DebugPtr)->_padding_;
    if (lVar4 == 0) goto LAB_1483630cb;
    pUVar10 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) goto LAB_1483630cb;
    pUVar5 = *(UObject **)(lVar4 + 0x310);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((((param_1 == (APlayerController *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) ||
        (pUVar5 == (UObject *)0x0)) || ((*(uint *)&pUVar5->field_0x8 >> 0x1e & 1) != 0)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar12 = (this->PlayerState).field0_0x0.DebugPtr, pAVar12 != (APlayerState *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar12);
      }
      (this->Target).field0_0x0 = (TObjectPtr<AActor>_u_0)(this->PlayerState).field0_0x0;
      goto LAB_1483630d2;
    }
    pAVar6 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
    uStack_6c = uStack_8c & 0xfffffffe;
    uStack_94 = CONCAT31(uStack_94._1_3_,1);
    local_78 = 0;
    uStack_74 = uStack_94;
    uStack_70 = 0x40000000;
    (**(code **)(pAVar6->_padding_ + 0x7b0))(pAVar6,pUVar5,this,&local_78);
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  pAVar2 = (this->Target).field0_0x0.DebugPtr;
  if ((pAVar2 != (AActor *)0x0) && (((uint)pAVar2->_padding_ >> 0x1e & 1) == 0)) {
    return;
  }
  pUVar5 = (UObject *)param_1->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UObject *)0x0) goto LAB_1483631f4;
  }
  else {
    if (pUVar5 == (UObject *)0x0) goto LAB_1483631f4;
    UE::GC::MarkAsReachable(pUVar5);
  }
  pUVar5 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  if (((pUVar5[2].field_0xd & 2) == 0) && ((*(uint *)&pUVar5->field_0x8 >> 0x1e & 1) == 0)) {
    pUVar5 = (UObject *)param_1->_padding_;
    pAVar6 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
    pcVar7 = *(code **)(pAVar6->_padding_ + 0x7b0);
    uStack_94 = CONCAT13(local_61,CONCAT21(local_63,1));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_58 = 0;
    uStack_54 = uStack_94;
    uStack_50 = 0x40000000;
    uStack_4c = local_res8 & 0xfffffffe;
    (*pcVar7)(pAVar6,pUVar5,this,&local_58);
    return;
  }
LAB_1483631f4:
  pAVar6 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
  uStack_3c = uStack_7c & 0xfffffffe;
  uStack_84 = CONCAT31(uStack_84._1_3_,1);
  local_48 = 0;
  uStack_44 = uStack_84;
  uStack_40 = 0x40000000;
  (**(code **)(pAVar6->_padding_ + 0x7b0))(pAVar6,param_1,this,&local_48);
  return;
}

// Equal @ 1483785f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FTViewTarget::Equal(FTViewTarget *this,FTViewTarget *param_1)

{
  bool bVar1;
  
  if (((this->Target).field0_0x0.DebugPtr == (param_1->Target).field0_0x0.DebugPtr) &&
     ((this->PlayerState).field0_0x0.DebugPtr == (param_1->PlayerState).field0_0x0.DebugPtr)) {
    bVar1 = FMinimalViewInfo::Equals(&this->POV,&param_1->POV);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetTargetPawn @ 14838a5b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APawn * __thiscall FTViewTarget::GetTargetPawn(FTViewTarget *this)

{
  APawn *pAVar1;
  AActor *pAVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if ((this->Target).field0_0x0.DebugPtr != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_APawn_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar4);
    if ((bVar3) && (pAVar1 = (APawn *)(this->Target).field0_0x0.DebugPtr, pAVar1 != (APawn *)0x0)) {
      return pAVar1;
    }
  }
  if ((this->Target).field0_0x0.DebugPtr != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_AController_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar4);
    if ((bVar3) && (pAVar2 = (this->Target).field0_0x0.DebugPtr, pAVar2 != (AActor *)0x0)) {
      pAVar1 = (APawn *)pAVar2[1].PrimaryActorTick.Target;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      return pAVar1;
    }
  }
  return (APawn *)0x0;
}

// SetNewTarget @ 1483a9950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FTViewTarget::SetNewTarget(FTViewTarget *this,AActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Target).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->Target).field0_0x0.DebugPtr = param_1;
  return;
}

