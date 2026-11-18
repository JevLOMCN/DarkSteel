// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 9

// FGameplayDebuggerExtension_HUD @ 146d3fab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGameplayDebuggerExtension_HUD * __thiscall
FGameplayDebuggerExtension_HUD::FGameplayDebuggerExtension_HUD(FGameplayDebuggerExtension_HUD *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UGameplayDebuggerConfig *pUVar10;
  uint uVar11;
  FName local_res10;
  FGameplayDebuggerInputHandlerConfig local_48;
  FGameplayDebuggerInputHandlerConfig local_38;
  code *local_28;
  undefined8 uStack_20;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGameplayDebuggerExtension_HUD__6B_;
  (this->CachedDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDescription).Data.ArrayNum = 0;
  (this->CachedDescription).Data.ArrayMax = 0;
  puVar1 = &this->field_0x30;
  uVar3 = *(uint *)puVar1;
  puVar2 = &this->field_0x30;
  this->bWantsHUDEnabled = 0;
  this->bAreDebugMessagesEnabled = 0;
  this->bIsGameHUDEnabled = 0;
  if ((GEngine == (UEngine *)0x0) || (uVar11 = 8, GEngine->bEnableOnScreenDebugMessages == 0)) {
    uVar11 = 0;
  }
  *(uint *)&this->field_0x30 = uVar3 & 0xffffffe0 | uVar11;
  FVar7 = FKey::GetFName(&EKeys::Tilde);
  FVar7 = *(FName *)FVar7;
  pFVar8 = ::FName::FName(&local_res10,L"ToggleHUD");
  FVar4 = *pFVar8;
  local_48.Modifier = FGameplayDebuggerInputModifier::Ctrl;
  local_48.KeyName = FVar7;
  if (FGameplayDebuggerInputHandlerConfig::CurrentCategoryName == (FName)0x0) {
    if (FGameplayDebuggerInputHandlerConfig::CurrentExtensionName != (FName)0x0) {
      pUVar9 = UGameplayDebuggerConfig::StaticClass();
      pUVar10 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar9);
      UGameplayDebuggerConfig::UpdateExtensionInputConfig
                (pUVar10,FGameplayDebuggerInputHandlerConfig::CurrentExtensionName,FVar4,
                 &local_48.KeyName,&local_48.Modifier);
    }
  }
  else {
    pUVar9 = UGameplayDebuggerConfig::StaticClass();
    pUVar10 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar9);
    UGameplayDebuggerConfig::UpdateCategoryInputConfig
              (pUVar10,FGameplayDebuggerInputHandlerConfig::CurrentCategoryName,FVar4,
               &local_48.KeyName,&local_48.Modifier);
  }
  FVar7 = FKey::GetFName(&EKeys::Tab);
  FVar7 = *(FName *)FVar7;
  pFVar8 = ::FName::FName(&local_res10,L"ToggleMessages");
  FVar4 = *pFVar8;
  local_38.Modifier = FGameplayDebuggerInputModifier::Ctrl;
  local_38.KeyName = FVar7;
  if (FGameplayDebuggerInputHandlerConfig::CurrentCategoryName == (FName)0x0) {
    if (FGameplayDebuggerInputHandlerConfig::CurrentExtensionName != (FName)0x0) {
      pUVar9 = UGameplayDebuggerConfig::StaticClass();
      pUVar10 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar9);
      UGameplayDebuggerConfig::UpdateExtensionInputConfig
                (pUVar10,FGameplayDebuggerInputHandlerConfig::CurrentExtensionName,FVar4,
                 &local_38.KeyName,&local_38.Modifier);
    }
  }
  else {
    pUVar9 = UGameplayDebuggerConfig::StaticClass();
    pUVar10 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(pUVar9);
    UGameplayDebuggerConfig::UpdateCategoryInputConfig
              (pUVar10,FGameplayDebuggerInputHandlerConfig::CurrentCategoryName,FVar4,
               &local_38.KeyName,&local_38.Modifier);
  }
  uStack_20._0_4_ = 0;
  local_28 = ToggleGameHUD;
  bVar5 = FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerExtension_HUD>
                    ((FGameplayDebuggerAddonBase *)this,&local_48,this,(pmf_92f67812 *)&local_28,
                     Local);
  if (bVar5) {
    iVar6 = (int)this->_padding_ + -1;
  }
  else {
    iVar6 = -1;
  }
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  this->HudBindingIdx = iVar6;
  local_28 = ToggleDebugMessages;
  bVar5 = FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerExtension_HUD>
                    ((FGameplayDebuggerAddonBase *)this,&local_38,this,(pmf_92f67812 *)&local_28,
                     Local);
  if (bVar5) {
    this->MessagesBindingIdx = (int)this->_padding_ + -1;
  }
  else {
    this->MessagesBindingIdx = -1;
  }
  return this;
}

