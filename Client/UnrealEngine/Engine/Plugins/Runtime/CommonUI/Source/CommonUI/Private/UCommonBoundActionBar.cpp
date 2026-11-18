// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 30

// StaticClass @ 14a788380

UClass * __cdecl UCommonBoundActionBar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBoundActionBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBoundActionBar",
               &Z_Registration_Info_UClass_UCommonBoundActionBar.InnerSingleton,
               StaticRegisterNativesUCommonBoundActionBar,0x2c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonBoundActionBar>,
               InternalVTableHelperCtorCaller<UCommonBoundActionBar>,local_res8,
               UDynamicEntryBoxBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBoundActionBar.InnerSingleton;
}

// UCommonBoundActionBar @ 14a7ac190

UCommonBoundActionBar * __thiscall
UCommonBoundActionBar::UCommonBoundActionBar(UCommonBoundActionBar *this,FVTableHelper *param_1)

{
  UDynamicEntryBoxBase::UDynamicEntryBoxBase((UDynamicEntryBoxBase *)this,param_1);
  this->bDisplayOwningPlayerActionsOnly = true;
  this->bIgnoreDuplicateActions = true;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ActionButtonClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnActionBarUpdated = 0;
  *(undefined8 *)&(this->OnActionBarUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnActionBarUpdated).field_0x10 = 0;
  this->bIsRefreshQueued = false;
  return this;
}

// UCommonBoundActionBar @ 14a7ac1f0

UCommonBoundActionBar * __thiscall
UCommonBoundActionBar::UCommonBoundActionBar
          (UCommonBoundActionBar *this,FObjectInitializer *param_1)

{
  UDynamicEntryBoxBase::UDynamicEntryBoxBase((UDynamicEntryBoxBase *)this,param_1);
  this->bDisplayOwningPlayerActionsOnly = true;
  this->bIgnoreDuplicateActions = true;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ActionButtonClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnActionBarUpdated = 0;
  *(undefined8 *)&(this->OnActionBarUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnActionBarUpdated).field_0x10 = 0;
  this->bIsRefreshQueued = false;
  return this;
}

// ~UCommonBoundActionBar @ 14a7b2090

void __thiscall UCommonBoundActionBar::~UCommonBoundActionBar(UCommonBoundActionBar *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pvVar1 = *(void **)&(this->OnActionBarUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActionBarUpdated);
  UDynamicEntryBoxBase::~UDynamicEntryBoxBase((UDynamicEntryBoxBase *)this);
  return;
}

// operator() @ 14a7b6f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_2>::operator()
          (void *this,FUIActionBindingHandle *param_1)

{
  ECommonInputType EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  ULocalPlayer *pUVar6;
  UEnhancedInputLocalPlayerSubsystem *pUVar7;
  undefined8 *puVar8;
  FCommonInputActionDataBase *pFVar9;
  UClass *pUVar10;
  UCommonInputSubsystem *this_00;
  FName FVar11;
  FName *pFVar12;
  ForElementType<FSetElementId> FVar13;
  FKey *pFVar14;
  int iVar15;
  FKey *pFVar16;
  FName local_res18;
  undefined1 local_68 [16];
  FName local_58;
  TSharedPtr<FUIActionBinding,1> local_50;
  undefined8 local_40 [3];
  
  ::FString::FString((FString *)local_68,&param_1->CachedDebugActionName);
  local_58.ComparisonIndex.Value = param_1->RegistrationId;
  FUIActionBinding::FindBinding(&local_50,(FUIActionBindingHandle *)local_68);
  if (local_50.Object == (FUIActionBinding *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (((local_50.Object)->bDisplayInActionBar != false) || (bActionBarIgnoreOptOut != false)) {
    if (*(int *)&((local_50.Object)->InputTypesExemptFromValidKeyCheck).Elements.field_0x8 !=
        *(int *)&((local_50.Object)->InputTypesExemptFromValidKeyCheck).Elements.field_0x34) {
      FVar13 = ((local_50.Object)->InputTypesExemptFromValidKeyCheck).Hash.SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)
                 &((local_50.Object)->InputTypesExemptFromValidKeyCheck).Hash;
      }
      iVar15 = *(int *)((longlong)FVar13 +
                       ((ulonglong)
                        (((local_50.Object)->InputTypesExemptFromValidKeyCheck).HashSize - 1) &
                       (ulonglong)*(byte *)((longlong)this + 8)) * 4);
      if (iVar15 != -1) {
        lVar2 = *(longlong *)&((local_50.Object)->InputTypesExemptFromValidKeyCheck).Elements;
        do {
          if (*(byte *)(lVar2 + (longlong)iVar15 * 0xc) == *(byte *)((longlong)this + 8))
          goto LAB_14a7b7214;
          iVar15 = *(int *)(lVar2 + 4 + (longlong)iVar15 * 0xc);
        } while (iVar15 != -1);
      }
    }
    bVar4 = CommonUI::IsEnhancedInputSupportEnabled();
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&((local_50.Object)->InputAction).WeakPtr);
      EVar1 = *(ECommonInputType *)((longlong)this + 8);
      pUVar6 = ULocalPlayerSubsystem::GetLocalPlayer<ULocalPlayer>(*(ULocalPlayerSubsystem **)this);
      if ((pUVar6 != (ULocalPlayer *)0x0) && (pUVar5 != (UObject *)0x0)) {
        pFVar16 = (FKey *)0x0;
        iVar15 = 0;
        pUVar7 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pUVar6);
        if (pUVar7 != (UEnhancedInputLocalPlayerSubsystem *)0x0) {
          puVar8 = (undefined8 *)
                   (**(code **)(pUVar7->_padding_ + 0x100))(&pUVar7->_padding_,local_68,pUVar5);
          if (local_40 != puVar8) {
            DestructItems<FKey,int>((FKey *)0x0,0);
            pFVar16 = (FKey *)*puVar8;
            *puVar8 = 0;
            iVar15 = *(int *)(puVar8 + 1);
            puVar8[1] = 0;
          }
          DestructItems<FKey,int>((FKey *)local_68._0_8_,local_68._8_4_);
          if ((FName)local_68._0_8_ != (FName)0x0) {
            FMemory::Free((void *)local_68._0_8_);
          }
        }
        for (pFVar14 = pFVar16; pFVar14 != pFVar16 + iVar15; pFVar14 = pFVar14 + 1) {
          bVar4 = CommonUI::IsKeyValidForInputType(pFVar14,EVar1);
          if (bVar4) {
            DestructItems<FKey,int>(pFVar16,iVar15);
            if (pFVar16 != (FKey *)0x0) {
              FMemory::Free(pFVar16);
            }
            goto LAB_14a7b7214;
          }
        }
        DestructItems<FKey,int>(pFVar16,iVar15);
        if (pFVar16 != (FKey *)0x0) {
          FMemory::Free(pFVar16);
        }
      }
    }
    pFVar9 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                       (&(local_50.Object)->LegacyActionTableRow,L"");
    EVar1 = *(ECommonInputType *)((longlong)this + 8);
    pUVar6 = *(ULocalPlayer **)(*(longlong *)this + 0x20);
    if (pUVar6 != (ULocalPlayer *)0x0) {
      pUVar10 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      iVar15 = (int)pUVar10->_padding_;
      if (((iVar15 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
           &pUVar10->_padding_)) && (pFVar9 != (FCommonInputActionDataBase *)0x0)) {
        this_00 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(pUVar6);
        pcVar3 = *(code **)(pFVar9->_padding_ + 0x20);
        FVar11 = UCommonInputSubsystem::GetCurrentGamepadName(this_00);
        pFVar12 = (FName *)(*pcVar3)(pFVar9,EVar1,FVar11);
        local_58 = pFVar12[2];
        local_68._0_8_ = *pFVar12;
        local_68._8_8_ = pFVar12[1];
        if (local_58 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)local_58 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)local_58 + 8) + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        bVar4 = CommonUI::IsKeyValidForInputType((FKey *)local_68,EVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_58);
        if (bVar4) {
LAB_14a7b7214:
          if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x299) == '\0') {
            bVar4 = true;
          }
          else {
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                      (*(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)
                        ((longlong)this + 0x18),&local_res18,(bool *)local_50.Object);
            bVar4 = true;
          }
          goto LAB_14a7b7258;
        }
      }
    }
  }
  bVar4 = false;
