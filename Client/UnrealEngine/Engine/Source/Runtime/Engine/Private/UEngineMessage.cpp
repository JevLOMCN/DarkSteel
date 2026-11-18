// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b297a0

UClass * __cdecl UEngineMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineMessage",
               &Z_Registration_Info_UClass_UEngineMessage.InnerSingleton,
               StaticRegisterNativesUEngineMessage,0xa8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineMessage>,
               InternalVTableHelperCtorCaller<UEngineMessage>,local_res8,ULocalMessage::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineMessage.InnerSingleton;
}

// UEngineMessage @ 147b3b380

UEngineMessage * __thiscall
UEngineMessage::UEngineMessage(UEngineMessage *this,FVTableHelper *param_1)

{
  ULocalMessage::ULocalMessage((ULocalMessage *)this,param_1);
  this->_padding_ = (longlong)&___7UEngineMessage__6B_;
  (this->FailedPlaceMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailedPlaceMessage).Data.ArrayNum = 0;
  (this->FailedPlaceMessage).Data.ArrayMax = 0;
  (this->MaxedOutMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxedOutMessage).Data.ArrayNum = 0;
  (this->MaxedOutMessage).Data.ArrayMax = 0;
  (this->EnteredMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnteredMessage).Data.ArrayNum = 0;
  (this->EnteredMessage).Data.ArrayMax = 0;
  (this->LeftMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftMessage).Data.ArrayNum = 0;
  (this->LeftMessage).Data.ArrayMax = 0;
  (this->GlobalNameChange).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalNameChange).Data.ArrayNum = 0;
  (this->GlobalNameChange).Data.ArrayMax = 0;
  (this->SpecEnteredMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecEnteredMessage).Data.ArrayNum = 0;
  (this->SpecEnteredMessage).Data.ArrayMax = 0;
  (this->NewPlayerMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewPlayerMessage).Data.ArrayNum = 0;
  (this->NewPlayerMessage).Data.ArrayMax = 0;
  (this->NewSpecMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewSpecMessage).Data.ArrayNum = 0;
  (this->NewSpecMessage).Data.ArrayMax = 0;
  return this;
}

// UEngineMessage @ 147b3b400

UEngineMessage * __thiscall
UEngineMessage::UEngineMessage(UEngineMessage *this,FObjectInitializer *param_1)

{
  ULocalMessage::ULocalMessage((ULocalMessage *)this,param_1);
  this->_padding_ = (longlong)&___7UEngineMessage__6B_;
  (this->FailedPlaceMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailedPlaceMessage).Data.ArrayNum = 0;
  (this->FailedPlaceMessage).Data.ArrayMax = 0;
  (this->MaxedOutMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxedOutMessage).Data.ArrayNum = 0;
  (this->MaxedOutMessage).Data.ArrayMax = 0;
  (this->EnteredMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnteredMessage).Data.ArrayNum = 0;
  (this->EnteredMessage).Data.ArrayMax = 0;
  (this->LeftMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftMessage).Data.ArrayNum = 0;
  (this->LeftMessage).Data.ArrayMax = 0;
  (this->GlobalNameChange).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalNameChange).Data.ArrayNum = 0;
  (this->GlobalNameChange).Data.ArrayMax = 0;
  (this->SpecEnteredMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecEnteredMessage).Data.ArrayNum = 0;
  (this->SpecEnteredMessage).Data.ArrayMax = 0;
  (this->NewPlayerMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewPlayerMessage).Data.ArrayNum = 0;
  (this->NewPlayerMessage).Data.ArrayMax = 0;
  (this->NewSpecMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewSpecMessage).Data.ArrayNum = 0;
  (this->NewSpecMessage).Data.ArrayMax = 0;
  return this;
}

// ~UEngineMessage @ 147b3d8b0

void __thiscall UEngineMessage::~UEngineMessage(UEngineMessage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEngineMessage__6B_;
  pFVar1 = (this->NewSpecMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewPlayerMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpecEnteredMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GlobalNameChange).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LeftMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnteredMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxedOutMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FailedPlaceMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ULocalMessage::~ULocalMessage((ULocalMessage *)this);
  return;
}