// GetDescription @ 146d4c270

FString * __thiscall
FGameplayDebuggerExtension_HUD::GetDescription
          (FGameplayDebuggerExtension_HUD *this,FString *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->bIsCachedDescriptionValid == 0) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    iVar4 = 0;
    if (this->HudBindingIdx != -1) {
      FGameplayDebuggerAddonBase::GetInputHandlerDescription
                ((FGameplayDebuggerAddonBase *)this,&local_28,this->HudBindingIdx);
      ::FString::PrintfImpl(&local_38,L"{%s}%s:{%s}HUD");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar1 = local_38.Data._8_8_;
      iVar4 = local_38.Data.ArrayNum;
      local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      uVar2 = local_38.Data._8_8_;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (int)uVar1;
      local_38.Data.ArrayMax = SUB84(uVar1,4);
      local_48.Data.ArrayNum = local_38.Data.ArrayNum;
      local_48.Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data._8_8_ = uVar2;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        iVar4 = local_48.Data.ArrayNum;
      }
    }
    iVar5 = this->MessagesBindingIdx;
    if (iVar5 != -1) {
      iVar3 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      if (0 < iVar3) {
        iVar4 = FGameplayDebuggerCanvasStrings::SeparatorSpace.Data.ArrayNum + -1;
        if (FGameplayDebuggerCanvasStrings::SeparatorSpace.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        ::FString::AppendChars
                  (&local_48,
                   (wchar_t *)
                   FGameplayDebuggerCanvasStrings::SeparatorSpace.Data.AllocatorInstance.Data,iVar4)
        ;
        iVar5 = this->MessagesBindingIdx;
      }
      FGameplayDebuggerAddonBase::GetInputHandlerDescription
                ((FGameplayDebuggerAddonBase *)this,&local_28,iVar5);
      ::FString::PrintfImpl(&local_38,L"{%s}%s:{%s}DebugMessages");
      iVar4 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      iVar4 = local_48.Data.ArrayNum;
    }
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange
              (&this->CachedDescription,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    this->bIsCachedDescriptionValid = 1;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,&this->CachedDescription);
  return __return_storage_ptr__;
}

// MakeInstance @ 146d50dc0