LAB_14a7b7258:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// operator() @ 14a7b7390

bool __thiscall
`UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_3>::operator()
          (void *this,FUIActionBindingHandle *param_1,FUIActionBindingHandle *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FCommonInputActionDataBase *pFVar6;
  FCommonInputActionDataBase *pFVar7;
  UInputAction *pUVar8;
  UInputAction *pUVar9;
  int iVar10;
  int iVar11;
  undefined1 local_res10 [8];
  TSharedPtr<FUIActionBinding,1> *local_res18;
  TSharedPtr<FUIActionBinding,1> *local_res20;
  TSharedPtr<FUIActionBinding,1> local_b8;
  TSharedPtr<FUIActionBinding,1> local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80;
  undefined8 local_7c;
  FUIActionBindingHandle local_70;
  FUIActionBindingHandle local_58;
  
  ::FString::FString(&local_70.CachedDebugActionName,&param_1->CachedDebugActionName);
  local_70.RegistrationId = param_1->RegistrationId;
  FUIActionBinding::FindBinding(&local_a8,&local_70);
  ::FString::FString(&local_58.CachedDebugActionName,&param_2->CachedDebugActionName);
  local_58.RegistrationId = param_2->RegistrationId;
  FUIActionBinding::FindBinding(&local_b8,&local_58);
  if ((local_a8.Object == (FUIActionBinding *)0x0) || (local_b8.Object == (FUIActionBinding *)0x0))
  {
    local_res10[0] = 0;
    bVar3 = ``UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_3>::operator()'::
            __l2::<lambda_1>::operator()(local_res10);
    if (!bVar3) {
      bVar3 = true;
      goto LAB_14a7b76c6;
    }
  }
  local_88 = *(longlong *)this;
  local_80 = *(undefined1 *)((longlong)this + 8);
  local_7c = *(undefined8 *)((longlong)this + 0xc);
  if ((local_a8.Object == (FUIActionBinding *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar6 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                     (&(local_a8.Object)->LegacyActionTableRow,L"");
  if ((local_b8.Object == (FUIActionBinding *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar7 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                     (&(local_b8.Object)->LegacyActionTableRow,L"");
  pUVar8 = (UInputAction *)0x0;
  iVar10 = 0;
  iVar11 = 0;
  bVar3 = CommonUI::IsEnhancedInputSupportEnabled();
  pUVar9 = pUVar8;
  if (bVar3) {
    if ((local_a8.Object == (FUIActionBinding *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar8 = (UInputAction *)FWeakObjectPtr::Get(&((local_a8.Object)->InputAction).WeakPtr);
    if ((local_b8.Object == (FUIActionBinding *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar9 = (UInputAction *)FWeakObjectPtr::Get(&((local_b8.Object)->InputAction).WeakPtr);
  }
  if ((pFVar6 == (FCommonInputActionDataBase *)0x0) && (pUVar8 == (UInputAction *)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((pFVar7 == (FCommonInputActionDataBase *)0x0) && (pUVar9 == (UInputAction *)0x0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar3) {
LAB_14a7b758f:
    if (!bVar5) {
      local_res20 = &local_b8;
      bVar3 = ``UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_3>::operator()'
              ::__l5::<lambda_5>::operator()(&local_res20);
      if (!bVar3) goto LAB_14a7b7639;
    }
    bVar3 = ``UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_3>::operator()'::
            __l5::<lambda_2>::operator()(&local_88,pFVar6,pUVar8);
    bVar5 = ``UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_3>::operator()'::
            __l5::<lambda_2>::operator()(&local_88,pFVar7,pUVar9);
    if ((bVar3) && (!bVar5)) {
      bVar3 = false;
      goto LAB_14a7b76c6;
    }
    if (pFVar6 == (FCommonInputActionDataBase *)0x0) {
      if ((pUVar8 != (UInputAction *)0x0) &&
         (CommonUI::GetEnhancedInputActionMetadata((UInputAction *)&local_98), local_98 != 0)) {
        iVar11 = *(int *)(local_98 + 0x28);
      }
    }
    else {
      iVar11 = pFVar6->NavBarPriority;
    }
    if (pFVar7 == (FCommonInputActionDataBase *)0x0) {
      if ((pUVar9 != (UInputAction *)0x0) &&
         (CommonUI::GetEnhancedInputActionMetadata((UInputAction *)&local_90), local_90 != 0)) {
        iVar10 = *(int *)(local_90 + 0x28);
      }
    }
    else {
      iVar10 = pFVar7->NavBarPriority;
    }
    if (iVar11 != iVar10) {
      bVar3 = iVar11 < iVar10;
      goto LAB_14a7b76c6;
    }
  }
  else {
    local_res18 = &local_a8;
    bVar3 = ``UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_3>::operator()'::
            __l5::<lambda_4>::operator()(&local_res18);
    if (bVar3) goto LAB_14a7b758f;
  }
LAB_14a7b7639:
  if ((local_a8.Object == (FUIActionBinding *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar1 = ((local_a8.Object)->Handle).RegistrationId;
  if ((local_b8.Object == (FUIActionBinding *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = uVar1 < (uint)((local_b8.Object)->Handle).RegistrationId;
LAB_14a7b76c6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// ActionBarUpdateBegin @ 14a7bd270

void __thiscall UCommonBoundActionBar::ActionBarUpdateBegin(UCommonBoundActionBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a7bd273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))();
  return;
}

// ActionBarUpdateBeginImpl @ 14a7bd280

void __thiscall UCommonBoundActionBar::ActionBarUpdateBeginImpl(UCommonBoundActionBar *this)

{
  return;
}

// ActionBarUpdateEnd @ 14a7bd290

void __thiscall UCommonBoundActionBar::ActionBarUpdateEnd(UCommonBoundActionBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a7bd293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))();
  return;
}

// ActionBarUpdateEndImpl @ 14a7bd2a0

void __thiscall UCommonBoundActionBar::ActionBarUpdateEndImpl(UCommonBoundActionBar *this)

{
  return;
}

// CreateActionButton @ 14a7c8af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UCommonBoundActionBar::CreateActionButton
          (UCommonBoundActionBar *this,FUIActionBindingHandle *param_1)

{
  UUserWidget *pUVar1;
  UClass *local_res8 [4];
  
  local_res8[0] = (this->ActionButtonClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  pUVar1 = UDynamicEntryBoxBase::CreateEntryInternal
                     ((UDynamicEntryBoxBase *)this,(TSubclassOf<UUserWidget>)local_res8);
  return pUVar1;
}

// DoAnyActionButtonsHaveMouseCapture @ 14a7d4030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UCommonBoundActionBar::DoAnyActionButtonsHaveMouseCapture(UCommonBoundActionBar *this)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FSlateUser *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedPtr<SWidget,1> local_48;
  FWeakWidgetPath local_38;
  
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))();
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2c8))(plVar8,&local_58);
    if (local_58 != (FSlateUser *)0x0) {
      if ((local_58 == (FSlateUser *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      bVar6 = FSlateUser::HasAnyCapture(local_58);
      if (bVar6) {
        if ((local_58 == (FSlateUser *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FSlateUser::GetWeakCursorCapturePath(local_58,&local_38);
        pTVar9 = UDynamicEntryBoxBase::GetAllEntries((UDynamicEntryBoxBase *)this);
        pFVar11 = (pTVar9->AllocatorInstance).Data;
        iVar4 = pTVar9->ArrayNum;
        pFVar2 = pFVar11 + (longlong)iVar4 * 8;
        while( true ) {
          if (pTVar9->ArrayNum != iVar4) {
            `TCheckedPointerIterator<UUserWidget_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar11 == pFVar2) break;
          pTVar10 = UWidget::GetCachedWidget(*(UWidget **)pFVar11,&local_48);
          bVar6 = FWeakWidgetPath::ContainsWidget(&local_38,pTVar10->Object);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          if (bVar6) {
            if (local_38.Window.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_38.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount
              ;
              aVar3 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)((local_38.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8
                            ))(local_38.Window.WeakReferenceCount.ReferenceController,1);
              }
            }
            DestructItems<TWeakPtr<SWidget,1>,int>
                      ((TWeakPtr<SWidget,1> *)local_38.Widgets.AllocatorInstance.Data,
                       local_38.Widgets.ArrayNum);
            if ((TWeakPtr<SWidget,1> *)local_38.Widgets.AllocatorInstance.Data !=
                (TWeakPtr<SWidget,1> *)0x0) {
              FMemory::Free(local_38.Widgets.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50);
            return true;
          }
          pFVar11 = pFVar11 + 8;
        }
        if (local_38.Window.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_38.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)((local_38.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_38.Window.WeakReferenceCount.ReferenceController,1);
          }
        }
        DestructItems<TWeakPtr<SWidget,1>,int>
                  ((TWeakPtr<SWidget,1> *)local_38.Widgets.AllocatorInstance.Data,
                   local_38.Widgets.ArrayNum);
        if ((TWeakPtr<SWidget,1> *)local_38.Widgets.AllocatorInstance.Data !=
            (TWeakPtr<SWidget,1> *)0x0) {
          FMemory::Free(local_38.Widgets.AllocatorInstance.Data);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  return false;
}

