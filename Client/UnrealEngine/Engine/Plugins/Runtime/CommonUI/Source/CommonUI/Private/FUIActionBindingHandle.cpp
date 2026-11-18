// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 12

// StaticStruct @ 14a781350

UScriptStruct * __cdecl FUIActionBindingHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIActionBindingHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FUIActionBindingHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIActionBindingHandle,(UObject *)pUVar1,
                         L"UIActionBindingHandle");
  }
  return Z_Registration_Info_UScriptStruct_FUIActionBindingHandle.OuterSingleton;
}

// operator= @ 14a7b4880

FUIActionBindingHandle * __thiscall
FUIActionBindingHandle::operator=(FUIActionBindingHandle *this,FUIActionBindingHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->CachedDebugActionName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->CachedDebugActionName).Data.AllocatorInstance.Data =
         (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
    (param_1->CachedDebugActionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedDebugActionName).Data.ArrayNum = (param_1->CachedDebugActionName).Data.ArrayNum;
    (this->CachedDebugActionName).Data.ArrayMax = (param_1->CachedDebugActionName).Data.ArrayMax;
    (param_1->CachedDebugActionName).Data.ArrayNum = 0;
    (param_1->CachedDebugActionName).Data.ArrayMax = 0;
  }
  this->RegistrationId = param_1->RegistrationId;
  return this;
}

// GetActionName @ 14a7e0310

FName __thiscall FUIActionBindingHandle::GetActionName(FUIActionBindingHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUIActionBinding *pFVar2;
  TSharedPtr<FUIActionBinding,1> *pTVar3;
  FName in_RDX;
  TSharedPtr<FUIActionBinding,1> local_38;
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
  local_28.RegistrationId = this->RegistrationId;
  pTVar3 = FUIActionBinding::FindBinding(&local_38,&local_28);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pFVar2 != (FUIActionBinding *)0x0) {
    *(FName *)in_RDX = pFVar2->ActionName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return in_RDX;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(FName *)in_RDX = (FName)0x0;
  return in_RDX;
}

// GetBoundLocalPlayer @ 14a7e0690

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

