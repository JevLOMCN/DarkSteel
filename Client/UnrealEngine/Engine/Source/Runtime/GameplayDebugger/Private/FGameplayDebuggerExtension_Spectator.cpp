// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 5

// FGameplayDebuggerExtension_Spectator @ 146d3fd20

FGameplayDebuggerExtension_Spectator * __thiscall
FGameplayDebuggerExtension_Spectator::FGameplayDebuggerExtension_Spectator
          (FGameplayDebuggerExtension_Spectator *this)

{
  FName FVar1;
  bool bVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UGameplayDebuggerConfig *pUVar6;
  FName local_res10;
  FGameplayDebuggerInputHandlerConfig local_38;
  code *local_28;
  undefined8 uStack_20;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGameplayDebuggerExtension_Spectator__6B_;
  (this->CachedDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDescription).Data.ArrayNum = 0;
  (this->CachedDescription).Data.ArrayMax = 0;
  (this->SpectatorController).WeakPtr = (FWeakObjectPtr)0x0;
  FVar3 = FKey::GetFName(&EKeys::Tab);
  FVar3 = *(FName *)FVar3;
  pFVar4 = ::FName::FName(&local_res10,L"Toggle");
  FVar1 = *pFVar4;
  local_38.Modifier = (FGameplayDebuggerInputModifier)((uint)local_38.Modifier & 0xffffffd0 | 0x10);
  local_38.KeyName = FVar3;
  if (FGameplayDebuggerInputHandlerConfig::CurrentCategoryName == (FName)0x0) {
    if (FGameplayDebuggerInputHandlerConfig::CurrentExtensionName != (FName)0x0) {
      pUVar5 = UGameplayDebuggerConfig::StaticClass();
      pUVar6 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar5);
      UGameplayDebuggerConfig::UpdateExtensionInputConfig
                (pUVar6,FGameplayDebuggerInputHandlerConfig::CurrentExtensionName,FVar1,
                 &local_38.KeyName,&local_38.Modifier);
    }
  }
  else {
    pUVar5 = UGameplayDebuggerConfig::StaticClass();
    pUVar6 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar5);
    UGameplayDebuggerConfig::UpdateCategoryInputConfig
              (pUVar6,FGameplayDebuggerInputHandlerConfig::CurrentCategoryName,FVar1,
               &local_38.KeyName,&local_38.Modifier);
  }
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = ToggleSpectatorMode;
  bVar2 = FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerExtension_Spectator>
                    ((FGameplayDebuggerAddonBase *)this,&local_38,this,(pmf_d98c9b5a *)&local_28,
                     Local);
  this->bHasInputBinding = 0;
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | (uint)bVar2;
  return this;
}

// GetDescription @ 146d4c4b0

FString * __thiscall
FGameplayDebuggerExtension_Spectator::GetDescription
          (FGameplayDebuggerExtension_Spectator *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  FString *pFVar5;
  bool bVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (this->bIsCachedDescriptionValid == 0) {
    bVar6 = this->bHasInputBinding != 0;
    if (bVar6) {
      FWeakObjectPtr::IsValid(&(this->SpectatorController).WeakPtr);
      FGameplayDebuggerAddonBase::GetInputHandlerDescription
                ((FGameplayDebuggerAddonBase *)this,&local_38,0);
      ::FString::PrintfImpl(&local_48,L"{%s}%s:{%s}Spectator");
      pFVar5 = &local_48;
    }
    else {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      pFVar5 = &local_58;
    }
    pFVar1 = &this->CachedDescription;
    if (pFVar1 != pFVar5) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->CachedDescription).Data.ArrayNum = (pFVar5->Data).ArrayNum;
      iVar2 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
      (this->CachedDescription).Data.ArrayMax = iVar2;
    }
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
    if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((!bVar6) && (FVar4.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FVar4.Data);
    }
    this->bIsCachedDescriptionValid = 1;
  }
  ::FString::FString(__return_storage_ptr__,&this->CachedDescription);
  return __return_storage_ptr__;
}

// MakeInstance @ 146d50e60