// ClientReceive @ 147b4b8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEngineMessage::ClientReceive(UEngineMessage *this,FClientReceiveData *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  APlayerState *pAVar2;
  APlayerController *pAVar3;
  UConsole *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UPlayer *pUVar7;
  ULocalPlayer *pUVar8;
  longlong lVar9;
  UPlayer *pUVar10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_58.Data.ArrayNum = (param_1->MessageString).Data.ArrayNum;
  lVar9 = (longlong)local_58.Data.ArrayNum;
  pUVar10 = (UPlayer *)0x0;
  _Src = (param_1->MessageString).Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  if (local_58.Data.ArrayNum < 2) {
    iVar1 = param_1->MessageIndex;
    if (iVar1 == 1) {
      pAVar2 = (param_1->RelatedPlayerState_1).field0_0x0.DebugPtr;
      if (pAVar2 == (APlayerState *)0x0) {
        ::FString::operator=(&local_58,&this->NewPlayerMessage);
      }
      else {
        APlayerState::GetPlayerName(pAVar2,&local_28);
        ::FString::PrintfImpl(&local_48,L"%s%s");
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
LAB_147b4bba8:
        local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        local_58.Data.ArrayNum = local_48.Data.ArrayNum;
        local_58.Data.ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_147b4bbc4:
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (iVar1 == 2) {
        pAVar2 = (param_1->RelatedPlayerState_1).field0_0x0.DebugPtr;
        if (pAVar2 != (APlayerState *)0x0) {
          APlayerState::GetPlayerName(pAVar2,&local_28);
          pAVar2 = (param_1->RelatedPlayerState_1).field0_0x0.DebugPtr;
          (**(code **)(pAVar2->_padding_ + 0x7c0))(pAVar2,&local_38);
          ::FString::PrintfImpl(&local_48,L"%s %s %s");
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          local_58.Data.ArrayNum = local_48.Data.ArrayNum;
          local_58.Data.ArrayMax = local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          goto LAB_147b4bbc4;
        }
      }
      else {
        if (iVar1 != 4) {
          if (iVar1 == 7) {
            ::FString::operator=(&local_58,&this->MaxedOutMessage);
          }
          else if (iVar1 == 0x10) {
            pAVar2 = (param_1->RelatedPlayerState_1).field0_0x0.DebugPtr;
            if (pAVar2 != (APlayerState *)0x0) {
              APlayerState::GetPlayerName(pAVar2,&local_38);
              ::FString::PrintfImpl(&local_48,L"%s%s");
              local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
                local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
              }
              goto LAB_147b4bba8;
            }
            ::FString::operator=(&local_58,&this->NewSpecMessage);
          }
          goto LAB_147b4bbce;
        }
        pAVar2 = (param_1->RelatedPlayerState_1).field0_0x0.DebugPtr;
        if (pAVar2 != (APlayerState *)0x0) {
          APlayerState::GetPlayerName(pAVar2,&local_38);
          ::FString::PrintfImpl(&local_48,L"%s%s");
          local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          }
          goto LAB_147b4bba8;
        }
      }
      ::FString::operator=(&local_58,L"");
    }
LAB_147b4bbce:
    if (local_58.Data.ArrayNum < 2) goto LAB_147b4bcaa;
  }
  pAVar3 = (param_1->LocalPC).field0_0x0.DebugPtr;
  if ((pAVar3 != (APlayerController *)0x0) &&
     ((pAVar3->Player).field0_0x0.DebugPtr != (UPlayer *)0x0)) {
    pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pAVar3->Player,pUVar6);
    if ((bVar5) && ((pAVar3->Player).field0_0x0.DebugPtr != (UPlayer *)0x0)) {
      pAVar3 = (param_1->LocalPC).field0_0x0.DebugPtr;
      pUVar7 = pUVar10;
      if ((pAVar3->Player).field0_0x0.DebugPtr != (UPlayer *)0x0) {
        pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)&pAVar3->Player,pUVar6);
        if (bVar5) {
          pUVar7 = (pAVar3->Player).field0_0x0.DebugPtr;
        }
      }
      if (pUVar7[1].PlayerController.field0_0x0.DebugPtr != (APlayerController *)0x0) {
        pAVar3 = (param_1->LocalPC).field0_0x0.DebugPtr;
        if ((pAVar3->Player).field0_0x0.DebugPtr != (UPlayer *)0x0) {
          pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)&pAVar3->Player,pUVar6);
          if (bVar5) {
            pUVar10 = (pAVar3->Player).field0_0x0.DebugPtr;
          }
        }
        if ((pUVar10[1].PlayerController.field0_0x0.DebugPtr)->_padding_ != 0) {
          pUVar8 = Cast<ULocalPlayer,UPlayer>(&((param_1->LocalPC).field0_0x0.DebugPtr)->Player);
          pUVar4 = (((pUVar8->ViewportClient).field0_0x0.DebugPtr)->ViewportConsole).field0_0x0.
                   DebugPtr;
          (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4,&local_58);
        }
      }
    }
  }
LAB_147b4bcaa:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147b6c120

UClass * __cdecl UEngineMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineMessage",
               &Z_Registration_Info_UClass_UEngineMessage.InnerSingleton,
               StaticRegisterNativesUEngineMessage,0xa8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineMessage>,
               InternalVTableHelperCtorCaller<UEngineMessage>,local_res8,ULocalMessage::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineMessage.InnerSingleton;
}

// StaticRegisterNativesUEngineMessage @ 147b8ec70

void __cdecl UEngineMessage::StaticRegisterNativesUEngineMessage(void)

{
  return;
}