ULocalPlayer * __thiscall FUIActionBindingHandle::GetBoundLocalPlayer(FUIActionBindingHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUIActionBinding *pFVar2;
  TSharedPtr<FUIActionBinding,1> *pTVar3;
  UWidget *this_00;
  UGameInstance *this_01;
  ULocalPlayer *pUVar4;
  TSharedPtr<FUIActionBinding,1> local_38;
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
  local_28.RegistrationId = this->RegistrationId;
  pTVar3 = FUIActionBinding::FindBinding(&local_38,&local_28);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pFVar2 != (FUIActionBinding *)0x0) {
    this_00 = (UWidget *)FWeakObjectPtr::Get(&(pFVar2->BoundWidget).WeakPtr);
    if (this_00 != (UWidget *)0x0) {
      this_01 = UWidget::GetGameInstance(this_00);
      if ((this_01 != (UGameInstance *)0x0) && (pFVar2->UserIndex != -1)) {
        pUVar4 = UGameInstance::GetLocalPlayerByIndex(this_01,pFVar2->UserIndex);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pUVar4;
      }
      pUVar4 = (ULocalPlayer *)(**(code **)(this_00->_padding_ + 0x2e0))(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return pUVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (ULocalPlayer *)0x0;
}

// GetBoundWidget @ 14a7e0c90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall FUIActionBindingHandle::GetBoundWidget(FUIActionBindingHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUIActionBinding *pFVar2;
  TSharedPtr<FUIActionBinding,1> *pTVar3;
  UWidget *pUVar4;
  TSharedPtr<FUIActionBinding,1> local_38;
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
  local_28.RegistrationId = this->RegistrationId;
  pTVar3 = FUIActionBinding::FindBinding(&local_38,&local_28);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pFVar2 != (FUIActionBinding *)0x0) {
    pUVar4 = (UWidget *)FWeakObjectPtr::Get(&(pFVar2->BoundWidget).WeakPtr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return pUVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (UWidget *)0x0;
}

// GetDisplayInActionBar @ 14a7e1d80

bool __thiscall FUIActionBindingHandle::GetDisplayInActionBar(FUIActionBindingHandle *this)

{
  FUIActionBinding *pFVar1;
  TSharedPtr<FUIActionBinding,1> *pTVar2;
  TSharedPtr<FUIActionBinding,1> local_38;
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
  local_28.RegistrationId = this->RegistrationId;
  pTVar2 = FUIActionBinding::FindBinding(&local_38,&local_28);
  pFVar1 = pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pFVar1 != (FUIActionBinding *)0x0) {
    return pFVar1->bDisplayInActionBar;
  }
  return false;
}

// GetDisplayName @ 14a7e1de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FUIActionBindingHandle::GetDisplayName(FUIActionBindingHandle *this,FText *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FUIActionBinding *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  ECommonInputType EVar6;
  bool bVar7;
  TSharedPtr<FUIActionBinding,1> *pTVar8;
  UObject *pUVar9;
  ULocalPlayer *pUVar10;
  UCommonInputSubsystem *this_00;
  ulonglong uVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  FKey *this_01;
  FKey *pFVar14;
  undefined1 local_res8 [8];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  TSharedPtr<FUIActionBinding,1> local_88;
  FText local_78;
  FUIActionBindingHandle local_68;
  FTextFormat local_50;
  
  ::FString::FString(&local_68.CachedDebugActionName,&this->CachedDebugActionName);
  local_68.RegistrationId = this->RegistrationId;
  pTVar8 = FUIActionBinding::FindBinding(&local_88,&local_68);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FUIActionBinding *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FText::FText(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar5 = FWeakObjectPtr::IsValid(&(pFVar2->BoundWidget).WeakPtr);
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(&(pFVar2->BoundWidget).WeakPtr);
    pUVar10 = (ULocalPlayer *)(**(code **)(*(longlong *)pUVar9 + 0x2e0))(pUVar9);
    this_00 = UCommonInputSubsystem::Get(pUVar10);
    if (this_00 != (UCommonInputSubsystem *)0x0) {
      EVar6 = UCommonInputSubsystem::GetCurrentInputType(this_00);
      this_01 = (FKey *)(pFVar2->HoldMappings).AllocatorInstance.Data;
      local_res18[0] = (pFVar2->HoldMappings).ArrayNum;
      uVar11 = (ulonglong)(int)local_res18[0];
      pFVar14 = (FKey *)((longlong)this_01 + uVar11 * 0x20);
      while( true ) {
        if ((pFVar2->HoldMappings).ArrayNum != (int)uVar11) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FUIActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (this_01 == pFVar14) goto LAB_14a7e20a8;
        bVar5 = FKey::IsGamepadKey(this_01);
        bVar7 = FKey::IsTouch(this_01);
        if ((((bVar5) && (EVar6 == Gamepad)) || ((bVar7 && (EVar6 == Touch)))) ||
           (((!bVar5 && (!bVar7)) && (EVar6 == MouseAndKeyboard)))) break;
        uVar11 = (ulonglong)local_res18[0];
        this_01 = (FKey *)&this_01[1].KeyDetails;
      }
      local_c8.TextData.Reference = (pFVar2->ActionDisplayName).TextData.Reference;
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res18);
      }
      local_c8.Flags = (pFVar2->ActionDisplayName).Flags;
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"UIActionRouter",L"HoldActionNameFormat",L"{0} (Hold)");
      pFVar13 = FTextFormat::FTextFormat(&local_50,pFVar12,Default);
      local_a8.Type = Text;
      FText::FText((FText *)&local_a8.TextValue,&local_c8);
      if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FText *)(*pcVar4)();
        return pFVar12;
      }
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_d8.AllocatorInstance.Data,&local_a8,1);
      local_b8.TextFormatData.Object = (pFVar13->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(__return_storage_ptr__,&local_b8,&local_d8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      goto LAB_14a7e2076;
    }
  }
LAB_14a7e20a8:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar3 = (pFVar2->ActionDisplayName).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res20);
  }
  __return_storage_ptr__->Flags = (pFVar2->ActionDisplayName).Flags;
LAB_14a7e2076:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// IsValid @ 14a7f72e0

bool __thiscall FUIActionBindingHandle::IsValid(FUIActionBindingHandle *this)