TSharedRef<FGameplayDebuggerExtension,1> * __cdecl
FGameplayDebuggerExtension_Spectator::MakeInstance
          (TSharedRef<FGameplayDebuggerExtension,1> *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FGameplayDebuggerExtension_Spectator *this;
  FName FVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UGameplayDebuggerConfig *pUVar7;
  TSharedRef<FGameplayDebuggerExtension,1> *pTVar8;
  TRawPtrProxy<FGameplayDebuggerExtension_Spectator> local_res8 [2];
  FName local_res18 [2];
  FGameplayDebuggerInputHandlerConfig local_48;
  code *local_38;
  undefined8 uStack_30;
  
  this = ::operator_new(0x50);
  if (this == (FGameplayDebuggerExtension_Spectator *)0x0) {
    this = (FGameplayDebuggerExtension_Spectator *)0x0;
  }
  else {
    this->_padding_ = 0;
    this->_padding_ = 0;
    (((TArray<FGameplayDebuggerInputHandler,TSizedDefaultAllocator<32>_> *)&this->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->_padding_ = 0;
    ((TWeakObjectPtr<AGameplayDebuggerCategoryReplicator,FWeakObjectPtr> *)&this->_padding_)->
    WeakPtr = (FWeakObjectPtr)0x0;
    this->_padding_ = (longlong)&___7FGameplayDebuggerExtension_Spectator__6B_;
    (this->CachedDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedDescription).Data.ArrayNum = 0;
    (this->CachedDescription).Data.ArrayMax = 0;
    (this->SpectatorController).WeakPtr = (FWeakObjectPtr)0x0;
    FVar4 = FKey::GetFName(&EKeys::Tab);
    FVar4 = *(FName *)FVar4;
    pFVar5 = ::FName::FName(local_res18,L"Toggle");
    FVar1 = *pFVar5;
    local_48.Modifier =
         (FGameplayDebuggerInputModifier)((uint)local_48.Modifier & 0xffffffd0 | 0x10);
    local_48.KeyName = FVar4;
    if (FGameplayDebuggerInputHandlerConfig::CurrentCategoryName == (FName)0x0) {
      if (FGameplayDebuggerInputHandlerConfig::CurrentExtensionName != (FName)0x0) {
        pUVar6 = UGameplayDebuggerConfig::StaticClass();
        pUVar7 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar6);
        UGameplayDebuggerConfig::UpdateExtensionInputConfig
                  (pUVar7,FGameplayDebuggerInputHandlerConfig::CurrentExtensionName,FVar1,
                   &local_48.KeyName,&local_48.Modifier);
      }
    }
    else {
      pUVar6 = UGameplayDebuggerConfig::StaticClass();
      pUVar7 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar6);
      UGameplayDebuggerConfig::UpdateCategoryInputConfig
                (pUVar7,FGameplayDebuggerInputHandlerConfig::CurrentCategoryName,FVar1,
                 &local_48.KeyName,&local_48.Modifier);
    }
    uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
    local_38 = ToggleSpectatorMode;
    bVar3 = FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerExtension_Spectator>
                      ((FGameplayDebuggerAddonBase *)this,&local_48,this,(pmf_d98c9b5a *)&local_38,
                       Local);
    this->bHasInputBinding = 0;
    *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | (uint)bVar3;
    if (((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedRef<FGameplayDebuggerExtension,1> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  local_res8[0].Object = this;
  TSharedRef<FGameplayDebuggerExtension,1>::
  TSharedRef<FGameplayDebuggerExtension,1><FGameplayDebuggerExtension_Spectator>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// OnDeactivated @ 146d559c0

void __thiscall
FGameplayDebuggerExtension_Spectator::OnDeactivated(FGameplayDebuggerExtension_Spectator *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SpectatorController).WeakPtr);
  if (bVar1) {
    ToggleSpectatorMode(this);
    return;
  }
  return;
}

// ToggleSpectatorMode @ 146d5d030

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

void __thiscall
FGameplayDebuggerExtension_Spectator::ToggleSpectatorMode
          (FGameplayDebuggerExtension_Spectator *this)

{
  byte *pbVar1;
  int iVar2;
  FName FVar3;
  UPlayer *pUVar4;
  code *pcVar5;
  AActor *pAVar6;
  FNameEntryId FVar7;
  UObject *pUVar8;
  UWorld *pUVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  FGameplayDebuggerModule *this_01;
  AGameplayDebuggerPlayerManager *this_02;
  FGameplayDebuggerPlayerData *pFVar11;
  AActor *this_03;
  UClass *pUVar12;
  FWeakObjectPtr FVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FString *pFVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  UInputComponent *pUVar17;
  APlayerController *this_04;
  wchar_t *pwVar18;
  undefined1 auStackY_f8 [32];
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar8 == (UObject *)0x0) {
    this_04 = (APlayerController *)0x0;
  }
  else {
    this_04 = *(APlayerController **)&pUVar8[0x11].field_0x18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_04 != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_04);
    }
  }
  pUVar9 = AActor::GetWorld((AActor *)this_04);
  pFVar10 = ::FName::FName((FName *)&local_b8,"GameplayDebugger");
  FVar3 = *pFVar10;
  this_00 = FModuleManager::Get();
  this_01 = (FGameplayDebuggerModule *)FModuleManager::LoadModuleChecked(this_00,FVar3);
  this_02 = FGameplayDebuggerModule::GetPlayerManager(this_01,pUVar9);
  pFVar11 = AGameplayDebuggerPlayerManager::GetPlayerData(this_02,this_04);
  if (pFVar11 == (FGameplayDebuggerPlayerData *)0x0) {
    pUVar17 = (UInputComponent *)0x0;
  }
  else {
    pUVar17 = (pFVar11->InputComponent).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UInputComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
  }
  this_03 = (AActor *)FWeakObjectPtr::Get(&(this->SpectatorController).WeakPtr);
  if (this_03 == (AActor *)0x0) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
    local_a8[0x30] = AlwaysSpawn;
    local_a8._16_8_ = AActor::GetWorldSettings((AActor *)this_04);
    local_a8._24_8_ = AActor::GetInstigator((AActor *)this_04);
    pUVar9 = AActor::GetWorld((AActor *)this_04);
    pUVar12 = Z_Construct_UClass_ADebugCameraController_NoRegister();
    FVar13 = (FWeakObjectPtr)
             UWorld::SpawnActor(pUVar9,pUVar12,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                (FActorSpawnParameters *)local_a8);
    if (FVar13 != (FWeakObjectPtr)0x0) {
      pUVar12 = Z_Construct_UClass_ADebugCameraController_NoRegister();
      iVar2 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar13 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar13 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        pFVar14 = GetTypeName<ADebugCameraController>(&local_b8);
        pwVar16 = L"";
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        pFVar14 = GetFullNameForCastLogError<AActor>(&local_c8,(AActor *)FVar13);
        if ((pFVar14->Data).ArrayNum != 0) {
          pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar16,pwVar18);
      }
      (**(code **)(this_04->_padding_ + 0xda0))(this_04,pUVar17);
      (**(code **)(*(longlong *)FVar13 + 0xfb0))(FVar13,this_04);
      pUVar4 = (this_04->Player).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,FVar13);
      (**(code **)(*(longlong *)FVar13 + 0xd98))(FVar13,pUVar17);
      pcVar5 = *(code **)(*(longlong *)FVar13 + 0x7a0);
      FVar7 = FNameEntryId::FromValidEName((EName)&local_c8);
      local_c8.Data.AllocatorInstance.Data._4_4_ = 0;
      local_c8.Data.AllocatorInstance.Data._0_4_ = *(uint *)CONCAT44(extraout_var,FVar7.Value);
      (*pcVar5)(FVar13,local_c8.Data.AllocatorInstance.Data);
      pcVar5 = *(code **)(*(longlong *)FVar13 + 0x7a0);
      FVar7 = FNameEntryId::FromValidEName((EName)&local_c8);
      local_c8.Data.AllocatorInstance.Data._4_4_ = 0;
      local_c8.Data.AllocatorInstance.Data._0_4_ = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
      (*pcVar5)(FVar13,local_c8.Data.AllocatorInstance.Data);
      if (((TObjectPtr<USceneComponent>_u_0 *)((longlong)FVar13 + 0x388))->DebugPtr !=
          (USceneComponent *)0x0) {
        pbVar1 = (byte *)((longlong)
                          ((TObjectPtr<USceneComponent>_u_0 *)((longlong)FVar13 + 0x388))->DebugPtr
                         + 0x2c8);
        *pbVar1 = *pbVar1 & 0xfd;
      }
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar13;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar13);
      }
      FWeakObjectPtr::operator=(&(this->SpectatorController).WeakPtr,(FObjectPtr)&local_c8);
    }
    if (local_a8._64_8_ != 0) {
      plVar15 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  else {
    (**(code **)(this_03->_padding_ + 0xda0))(this_03,pUVar17);
    pAVar6 = this_03[3].AttachmentReplication.AttachParent.field0_0x0.DebugPtr;
    if (pAVar6 != (AActor *)0x0) {
      (**(code **)(pAVar6->_padding_ + 0x2b0))(pAVar6,this_04);
    }
    (**(code **)(this_03->_padding_ + 0xfb8))(this_03,this_04);
    (**(code **)(this_04->_padding_ + 0xd98))(this_04,pUVar17);
    pUVar9 = AActor::GetWorld(this_03);
    UWorld::DestroyActor(pUVar9,this_03,false,false);
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_b8);
    (this->SpectatorController).WeakPtr = (FWeakObjectPtr)local_c8.Data.AllocatorInstance.Data;
  }
  this->bIsCachedDescriptionValid = 0;
  return;
}