TSharedRef<FGameplayDebuggerExtension,1> * __cdecl
FGameplayDebuggerExtension_HUD::MakeInstance
          (TSharedRef<FGameplayDebuggerExtension,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGameplayDebuggerExtension_HUD *this;
  TSharedRef<FGameplayDebuggerExtension,1> *pTVar3;
  TRawPtrProxy<FGameplayDebuggerExtension_HUD> local_res8;
  
  this = ::operator_new(0x50);
  if (this == (FGameplayDebuggerExtension_HUD *)0x0) {
    local_res8.Object = (FGameplayDebuggerExtension_HUD *)0x0;
  }
  else {
    local_res8.Object = FGameplayDebuggerExtension_HUD(this);
    if ((((local_res8.Object != (FGameplayDebuggerExtension_HUD *)0x0) &&
         ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FGameplayDebuggerExtension,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FGameplayDebuggerExtension,1>::
  TSharedRef<FGameplayDebuggerExtension,1><FGameplayDebuggerExtension_HUD>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// OnActivated @ 146d54ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGameplayDebuggerExtension_HUD::OnActivated(FGameplayDebuggerExtension_HUD *this)

{
  undefined1 *puVar1;
  
  SetGameHUDEnabled(this,this->bWantsHUDEnabled);
  if (GEngine != (UEngine *)0x0) {
    GEngine->bEnableOnScreenDebugMessages = 0;
  }
  this->bAreDebugMessagesEnabled = 0;
  this->bIsCachedDescriptionValid = 0;
  return;
}

// OnDeactivated @ 146d55960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGameplayDebuggerExtension_HUD::OnDeactivated(FGameplayDebuggerExtension_HUD *this)

{
  undefined4 uVar1;
  
  SetGameHUDEnabled(this,true);
  if (GEngine != (UEngine *)0x0) {
    *(uint *)&GEngine->field_0xe80 =
         (ZPULL(*(undefined4 *)&GEngine->field_0xe80,0,1) ^ this->bPrevDebugMessagesEnabled) & 1 ^
         *(undefined4 *)&GEngine->field_0xe80;
  }
  *(uint *)&this->field_0x30 =
       (this->bPrevDebugMessagesEnabled << 2 ^ *(uint *)&this->field_0x30 & 0xfffffffb) & 0xffffffef
  ;
  return;
}

// SetDebugMessagesEnabled @ 146d5bb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerExtension_HUD::SetDebugMessagesEnabled
          (FGameplayDebuggerExtension_HUD *this,bool param_1)

{
  if (GEngine != (UEngine *)0x0) {
    *(uint *)&GEngine->field_0xe80 = *(uint *)&GEngine->field_0xe80 & 0xfffffffe | (uint)param_1;
  }
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 & 0xffffffeb | (uint)param_1 * 4;
  return;
}

// SetGameHUDEnabled @ 146d5c000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerExtension_HUD::SetGameHUDEnabled(FGameplayDebuggerExtension_HUD *this,bool param_1)

{
  APlayerController *this_00;
  UObject *pUVar1;
  AHUD *pAVar2;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar1 != (UObject *)0x0) &&
     (this_00 = *(APlayerController **)&pUVar1[0x11].field_0x18, this_00 != (APlayerController *)0x0
     )) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pAVar2 = APlayerController::GetHUD(this_00);
    if (pAVar2 != (AHUD *)0x0) {
      pAVar2->bShowHUD = '\0';
      pAVar2->field_0x2c8 = pAVar2->field_0x2c8 | !param_1 * '\x02';
      (**(code **)(pAVar2->_padding_ + 0x760))(pAVar2);
    }
  }
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 & 0xffffffed | (uint)param_1 * 2;
  return;
}

// ToggleDebugMessages @ 146d5cbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerExtension_HUD::ToggleDebugMessages(FGameplayDebuggerExtension_HUD *this)

{
  uint uVar1;
  
  uVar1 = ~this->bAreDebugMessagesEnabled;
  if (GEngine != (UEngine *)0x0) {
    *(uint *)&GEngine->field_0xe80 =
         (ZPULL(*(undefined4 *)&GEngine->field_0xe80,0,1) ^ uVar1) & 1 ^
         *(undefined4 *)&GEngine->field_0xe80;
  }
  *(uint *)&this->field_0x30 =
       ((uVar1 & 1) << 2 ^ *(uint *)&this->field_0x30 & 0xfffffffb) & 0xffffffef;
  return;
}

// ToggleGameHUD @ 146d5cc40

void __thiscall FGameplayDebuggerExtension_HUD::ToggleGameHUD(FGameplayDebuggerExtension_HUD *this)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)&this->field_0x30;
  uVar2 = (~ZPULL(uVar1,1,1) ^ this->bWantsHUDEnabled) & 1 ^ uVar1;
  *(uint *)&this->field_0x30 = uVar2;
  SetGameHUDEnabled(this,(bool)((byte)uVar2 & 1));
  return;
}