{
  TSharedPtr<FUIActionBinding,1> *pTVar1;
  bool bVar2;
  bool bVar3;
  TSharedPtr<FUIActionBinding,1> local_38;
  FUIActionBindingHandle local_28;
  
  bVar2 = false;
  if (-1 < this->RegistrationId) {
    ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
    local_28.RegistrationId = this->RegistrationId;
    pTVar1 = FUIActionBinding::FindBinding(&local_38,&local_28);
    bVar2 = true;
    if (pTVar1->Object != (FUIActionBinding *)0x0) {
      bVar3 = true;
      goto LAB_14a7f7329;
    }
  }
  bVar3 = false;
LAB_14a7f7329:
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return bVar3;
}

// ResetHold @ 14a814c80

void __thiscall FUIActionBindingHandle::ResetHold(FUIActionBindingHandle *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<FUIActionBinding,1> local_58;
  TWeakPtr<FTSTicker::FElement,1> local_48;
  longlong local_38 [2];
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
  local_28.RegistrationId = this->RegistrationId;
  FUIActionBinding::FindBinding(&local_58,&local_28);
  if (local_58.Object != (FUIActionBinding *)0x0) {
    if (local_58.Object == (FUIActionBinding *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = &(local_58.Object)->HoldProgressRollbackTickerHandle;
    if (((pTVar2->Object != (FElement *)0x0) &&
        (pTVar4 = ((local_58.Object)->HoldProgressRollbackTickerHandle).WeakReferenceCount.
                  ReferenceController, pTVar4 != (TReferenceControllerBase<1> *)0x0)) &&
       (0 < (int)pTVar4->SharedReferenceCount)) {
      local_48.Object = pTVar2->Object;
      local_48.WeakReferenceCount.ReferenceController =
           ((local_58.Object)->HoldProgressRollbackTickerHandle).WeakReferenceCount.
           ReferenceController;
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_48);
      if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_38) {
        pTVar4 = ((local_58.Object)->HoldProgressRollbackTickerHandle).WeakReferenceCount.
                 ReferenceController;
        pTVar2->Object = (FElement *)0x0;
        ((local_58.Object)->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController
             = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
    (local_58.Object)->HoldStartSecond = 0.0;
    (local_58.Object)->CurrentHoldSecond = 0.0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetDisplayInActionBar @ 14a817f30

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
FUIActionBindingHandle::SetDisplayInActionBar(FUIActionBindingHandle *this,bool param_1)

{
  FUIActionBinding *pFVar1;
  TSharedPtr<FUIActionBinding,1> *pTVar2;
  UObject *pUVar3;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar4;
  TSharedPtr<FUIActionBinding,1> local_38;
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
  local_28.RegistrationId = this->RegistrationId;
  pTVar2 = FUIActionBinding::FindBinding(&local_38,&local_28);
  pFVar1 = pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((pFVar1 != (FUIActionBinding *)0x0) && (pFVar1->bDisplayInActionBar != param_1)) {
    pFVar1->bDisplayInActionBar = param_1;
    pUVar3 = FWeakObjectPtr::Get(&(pFVar1->BoundWidget).WeakPtr);
    if (pUVar3 != (UObject *)0x0) {
      this_00 = (ULocalPlayer *)(**(code **)(*(longlong *)pUVar3 + 0x2e0))(pUVar3);
      if (this_00 != (ULocalPlayer *)0x0) {
        pUVar4 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
        if (pUVar4 != (UCommonUIActionRouterBase *)0x0) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&pUVar4->OnBoundActionsUpdatedEvent);
        }
      }
    }
  }
  return;
}

// SetDisplayName @ 14a817fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FUIActionBindingHandle::SetDisplayName(FUIActionBindingHandle *this,FText *param_1)

{
  FUIActionBinding *pFVar1;
  bool bVar2;
  TSharedPtr<FUIActionBinding,1> *pTVar3;
  UObject *pUVar4;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar5;
  TSharedPtr<FUIActionBinding,1> local_38;
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&this->CachedDebugActionName);
  local_28.RegistrationId = this->RegistrationId;
  pTVar3 = FUIActionBinding::FindBinding(&local_38,&local_28);
  pFVar1 = pTVar3->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pFVar1 != (FUIActionBinding *)0x0) {
    bVar2 = FText::EqualTo(&pFVar1->ActionDisplayName,param_1,Default);
    if (!bVar2) {
      FText::operator=(&pFVar1->ActionDisplayName,param_1);
      pUVar4 = FWeakObjectPtr::Get(&(pFVar1->BoundWidget).WeakPtr);
      if (pUVar4 != (UObject *)0x0) {
        this_00 = (ULocalPlayer *)(**(code **)(*(longlong *)pUVar4 + 0x2e0))(pUVar4);
        if (this_00 != (ULocalPlayer *)0x0) {
          pUVar5 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
          if (pUVar5 != (UCommonUIActionRouterBase *)0x0) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&pUVar5->OnBoundActionsUpdatedEvent);
          }
        }
      }
    }
  }
  return;
}