// GetPrivateStaticClass @ 14a7e4e70

UClass * __cdecl UCommonBoundActionBar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBoundActionBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBoundActionBar",
               &Z_Registration_Info_UClass_UCommonBoundActionBar.InnerSingleton,
               StaticRegisterNativesUCommonBoundActionBar,0x2c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonBoundActionBar>,
               InternalVTableHelperCtorCaller<UCommonBoundActionBar>,local_res8,
               UDynamicEntryBoxBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBoundActionBar.InnerSingleton;
}

// HandleBoundActionsUpdated @ 14a7ea700

void __thiscall
UCommonBoundActionBar::HandleBoundActionsUpdated(UCommonBoundActionBar *this,bool param_1)

{
  if ((!param_1) && (this->bDisplayOwningPlayerActionsOnly != false)) {
    return;
  }
  UpdateDisplay(this);
  return;
}

// HandleDeferredDisplayUpdate @ 14a7ebf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonBoundActionBar::HandleDeferredDisplayUpdate(UCommonBoundActionBar *this)

{
  FUIActionBindingHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  ECommonInputType EVar4;
  int iVar5;
  UGameInstance *this_00;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UCommonUIActionRouterBase *this_01;
  ULocalPlayer *pUVar7;
  UCommonInputSubsystem *this_02;
  TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  UObjectBaseUtility *this_03;
  UClass *pUVar9;
  longlong *plVar10;
  ulonglong uVar11;
  FIdentityFunctor FVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FUIActionBindingHandle *pFVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_218 [32];
  FIdentityFunctor local_1c8;
  undefined1 local_1c7 [7];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  ForAnyElementType local_1b0;
  uint local_1a8;
  int local_1a4;
  FString local_1a0;
  int iStack_190;
  undefined1 uStack_18c;
  undefined2 uStack_18b;
  undefined1 uStack_189;
  uint local_188;
  ULocalPlayer *local_180;
  undefined8 local_178;
  FScriptContainerElement *local_170;
  ULocalPlayer **local_168;
  UClass *local_160;
  FScriptContainerElement *local_158;
  TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> local_150;
  undefined3 local_137;
  undefined5 uStack_134;
  undefined4 uStack_12f;
  undefined2 local_12b;
  undefined1 local_129;
  UCommonUIActionRouterBase *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_110;
  UCommonBoundActionBar *local_108;
  <lambda_3> local_f8;
  FString local_d8;
  int local_c8;
  UCommonUIActionRouterBase *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_a0;
  UCommonBoundActionBar *local_98;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  (**(code **)(this->_padding_ + 800))();
  this->bIsRefreshQueued = false;
  UDynamicEntryBoxBase::ResetInternal((UDynamicEntryBoxBase *)this,false);
  this_00 = UWidget::GetGameInstance((UWidget *)this);
  if ((this_00 == (UGameInstance *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonBoundActionBar.cpp"
                         ,0x9c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_180 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  pTVar6 = UGameInstance::GetLocalPlayers(this_00);
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = pTVar6->ArrayNum;
  lVar13 = (longlong)(int)local_1a8;
  pFVar14 = (pTVar6->AllocatorInstance).Data;
  if (local_1a8 == 0) {
    local_1a4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_1a8,0,&local_1b0,local_1a8,&local_1a4);
    memcpy(local_1b0.Data,pFVar14,lVar13 << 3);
  }
  local_168 = &local_180;
  AlgoImpl::
  StableSortInternal<ULocalPlayer_*,FIdentityFunctor,TDereferenceWrapper<ULocalPlayer_*,_UCommonBoundActionBar::HandleDeferredDisplayUpdate_::__l2::<lambda_1>_>_>
            ((ULocalPlayer **)local_1b0.Data,local_1a8,local_1c8,(<lambda_1> *)&local_168);
  uVar11 = (ulonglong)(int)local_1a8;
  local_188 = local_1a8;
  pFVar14 = local_1b0.Data + uVar11 * 8;
  FVar16.Data = local_1b0.Data;
  FVar12 = local_1c8;
  local_158 = pFVar14;
  do {
    this_01 = (UCommonUIActionRouterBase *)0x0;
    local_170 = FVar16.Data;
    if (local_1a8 != (uint)uVar11) {
      local_1c7[0] = 0;
      `TCheckedPointerIterator<ULocalPlayer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1c7);
    }
    if (FVar16.Data == pFVar14) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnActionBarUpdated,
                 (void *)0x0);
      (**(code **)(this->_padding_ + 0x328))(this);
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      return;
    }
    pUVar7 = *(ULocalPlayer **)FVar16.Data;
    if ((pUVar7 == local_180) || (this->bDisplayOwningPlayerActionsOnly == false)) {
      local_160 = (this->ActionButtonClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_160);
      }
      bVar3 = UDynamicEntryBoxBase::IsEntryClassValid
                        ((UDynamicEntryBoxBase *)this,(TSubclassOf<UUserWidget>)&local_160);
      if (bVar3) {
        if (pUVar7 != (ULocalPlayer *)0x0) {
          this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(pUVar7);
        }
        if (this_01 != (UCommonUIActionRouterBase *)0x0) {
          pUVar7 = CastChecked<ULocalPlayer,UObject>((UObject *)this_01->_padding_);
          this_02 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(pUVar7);
          if ((this_02 == (UCommonInputSubsystem *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InputSubsytem",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                                 ,0x28d,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          EVar4 = UCommonInputSubsystem::GetCurrentInputType(this_02);
          UCommonInputSubsystem::GetCurrentGamepadName(this_02);
          local_88._0_8_ = 0;
          local_88._8_8_ = 0;
          local_88._32_8_ = 0;
          local_88._40_4_ = 0;
          local_88._44_4_ = 0x80;
          local_88._48_4_ = 0xffffffff;
          local_88._52_4_ = 0;
          local_48 = (void *)0x0;
          local_40 = 0;
          pTVar8 = UCommonUIActionRouterBase::GatherActiveBindings(this_01,&local_150);
          uStack_11c = (undefined4)local_178;
          uStack_118 = (undefined4)((ulonglong)local_178 >> 0x20);
          pTStack_110 = &local_88;
          local_1c0.Data = (FScriptContainerElement *)0x0;
          local_1b8 = 0;
          pFVar15 = (FUIActionBindingHandle *)(pTVar8->AllocatorInstance).Data;
          local_a8 = CONCAT44(uStack_114,uStack_118);
          uStack_120 = CONCAT31(uStack_120._1_3_,EVar4);
          uStack_b0 = CONCAT44(uStack_11c,uStack_120);
          pFVar1 = pFVar15 + pTVar8->ArrayNum;
          pTStack_a0 = pTStack_110;
          local_108 = this;
          local_98 = this;
          local_128 = this_01;
          local_b8 = this_01;
          for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 1) {
            bVar3 = `UCommonBoundActionBar::HandleDeferredDisplayUpdate'::__l22::<lambda_2>::
                    operator()(&local_b8,pFVar15);
            if (bVar3) {
              if (((local_1c0.Data <= pFVar15) &&
                  (pFVar15 < (FUIActionBindingHandle *)
                             (local_1c0.Data + (longlong)local_1b8._4_4_ * 0x18))) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar5 = (int)local_1b8;
              if ((int)local_1b8 == local_1b8._4_4_) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_1c0,(int *)((longlong)&local_1b8 + 4));
              }
              local_1b8 = CONCAT44(local_1b8._4_4_,iVar5 + 1);
              pFVar14 = local_1c0.Data + (longlong)iVar5 * 0x18;
              ::FString::FString((FString *)pFVar14,&pFVar15->CachedDebugActionName);
              *(int *)(pFVar14 + 0x10) = pFVar15->RegistrationId;
            }
          }
          DestructItems<FUIActionBindingHandle,int>
                    ((FUIActionBindingHandle *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
          if ((FUIActionBindingHandle *)local_150.AllocatorInstance.Data !=
              (FUIActionBindingHandle *)0x0) {
            FMemory::Free(local_150.AllocatorInstance.Data);
          }
          uStack_134 = (undefined5)local_178;
          uStack_12f._0_3_ = (undefined3)((ulonglong)local_178 >> 0x28);
          uStack_18c = uStack_12f._3_1_;
          uStack_18b = local_12b;
          local_1a0.Data._9_7_ = SUB87(CONCAT53(uStack_134,local_137),0);
          iStack_190 = (int)((ulonglong)local_178 >> 0x20);
          uStack_189 = local_129;
          local_f8._20_1_ = uStack_12f._3_1_;
          local_f8.PlayerGamepadName.Number = iStack_190;
          local_f8._21_2_ = local_12b;
          local_f8._23_1_ = local_129;
          local_f8._9_7_ = local_1a0.Data._9_7_;
          local_f8.PlayerInputType = EVar4;
          local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this_01;
          local_1a0.Data.ArrayNum._0_1_ = EVar4;
          local_f8.ActionRouter = this_01;
          AlgoImpl::
          IntroSortInternal<FUIActionBindingHandle,int,FIdentityFunctor,_UCommonBoundActionBar::HandleDeferredDisplayUpdate_::__l22::<lambda_3>_>
                    ((FUIActionBindingHandle *)local_1c0.Data,(int)local_1b8,FVar12,&local_f8);
          iVar5 = (int)local_1b8;
          pFVar1 = (FUIActionBindingHandle *)(local_1c0.Data + (longlong)(int)local_1b8 * 0x18);
          FVar16.Data = local_1c0.Data;
          while( true ) {
            if ((int)local_1b8 != iVar5) {
              local_1c8 = (FIdentityFunctor)0x0;
              `TCheckedPointerIterator<FUIActionBindingHandle,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_1c8);
            }
            if ((FUIActionBindingHandle *)FVar16.Data == pFVar1) break;
            ::FString::FString(&local_1a0,(FString *)FVar16.Data);
            iStack_190 = ((FUIActionBindingHandle *)FVar16.Data)->RegistrationId;
            this_03 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x330))(this);
            if (this_03 == (UObjectBaseUtility *)0x0) {
LAB_14a7ec42d:
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<3757866779343323456>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonBoundActionBar.cpp"
                                 ,0x140,"ActionButton");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              pUVar9 = Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister();
              plVar10 = UObjectBaseUtility::GetInterfaceAddress(this_03,pUVar9);
              if (plVar10 == (longlong *)0x0) goto LAB_14a7ec42d;
              pcVar2 = *(code **)(*plVar10 + 0x10);
              ::FString::FString(&local_d8,&local_1a0);
              local_c8 = iStack_190;
              (*pcVar2)(plVar10,&local_d8);
              (**(code **)(this->_padding_ + 0x318))(this,plVar10,&local_1a0);
            }
            if ((UCommonUIActionRouterBase *)local_1a0.Data.AllocatorInstance.Data !=
                (UCommonUIActionRouterBase *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
            FVar16.Data = FVar16.Data + 0x18;
          }
          DestructItems<FUIActionBindingHandle,int>
                    ((FUIActionBindingHandle *)local_1c0.Data,(int)local_1b8);
          FVar12 = local_1c8;
          if ((FUIActionBindingHandle *)local_1c0.Data != (FUIActionBindingHandle *)0x0) {
            FMemory::Free(local_1c0.Data);
          }
          local_40 = 0;
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_88);
          pFVar14 = local_158;
        }
      }
    }
    uVar11 = (ulonglong)local_188;
    FVar16.Data = local_170 + 8;
  } while( true );
}

// HandleInputMappingsRebuiltUpdated @ 14a7eccd0

void __thiscall
UCommonBoundActionBar::HandleInputMappingsRebuiltUpdated(UCommonBoundActionBar *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  UCommonBoundActionBar *pUStackX_8;
  TWeakPtr<FTSTicker::FElement,1> TStack_68;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  if (this->bIsRefreshQueued == false) {
    this->bIsRefreshQueued = true;
    this_00 = FTSTicker::GetCoreTicker();
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&FStack_50);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::`5'::<lambda_1>_>
                 ::_vftable_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      pUStackX_8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pUStackX_8);
      puVar3[4] = this;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    FTSTicker::AddTicker
              (this_00,&TStack_68,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)auStack_58,0.0);
    if (TStack_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    if ((FStack_50.DelegateSize != 0) &&
       (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_50,0,0,0x10);
      FStack_50.DelegateSize = 0;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    if (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_58);
  }
  return;
}

// HandlePlayerAdded @ 14a7ee350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonBoundActionBar::HandlePlayerAdded(UCommonBoundActionBar *this,int param_1)

{
  UGameInstance *this_00;
  ULocalPlayer *pUVar1;
  ULocalPlayer *pUVar2;
  
  this_00 = UWidget::GetGameInstance((UWidget *)this);
  pUVar1 = UGameInstance::GetLocalPlayerByIndex(this_00,param_1);
  MonitorPlayerActions(this,pUVar1);
  pUVar2 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if ((pUVar1 == pUVar2) || (this->bDisplayOwningPlayerActionsOnly == false)) {
    UpdateDisplay(this);
  }
  return;
}

// HandlePlayerRemoved @ 14a7ee3b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonBoundActionBar::HandlePlayerRemoved(UCommonBoundActionBar *this,int param_1)

{
  UGameInstance *this_00;
  ULocalPlayer *pUVar1;
  ULocalPlayer *pUVar2;
  
  this_00 = UWidget::GetGameInstance((UWidget *)this);
  pUVar1 = UGameInstance::GetLocalPlayerByIndex(this_00,param_1);
  pUVar2 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if ((pUVar1 == pUVar2) || (this->bDisplayOwningPlayerActionsOnly == false)) {
    UpdateDisplay(this);
  }
  return;
}

// HandledInputTypeUpdated @ 14a7f0be0

void __thiscall
UCommonBoundActionBar::HandledInputTypeUpdated(UCommonBoundActionBar *this,ECommonInputType param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  UCommonBoundActionBar *pUStackX_8;
  TWeakPtr<FTSTicker::FElement,1> TStack_68;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  if (this->bIsRefreshQueued == false) {
    this->bIsRefreshQueued = true;
    this_00 = FTSTicker::GetCoreTicker();
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&FStack_50);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::`5'::<lambda_1>_>
                 ::_vftable_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      pUStackX_8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pUStackX_8);
      puVar3[4] = this;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    FTSTicker::AddTicker
              (this_00,&TStack_68,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)auStack_58,0.0);
    if (TStack_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    if ((FStack_50.DelegateSize != 0) &&
       (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_50,0,0,0x10);
      FStack_50.DelegateSize = 0;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    if (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_58);
  }
  return;
}

// IsSafeToUpdateDisplay @ 14a7f7260

bool __thiscall UCommonBoundActionBar::IsSafeToUpdateDisplay(UCommonBoundActionBar *this)

{
  bool bVar1;
  
  bVar1 = DoAnyActionButtonsHaveMouseCapture(this);
  return !bVar1;
}

// MonitorPlayerActions @ 14a7f8620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCommonBoundActionBar::MonitorPlayerActions(UCommonBoundActionBar *this,ULocalPlayer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonInputSubsystem *pUVar4;
  ULocalPlayer *pUVar5;
  UEnhancedInputLocalPlayerSubsystem *pUVar6;
  char *pcVar7;
  UObject *this_00;
  UFunction *pUVar8;
  char *pcVar9;
  <lambda_1> local_res18 [8];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FWeakObjectPtr local_100;
  FName local_f8;
  undefined1 local_e8 [48];
  FName local_b8;
  FDestructionSentinel local_b0;
  undefined1 local_98 [16];
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  if ((param_1 != (ULocalPlayer *)0x0) &&
     (pUVar3 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(param_1),
     pUVar3 != (UCommonUIActionRouterBase *)0x0)) {
    (**(code **)(this->_padding_ + 0x2e0))(this);
    local_e8._8_4_ = 0;
    local_e8._0_8_ = HandleBoundActionsUpdated;
    lStack_80 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
    local_88 = HandleBoundActionsUpdated;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonBoundActionBar,bool>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnBoundActionsUpdatedEvent,(UCommonBoundActionBar *)local_98,
               (pmf_5ab28bc9 *)this,(bool *)(local_98 + 0x10));
  }
  pUVar4 = UCommonInputSubsystem::Get(param_1);
  if (pUVar4 != (UCommonInputSubsystem *)0x0) {
    local_e8._8_4_ = 0;
    local_e8._0_8_ = HandledInputTypeUpdated;
    lStack_70 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
    local_78 = HandledInputTypeUpdated;
    TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonBoundActionBar>
              (&pUVar4->OnInputMethodChangedNative,(UCommonBoundActionBar *)local_e8,
               (pmf_8bf6ead4 *)this);
  }
  bVar2 = CommonUI::IsEnhancedInputSupportEnabled();
  if (!bVar2) {
    return;
  }
  pUVar5 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if ((param_1 != pUVar5) && (this->bDisplayOwningPlayerActionsOnly != false)) {
    return;
  }
  if (param_1 == (ULocalPlayer *)0x0) {
    return;
  }
  pUVar6 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(param_1);
  if (pUVar6 == (UEnhancedInputLocalPlayerSubsystem *)0x0) {
    return;
  }
  pcVar7 = strstr("&UCommonBoundActionBar::HandleInputMappingsRebuiltUpdated","::");
  if (pcVar7 == (char *)0x0) {
LAB_14a7f878b:
    pcVar9 = &DAT_00000002;
LAB_14a7f8790:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar7;
      pcVar7 = strstr(pcVar9 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14a7f878b;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_14a7f8790;
  }
  ::FName::FName((FName *)(local_e8 + 0x10),pcVar9);
  local_res20.ComparisonIndex.Value = local_e8._16_4_;
  local_res20.Number = local_e8._20_4_;
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100.ObjectIndex = 0;
  local_100.ObjectSerialNumber = 0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_e8._24_8_ = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonBoundActionBar *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_100,(FObjectPtr)((longlong)local_e8 + 0x18));
  local_f8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_108,(FReadAccessScope *)(local_98 + 0x30));
  if ((local_f8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_100), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_98 + 0x30));
  }
  else {
    pUVar8 = UObject::FindFunction(this_00,local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_98 + 0x30));
    if (pUVar8 != (UFunction *)0x0) goto LAB_14a7f887e;
  }
  local_e8._32_8_ = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<UCommonBoundActionBar>'::__l2::<lambda_1>::operator()(local_e8 + 0x20);
LAB_14a7f887e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_108,&local_50);
  local_e8._40_4_ = local_100.ObjectIndex;
  local_e8._44_4_ = local_100.ObjectSerialNumber;
  local_b8 = local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar6->ControlMappingsRebuiltDelegate,(FWriteAccessScope *)&local_b0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar6->ControlMappingsRebuiltDelegate).field_0x8,
             (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(local_e8 + 0x28));
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar6->ControlMappingsRebuiltDelegate).field_0x8,local_res18,Default);
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  return;
}

// NativeOnActionButtonCreated @ 14a7f9aa0

void __thiscall
UCommonBoundActionBar::NativeOnActionButtonCreated
          (UCommonBoundActionBar *this,ICommonBoundActionButtonInterface *param_1,
          FUIActionBindingHandle *param_2)

{
  return;
}

// OnWidgetRebuilt @ 14a800b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonBoundActionBar::OnWidgetRebuilt(UCommonBoundActionBar *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGameInstance *this_00;
  UGameViewportClient *pUVar3;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  UWidget::OnWidgetRebuilt((UWidget *)this);
  this_00 = UWidget::GetGameInstance((UWidget *)this);
  if (this_00 != (UGameInstance *)0x0) {
    pUVar3 = UGameInstance::GetGameViewportClient(this_00);
    if (pUVar3 != (UGameViewportClient *)0x0) {
      pUVar3 = UGameInstance::GetGameViewportClient(this_00);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->PlayerAddedDelegate,
                 this);
      pUVar3 = UGameInstance::GetGameViewportClient(this_00);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar3->PlayerRemovedDelegate,this);
      pUVar3 = UGameInstance::GetGameViewportClient(this_00);
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddUObject<UCommonBoundActionBar>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &pUVar3->PlayerAddedDelegate,(UCommonBoundActionBar *)local_res10,
                 (pmf_fddc781b *)this);
      pUVar3 = UGameInstance::GetGameViewportClient(this_00);
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddUObject<UCommonBoundActionBar>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &pUVar3->PlayerRemovedDelegate,(UCommonBoundActionBar *)local_res10,
                 (pmf_fddc781b *)this);
    }
    pTVar4 = UGameInstance::GetLocalPlayers(this_00);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<ULocalPlayer_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar1) break;
      MonitorPlayerActions(this,*(ULocalPlayer **)pFVar5);
      pFVar5 = pFVar5 + 8;
    }
    HandleDeferredDisplayUpdate(this);
  }
  return;
}

// ReleaseSlateResources @ 14a811ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
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
UCommonBoundActionBar::ReleaseSlateResources(UCommonBoundActionBar *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULocalPlayer *this_00;
  UGameInstance *this_01;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UCommonUIActionRouterBase *pUVar4;
  UCommonInputSubsystem *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  
  UDynamicEntryBoxBase::ReleaseSlateResources((UDynamicEntryBoxBase *)this,param_1);
  this_01 = UWidget::GetGameInstance((UWidget *)this);
  if (this_01 != (UGameInstance *)0x0) {
    pTVar3 = UGameInstance::GetLocalPlayers(this_01);
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<ULocalPlayer_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      this_00 = *(ULocalPlayer **)pFVar6;
      if ((this_00 != (ULocalPlayer *)0x0) &&
         (pUVar4 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
         pUVar4 != (UCommonUIActionRouterBase *)0x0)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar4->OnBoundActionsUpdatedEvent,this);
      }
      pUVar5 = UCommonInputSubsystem::Get(this_00);
      if (pUVar5 != (UCommonInputSubsystem *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnInputMethodChangedNative,this);
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// SetDisplayOwningPlayerActionsOnly @ 14a818090

void __thiscall
UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(UCommonBoundActionBar *this,bool param_1)

{
  if (param_1 != this->bDisplayOwningPlayerActionsOnly) {
    this->bDisplayOwningPlayerActionsOnly = param_1;
    UpdateDisplay(this);
    return;
  }
  return;
}

// StaticRegisterNativesUCommonBoundActionBar @ 14a81e400

void __cdecl UCommonBoundActionBar::StaticRegisterNativesUCommonBoundActionBar(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCommonBoundActionBar_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a81ff30

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonBoundActionBar::SynchronizeProperties(UCommonBoundActionBar *this)

{
  EFlowDirectionPreference EVar1;
  byte bVar2;
  byte bVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  EVisibility EVar12;
  UObject *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  UFunction *pUVar16;
  undefined7 extraout_var;
  FDelegateToolTip *pFVar17;
  FDelegateToolTip *pFVar18;
  FArguments *pFVar19;
  TSharedRef<SWidget,1> *pTVar20;
  TAttribute<FText> *pTVar21;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar22;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_878;
  FDelegateAllocation FStack_870;
  TSharedPtr<SWidget,1> TStack_860;
  SWidget *pSStack_850;
  TReferenceControllerBase<1> *pTStack_848;
  undefined1 uStack_840;
  undefined1 uStack_83f;
  undefined1 auStack_838 [8];
  ForAnyElementType FStack_830;
  ulonglong uStack_828;
  byte bStack_820;
  undefined1 uStack_81f;
  undefined1 auStack_818 [8];
  ForAnyElementType FStack_810;
  ulonglong uStack_808;
  undefined2 uStack_800;
  undefined1 auStack_7f8 [8];
  FDelegateAllocation FStack_7f0;
  undefined2 uStack_7e0;
  undefined1 auStack_7d8 [8];
  FDelegateAllocation FStack_7d0;
  undefined2 uStack_7c0;
  undefined1 auStack_7b8 [8];
  void *pvStack_7b0;
  int iStack_7a8;
  undefined1 auStack_7a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_788;
  ForAnyElementType FStack_780;
  ulonglong uStack_778;
  undefined1 auStack_770 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_758;
  ForAnyElementType FStack_750;
  ulonglong uStack_748;
  code *pcStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  bool bStack_728;
  undefined1 auStack_718 [16];
  undefined1 auStack_708 [8];
  void *pvStack_700;
  undefined8 uStack_6f8;
  UObject *pUStack_6f0;
  UCommonBoundActionBar *pUStack_6e8;
  code *pcStack_6e0;
  TRawPtrProxy<FDelegateToolTip> TStack_6d8;
  UObject *pUStack_6d0;
  FMemScope FStack_6c8;
  FName FStack_6c0;
  FName FStack_6b8;
  undefined1 auStack_6b0 [8];
  undefined1 auStack_6a8 [24];
  undefined1 uStack_690;
  undefined1 uStack_68f;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  TVector2<double>_u_0 TStack_670;
  undefined1 uStack_660;
  undefined1 auStack_658 [8];
  void *pvStack_650;
  undefined8 uStack_648;
  TSharedRef<FDelegateToolTip,1> TStack_640;
  TSharedRef<SToolTip,1> TStack_630;
  TSharedRef<SWidget,1> TStack_620;
  TAttribute<FSlateBrush_const_*> TStack_610;
  FDestructionSentinel FStack_5e8;
  FDestructionSentinel FStack_5d0;
  FDestructionSentinel FStack_5b8;
  FDestructionSentinel FStack_5a0;
  FDestructionSentinel FStack_588;
  FDestructionSentinel FStack_570;
  FDelegateAllocation *pFStack_558;
  FDestructionSentinel FStack_550;
  FDelegateAllocation *pFStack_538;
  FDestructionSentinel FStack_530;
  FDelegateAllocation *pFStack_518;
  TAttribute<FMargin> TStack_510;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  TDelegateBase<FNotThreadSafeDelegateMode> TStack_4d8;
  SWidget *pSStack_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> TStack_4b0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  FReadAccessScope FStack_438;
  FReadAccessScope FStack_420;
  FReadAccessScope FStack_408;
  TAttribute<FText> TStack_3f0;
  TAttribute<FText> TStack_3c0;
  FArguments FStack_390;
  
  auStackX_8[0] = Visible;
  auStackX_8[1] = false;
  auStackX_8._2_2_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  UWidget::GetCachedWidget((UWidget *)this,&TStack_860);
  pSVar6 = TStack_860.Object;
  if (TStack_860.Object != (SWidget *)0x0) {
    if ((this->_padding_ & 0x800) != 0) {
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auStack_718._0_4_ = ZEXT14(*(byte *)((longlong)&this->_padding_ + 3));
      auStack_718[4] = true;
      uStack_6f8 = 0;
      auStack_718[8] = true;
      auStack_708 = (undefined1  [8])0x0;
      pvStack_700 = (void *)0x0;
      SWidget::SetCursor(pSVar6,(TAttribute<TOptional<EMouseCursor::Type>_> *)auStack_718);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_708);
      if (pvStack_700 != (void *)0x0) {
        FMemory::Free(pvStack_700);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_708);
    }
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &FStack_408);
      FVar4 = (FName)this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_408);
      pUVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      uStack_800 = 0x100;
      FStack_7f0.DelegateSize = 0;
      FStack_7f0._12_4_ = 0;
      auStack_7f8 = (undefined1  [8])0x0;
      FStack_7f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7f8,
                 (FWriteAccessScope *)&FStack_570);
      pFStack_558 = &FStack_7f0;
      puVar14 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7f0);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar15;
        *puVar14 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar14 + 4) = FVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        puVar14[5] = 0;
        pUStack_6d0 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 5),(FObjectPtr)&pUStack_6d0);
        if ((FVar4 == (FName)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pUVar13 != (UObject *)0x0) {
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar14 + 5));
          pUVar16 = UObject::FindFunctionChecked(pUVar13,FVar4);
          puVar14[3] = pUVar16;
        }
      }
      if (FStack_570.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_570.Accessor,&FStack_570);
      }
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8;
      bVar8 = false;
      bVar11 = true;
      auStack_6b0[0] = (byte)uStack_800;
      auStack_6b0[1] = uStack_800._1_1_;
    }
    else {
      auStack_6b0[1] = 1;
      auStack_6b0[0] = *(byte *)((longlong)&this->_padding_ + 1) >> 2 & 1;
      uStack_81f = 1;
      bVar8 = true;
      bVar11 = false;
      uStack_808 = 0;
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_818;
      auStack_818 = (undefined1  [8])0x0;
      FStack_810.Data = (FScriptContainerElement *)0x0;
      bStack_820 = auStack_6b0[0];
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8,pTVar22);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar6->EnabledStateAttribute,pSVar6,(TAttribute<bool> *)auStack_6b0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8);
    if ((void *)auStack_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_6a8);
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_818,
                 (FWriteAccessScope *)&FStack_5b8);
      if (((int)uStack_808 != 0) && (FStack_810.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_810.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_810,0,0,0x10);
        uStack_808 = uStack_808 & 0xffffffff00000000;
      }
      if (FStack_5b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5b8.Accessor,&FStack_5b8);
      }
      if (FStack_810.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_810.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_818);
    }
    if (bVar11) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8);
      if (FStack_7f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7f8);
    }
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcStack_6e0 = *(code **)(pSVar6->_padding_ + 0x1c8);
    bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &FStack_438);
      FVar4 = (FName)this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_438);
      pUVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      uStack_7e0 = 0x100;
      FStack_7d0.DelegateSize = 0;
      FStack_7d0._12_4_ = 0;
      auStack_7d8 = (undefined1  [8])0x0;
      FStack_7d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7d8,
                 (FWriteAccessScope *)&FStack_550);
      pFStack_538 = &FStack_7d0;
      puVar14 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7d0);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar15;
        *puVar14 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar14 + 4) = FVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        puVar14[5] = 0;
        pUStack_6f0 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 5),(FObjectPtr)&pUStack_6f0);
        if ((FVar4 == (FName)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pUVar13 != (UObject *)0x0) {
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar14 + 5));
          pUVar16 = UObject::FindFunctionChecked(pUVar13,FVar4);
          puVar14[3] = pUVar16;
        }
      }
      if (FStack_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_550.Accessor,&FStack_550);
      }
      pcStack_738 = UWidget::ConvertVisibility;
      uStack_72c = TStack_620.SharedReferenceCount.ReferenceController._4_4_;
      uStack_730 = 0;
      TStack_878.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_870.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_530);
      pFStack_518 = &FStack_870;
      puVar14 = UE::Core::Private::DelegateAllocate(0x48,&FStack_870);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        *(undefined1 *)(puVar14 + 1) = (undefined1)uStack_7e0;
        *(undefined1 *)((longlong)puVar14 + 9) = uStack_7e0._1_1_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar14 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[5] = uVar15;
        *puVar14 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUWidget____A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar14[6] = 0;
        pUStack_6e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 6),(FObjectPtr)&pUStack_6e8);
        puVar14[7] = pcStack_738;
        puVar14[8] = CONCAT44(uStack_72c,uStack_730);
      }
      if (FStack_530.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_530.Accessor,&FStack_530);
      }
      uStack_7c0 = 0x119;
      auStack_7b8 = (undefined1  [8])0x0;
      pvStack_7b0 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&pcStack_738);
      if (pvStack_7b0 != (void *)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      pvStack_7b0 = (void *)FStack_870.DelegateAllocator;
      iStack_7a8 = FStack_870.DelegateSize;
      FStack_870.DelegateSize = 0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (bStack_728 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_72c,uStack_730),
                   (FDestructionSentinel *)&pcStack_738);
      }
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8;
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar11 = false;
      uStack_4e0 = (undefined1)uStack_7c0;
      uStack_4df = uStack_7c0._1_1_;
    }
    else {
      uStack_690 = *(undefined1 *)((longlong)&this->_padding_ + 5);
      uStack_68f = 1;
      uStack_678 = 0;
      uStack_688 = 0;
      uStack_680 = 0;
      EVar12 = UWidget::ConvertVisibility
                         ((UWidget *)this,(TAttribute<ESlateVisibility> *)auStackX_8);
      uStack_4df = 1;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar11 = true;
      uStack_4e0 = *(undefined1 *)CONCAT71(extraout_var,EVar12.Value.Value);
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_838;
      uStack_828 = 0;
      uStack_83f = 1;
      auStack_838 = (undefined1  [8])0x0;
      FStack_830.Data = (FScriptContainerElement *)0x0;
      uStack_840 = uStack_4e0;
    }
    pFVar18 = (FDelegateToolTip *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&TStack_4d8,pTVar22);
    (*pcStack_6e0)(pSVar6,&uStack_4e0);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_838,
                 (FWriteAccessScope *)&FStack_5a0);
      if (((int)uStack_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_830.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
        uStack_828 = uStack_828 & 0xffffffff00000000;
      }
      if (FStack_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5a0.Accessor,&FStack_5a0);
      }
      if (FStack_830.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_830.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_838);
    }
    if (bVar8) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_7b0 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7b8);
    }
    if (bVar9) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_5d0);
      if ((FStack_870.DelegateSize != 0) &&
         (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_870.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_870,0,0,0x10);
        FStack_870.DelegateSize = 0;
      }
      if (FStack_5d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5d0.Accessor,&FStack_5d0);
      }
      if (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_870.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_878.AccessDetector);
    }
    if (bVar10) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
      if (FStack_7d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7d8);
    }
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SWidget::SetClipping(pSVar6,*(EWidgetClipping *)((longlong)&this->_padding_ + 4));
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SWidget::SetPixelSnapping(pSVar6,*(EWidgetPixelSnapping *)((longlong)&this->_padding_ + 6));
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar1 = (EFlowDirectionPreference)this->_padding_;
    if (pSVar6->FlowDirectionPreference != EVar1) {
      pSVar6->FlowDirectionPreference = EVar1;
      SWidget::Invalidate(pSVar6,Paint);
    }
    bVar2 = pSVar6->field_0x30;
    bVar3 = *(byte *)((longlong)&this->_padding_ + 1);
    if (((bVar2 ^ bVar3) >> 4 & 1) != 0) {
      pSVar6->field_0x30 = (bVar3 & 0xf0 ^ bVar2) & 0x10 ^ bVar2;
      SWidget::Invalidate(pSVar6,PaintAndVolatility);
    }
    if (*(float *)&this->_padding_ != pSVar6->RenderOpacity) {
      pSVar6->RenderOpacity = *(float *)&this->_padding_;
      SWidget::Invalidate(pSVar6,Paint);
    }
    UWidget::UpdateRenderTransform((UWidget *)this);
    TStack_670._s_0.X = (double)this->_padding_;
    TStack_670._s_0.Y = (double)this->_padding_;
    uStack_660 = 1;
    uStack_648 = 0;
    auStack_658 = (undefined1  [8])0x0;
    pvStack_650 = (void *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar6->RenderTransformPivotAttribute,pSVar6,
             (TAttribute<UE::Math::TVector2<double>_> *)&TStack_670._s_0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_658);
    if (pvStack_650 != (void *)0x0) {
      FMemory::Free(pvStack_650);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_658);
    bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    if (bVar11) {
      pFVar17 = ::operator_new(0x30);
      if (pFVar17 != (FDelegateToolTip *)0x0) {
        *(undefined8 *)&pFVar17->ToolTipWidgetDelegate = 0;
        pFVar17->_padding_ = (longlong)&___7FDelegateToolTip__6B_;
        *(undefined8 *)&(pFVar17->ToolTipWidgetDelegate).field_0x8 = 0;
        *(undefined8 *)&(pFVar17->ToolTipWidgetDelegate).field_0x10 = 0;
        (pFVar17->CachedToolTip).Object = (SWidget *)0x0;
        (pFVar17->CachedToolTip).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar18 = pFVar17;
      }
      TStack_6d8.Object = pFVar18;
      TSharedRef<FDelegateToolTip,1>::TSharedRef<FDelegateToolTip,1><FDelegateToolTip>
                (&TStack_640,&TStack_6d8);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &(TStack_640.Object)->ToolTipWidgetDelegate,
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      auStack_7a0._0_8_ = TStack_640.Object;
      auStack_7a0._8_8_ = TStack_640.SharedReferenceCount.ReferenceController;
      if (TStack_640.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_7a0[0x10] = true;
      uStack_778 = 0;
      TStack_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_780.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(pSVar6,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_7a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_788,(FWriteAccessScope *)&FStack_588);
      if (((int)uStack_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_780.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
        uStack_778 = uStack_778 & 0xffffffff00000000;
      }
      if (FStack_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_588.Accessor,&FStack_588);
      }
      if (FStack_780.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_780.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_788.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_7a0._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_640.SharedReferenceCount.ReferenceController);
    }
    else if (this->_padding_ == 0) {
      bVar11 = FText::IsEmpty((FText *)&this->_padding_);
      if ((!bVar11) ||
         (bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_),
         bVar11)) {
        bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        if (!bVar11) {
          pTVar21 = TAttribute<FText>::TAttribute<FText><FText>
                              (&TStack_3f0,(FText *)&this->_padding_);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                     &FStack_420);
          FStack_6c0 = (FName)this->_padding_;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&FStack_420);
          pUVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
          pTVar21 = TAttribute<FText>::Create<UObject>(&TStack_3c0,pUVar13,&FStack_6c0);
        }
        SWidget::SetToolTipText(pSVar6,pTVar21);
        if (bVar11) {
          TAttribute<FText>::~TAttribute<FText>(&TStack_3c0);
        }
      }
    }
    else {
      pFVar19 = SToolTip::FArguments::FArguments(&FStack_390);
      TStack_510.bIsSet = true;
      TStack_510.Getter._16_8_ = 0;
      TStack_510.Value.Left = 0.0;
      TStack_510.Value.Top = 0.0;
      TStack_510.Value.Right = 0.0;
      TStack_510.Value.Bottom = 0.0;
      TStack_510.Getter._0_8_ = 0;
      TStack_510.Getter._8_8_ = 0;
      pFVar19 = SToolTip::FArguments::TextMargin(pFVar19,&TStack_510);
      TStack_610.Value = (FSlateBrush *)0x0;
      TStack_610.bIsSet = true;
      TStack_610.Getter._16_8_ = 0;
      TStack_610.Getter._0_8_ = 0;
      TStack_610.Getter._8_8_ = 0;
      pFVar19 = SToolTip::FArguments::BorderImage(pFVar19,&TStack_610);
      pTVar20 = UWidget::TakeWidget((UWidget *)this->_padding_,&TStack_620);
      pTVar5 = (pTVar20->SharedReferenceCount).ReferenceController;
      pSVar6 = pTVar20->Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSStack_4c0 = (pFVar19->_Content).Widget.Object;
      pTStack_4b8 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar19->_Content).Widget.Object = pSVar6;
      (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_4b8);
      FLLMScope::FLLMScope
                (aFStackX_18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      FStack_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&FStack_6c8,&FStack_6b8,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&TStack_4b0,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                 ,0x5f8,(T0RequiredArgs *)(auStackX_8 + 8));
      FMemScope::~FMemScope(&FStack_6c8);
      FLLMScope::~FLLMScope(aFStackX_18);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                (&TStack_4b0,&TStack_630,pFVar19);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_4b0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(TStack_620.SharedReferenceCount.ReferenceController._4_4_,
                          TStack_620.SharedReferenceCount.ReferenceController._0_4_));
      SToolTip::FArguments::~FArguments(&FStack_390);
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auStack_770._8_8_ = TStack_630.SharedReferenceCount.ReferenceController;
      auStack_770._0_8_ = &(TStack_630.Object)->_padding_;
      if (TStack_630.Object == (SToolTip *)0x0) {
        auStack_770._0_8_ = pFVar18;
      }
      if (TStack_630.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_770[0x10] = true;
      uStack_748 = 0;
      TStack_758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_750.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(TStack_860.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_770);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_758,(FWriteAccessScope *)&FStack_5e8);
      if (((int)uStack_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_750.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
        uStack_748 = uStack_748 & 0xffffffff00000000;
      }
      if (FStack_5e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5e8.Accessor,&FStack_5e8);
      }
      if (FStack_750.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_750.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_758.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_770._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_630.SharedReferenceCount.ReferenceController);
    }
    if (this->_padding_ != 0) {
      (**(code **)(this->_padding_ + 0x308))(this,&pSStack_850);
      if (pSStack_850 != (SWidget *)0x0) {
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar6 = pSStack_850;
        pTVar21 = USlateAccessibleWidgetData::CreateAccessibleTextAttribute
                            ((USlateAccessibleWidgetData *)this->_padding_,
                             (TAttribute<FText> *)auStack_498);
        SWidget::SetAccessibleBehavior
                  (pSVar6,*(EAccessibleBehavior *)(this->_padding_ + 0x29),pTVar21,Main);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_480);
        if ((void *)auStack_480._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_480._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_480);
        if ((ITextData *)auStack_498._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_498._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar6 = pSStack_850;
        pTVar21 = USlateAccessibleWidgetData::CreateAccessibleSummaryTextAttribute
                            ((USlateAccessibleWidgetData *)this->_padding_,
                             (TAttribute<FText> *)auStack_468);
        SWidget::SetAccessibleBehavior
                  (pSVar6,*(EAccessibleBehavior *)(this->_padding_ + 0x2a),pTVar21,Summary);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_450);
        if ((void *)auStack_450._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_450._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_450);
        if ((ITextData *)auStack_468._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_468._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        SWidget::SetCanChildrenBeAccessible(pSStack_850,*(bool *)(this->_padding_ + 0x28));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_848);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_860.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateDisplay @ 14a826460

void __thiscall UCommonBoundActionBar::UpdateDisplay(UCommonBoundActionBar *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  UCommonBoundActionBar *local_res8;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (this->bIsRefreshQueued == false) {
    this->bIsRefreshQueued = true;
    this_00 = FTSTicker::GetCoreTicker();
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UCommonBoundActionBar::UpdateDisplay'::`5'::<lambda_1>_>
                 ::_vftable_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
      puVar3[4] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FTSTicker::AddTicker
              (this_00,&local_68,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,0.0);
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// execHandleInputMappingsRebuiltUpdated @ 14a82fa20

void __cdecl
UCommonBoundActionBar::execHandleInputMappingsRebuiltUpdated
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateDisplay((UCommonBoundActionBar *)param_1);
  return;
}

// execSetDisplayOwningPlayerActionsOnly @ 14a832e30

void __cdecl
UCommonBoundActionBar::execSetDisplayOwningPlayerActionsOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  if ((local_res8[0] != 0) != (bool)param_1[0x10].field_0x18) {
    param_1[0x10].field_0x18 = local_res8[0] != 0;
    UpdateDisplay((UCommonBoundActionBar *)param_1);
  }
  return;
}