// Unregister @ 14a8253b0

void __thiscall FUIActionBindingHandle::Unregister(FUIActionBindingHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FActionRouterBindingCollection *this_00;
  FActionRouterBindingCollection *pFVar7;
  FActionRouterBindingCollection *pFVar8;
  TSharedPtr<FUIActionBinding,1> local_48;
  FUIActionBindingHandle local_38;
  FUIActionBindingHandle local_20;
  
  ::FString::FString(&local_38.CachedDebugActionName,&this->CachedDebugActionName);
  local_38.RegistrationId = this->RegistrationId;
  FUIActionBinding::FindBinding(&local_48,&local_38);
  if (local_48.Object == (FUIActionBinding *)0x0) goto LAB_14a82550e;
  if ((local_48.Object == (FUIActionBinding *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((((local_48.Object)->OwningCollection).Object == (FActionRouterBindingCollection *)0x0) ||
      (pTVar1 = ((local_48.Object)->OwningCollection).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_14a82550e;
  if ((local_48.Object == (FUIActionBinding *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = (FActionRouterBindingCollection *)
           ((local_48.Object)->OwningCollection).WeakReferenceCount.ReferenceController;
  this_00 = (FActionRouterBindingCollection *)0x0;
  pFVar7 = pFVar8;
  if (pFVar8 == (FActionRouterBindingCollection *)0x0) {
LAB_14a8254b5:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pFVar8 = pFVar7;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar5 = (int)pFVar8->_padding_;
    do {
      pFVar7 = this_00;
      if (iVar5 == 0) goto LAB_14a8254b5;
      LOCK();
      iVar4 = (int)pFVar8->_padding_;
      bVar3 = iVar5 == iVar4;
      if (bVar3) {
        *(int *)&pFVar8->_padding_ = iVar5 + 1;
        iVar4 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar4;
    } while (!bVar3);
    this_00 = ((local_48.Object)->OwningCollection).Object;
    pFVar7 = pFVar8;
    if (this_00 == (FActionRouterBindingCollection *)0x0) goto LAB_14a8254b5;
  }
  ::FString::FString(&local_20.CachedDebugActionName,&this->CachedDebugActionName);
  local_20.RegistrationId = this->RegistrationId;
  FActionRouterBindingCollection::RemoveBinding(this_00,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
LAB_14a82550e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (FUIActionBinding::AllRegistrationsByHandle._8_4_ !=
      FUIActionBinding::AllRegistrationsByHandle._52_4_) {
    lVar6 = 0x154cb26b8;
    if (FUIActionBinding::AllRegistrationsByHandle._64_8_ != 0) {
      lVar6 = FUIActionBinding::AllRegistrationsByHandle._64_8_;
    }
    iVar5 = *(int *)(lVar6 + (longlong)
                             (int)(FUIActionBinding::AllRegistrationsByHandle._72_4_ - 1 &
                                  this->RegistrationId) * 4);
    if (iVar5 != -1) {
      while (*(uint *)(FUIActionBinding::AllRegistrationsByHandle._0_8_ + 0x10 +
                      (longlong)iVar5 * 0x30) != this->RegistrationId) {
        iVar5 = *(int *)(FUIActionBinding::AllRegistrationsByHandle._0_8_ + 0x28 +
                        (longlong)iVar5 * 0x30);
        if (iVar5 == -1) {
          this->RegistrationId = -1;
          return;
        }
      }
      TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>_>,TDefaultMapHashableKeyFuncs<FUIActionBindingHandle,TSharedPtr<FUIActionBinding,1>,0>,FDefaultSetAllocator>
                       *)&FUIActionBinding::AllRegistrationsByHandle,iVar5);
    }
  }
  this->RegistrationId = -1;
  return;
}

