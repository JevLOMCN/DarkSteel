// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 31

// StaticClass @ 14a7810a0

UClass * __cdecl UCommonVisibilitySwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVisibilitySwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVisibilitySwitcher",
               &Z_Registration_Info_UClass_UCommonVisibilitySwitcher.InnerSingleton,
               StaticRegisterNativesUCommonVisibilitySwitcher,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCommonVisibilitySwitcher>,
               InternalVTableHelperCtorCaller<UCommonVisibilitySwitcher>,local_res8,
               UOverlay::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVisibilitySwitcher.InnerSingleton;
}

// UCommonVisibilitySwitcher @ 14a7aff20

UCommonVisibilitySwitcher * __thiscall
UCommonVisibilitySwitcher::UCommonVisibilitySwitcher
          (UCommonVisibilitySwitcher *this,FVTableHelper *param_1)

{
  UOverlay::UOverlay((UOverlay *)this,param_1);
  this->ShownVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->ActiveWidgetIndex = 0;
  this->bCurrentlySwitching = false;
  *(undefined8 *)&this->OnActiveWidgetIndexChangedEvent = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedEvent).field_0x10 = 0;
  this->bAutoActivateSlot = true;
  this->bActivateFirstSlotOnAdding = false;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedEvent).field_0x18 = 2;
  return this;
}

// UCommonVisibilitySwitcher @ 14a7aff90

UCommonVisibilitySwitcher * __thiscall
UCommonVisibilitySwitcher::UCommonVisibilitySwitcher
          (UCommonVisibilitySwitcher *this,FObjectInitializer *param_1)

{
  UOverlay::UOverlay((UOverlay *)this,param_1);
  this->ShownVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->ActiveWidgetIndex = 0;
  this->bCurrentlySwitching = false;
  *(undefined8 *)&this->OnActiveWidgetIndexChangedEvent = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedEvent).field_0x10 = 0;
  this->bAutoActivateSlot = true;
  this->bActivateFirstSlotOnAdding = false;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedEvent).field_0x18 = 2;
  return this;
}

// ~UCommonVisibilitySwitcher @ 14a7b3ba0

void __thiscall
UCommonVisibilitySwitcher::~UCommonVisibilitySwitcher(UCommonVisibilitySwitcher *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActiveWidgetIndexChangedEvent).field_0x8,
             *(int *)&(this->OnActiveWidgetIndexChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnActiveWidgetIndexChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActiveWidgetIndexChangedEvent);
  UOverlay::~UOverlay((UOverlay *)this);
  return;
}

// ActivateVisibleSlot @ 14a7bd740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonVisibilitySwitcher::ActivateVisibleSlot(UCommonVisibilitySwitcher *this)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  FName local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pUVar2 = UPanelWidget::GetChildAt((UPanelWidget *)this,this->ActiveWidgetIndex);
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (5 < (byte)LogCommonUI._0_1_) {
        local_168 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_168,&local_150);
        local_168 = (FName)this->_padding_;
        local_178 = (FScriptContainerElement *)L"";
        if (local_150.Data.ArrayNum != 0) {
          local_178 = local_150.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_168,&local_160);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UCommonVisibilitySwitcher::ActivateVisibleSlot",0x2e,Yes);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      if (pUVar2[2].FlowDirectionPreference == Inherit) {
        (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2);
      }
    }
  }
  return;
}

// DeactivateVisibleSlot @ 14a7d2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonVisibilitySwitcher::DeactivateVisibleSlot(UCommonVisibilitySwitcher *this)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  FName local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pUVar2 = UPanelWidget::GetChildAt((UPanelWidget *)this,this->ActiveWidgetIndex);
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (5 < (byte)LogCommonUI._0_1_) {
        local_168 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_168,&local_150);
        local_168 = (FName)this->_padding_;
        local_178 = (FScriptContainerElement *)L"";
        if (local_150.Data.ArrayNum != 0) {
          local_178 = local_150.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_168,&local_160);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UCommonVisibilitySwitcher::DeactivateVisibleSlot",0x30,Yes);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      if (pUVar2[2].FlowDirectionPreference != Inherit) {
        (**(code **)(pUVar2->_padding_ + 0x528))(pUVar2);
      }
    }
  }
  return;
}

// DecrementActiveWidgetIndex @ 14a7d2ce0

void __thiscall
UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(UCommonVisibilitySwitcher *this,bool param_1)

{
  int iVar1;
  
  iVar1 = this->ActiveWidgetIndex + -1;
  if (iVar1 == -1) {
    if (!param_1) {
      return;
    }
    iVar1 = (int)this->_padding_ + -1;
  }
  SetActiveWidgetIndex(this,iVar1);
  return;
}

// GetActiveWidget @ 14a7e05e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UCommonVisibilitySwitcher::GetActiveWidget(UCommonVisibilitySwitcher *this)

{
  UWidget *pUVar1;
  
  pUVar1 = UPanelWidget::GetChildAt((UPanelWidget *)this,this->ActiveWidgetIndex);
  return pUVar1;
}

// GetPrivateStaticClass @ 14a7e6ca0

UClass * __cdecl UCommonVisibilitySwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVisibilitySwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVisibilitySwitcher",
               &Z_Registration_Info_UClass_UCommonVisibilitySwitcher.InnerSingleton,
               StaticRegisterNativesUCommonVisibilitySwitcher,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCommonVisibilitySwitcher>,
               InternalVTableHelperCtorCaller<UCommonVisibilitySwitcher>,local_res8,
               UOverlay::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVisibilitySwitcher.InnerSingleton;
}

// GetSlotClass @ 14a7e8710

UClass * __thiscall UCommonVisibilitySwitcher::GetSlotClass(UCommonVisibilitySwitcher *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonVisibilitySwitcherSlot",
               &Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton,
               UCommonVisibilitySwitcherSlot::StaticRegisterNativesUCommonVisibilitySwitcherSlot,
               0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonVisibilitySwitcherSlot>,
               InternalVTableHelperCtorCaller<UCommonVisibilitySwitcherSlot>,aFStackX_8,
               UOverlaySlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.InnerSingleton;
}

// GetWidgetAtIndex @ 14a7e9840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall
UCommonVisibilitySwitcher::GetWidgetAtIndex(UCommonVisibilitySwitcher *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UWidget *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UWidget *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(UWidget **)(*(longlong *)(this->_padding_ + (longlong)param_1 * 8) + 0x30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (UWidget *)0x0;
}

// IncrementActiveWidgetIndex @ 14a7f23e0

void __thiscall
UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(UCommonVisibilitySwitcher *this,bool param_1)

{
  int iVar1;
  
  iVar1 = this->ActiveWidgetIndex + 1;
  if (iVar1 == (int)this->_padding_) {
    if (!param_1) {
      return;
    }
    iVar1 = 0;
  }
  SetActiveWidgetIndex(this,iVar1);
  return;
}

// MoveChild @ 14a7f8930

void __thiscall
UCommonVisibilitySwitcher::MoveChild(UCommonVisibilitySwitcher *this,int param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  UObject *local_38 [2];
  
  if (-1 < param_1) {
    iVar7 = (int)this->_padding_;
    if (((param_1 < iVar7) && (-1 < param_2)) && (param_2 < iVar7)) {
      plVar2 = &this->_padding_;
      uVar9 = (uint)~param_1 >> 0x1f;
      uVar6 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = *(UObject **)(*plVar2 + (longlong)param_1 * 8);
      uVar6 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (int)this->_padding_ + ~param_1;
      pvVar8 = (void *)(*plVar2 + (longlong)param_1 * 8);
      if (iVar7 != 0) {
        memmove(pvVar8,(void *)((longlong)pvVar8 + 8),(longlong)iVar7 << 3);
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)plVar2,(int)this->_padding_,piVar1);
      local_38[0] = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if ((((UObject **)*plVar2 <= local_38) && (local_38 < (UObject **)*plVar2 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (int)this->_padding_;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar2,piVar1);
      }
      *(int *)&this->_padding_ = iVar7 + 1;
      pvVar8 = (void *)(*plVar2 + (longlong)param_2 * 8);
      memmove((void *)((longlong)pvVar8 + 8),pvVar8,(longlong)(iVar7 - param_2) << 3);
      *(UObject **)(*plVar2 + (longlong)param_2 * 8) = local_38[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_38[0]);
      }
    }
  }
  return;
}

// OnSlotAdded @ 14a7fee50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonVisibilitySwitcher::OnSlotAdded(UCommonVisibilitySwitcher *this,UPanelSlot *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  SBox *this_00;
  bool bVar4;
  EVisibility EVar5;
  UCommonVisibilitySwitcherSlot *pUVar6;
  undefined7 extraout_var;
  undefined1 local_res8 [8];
  TAttribute<EVisibility> local_28;
  
  if ((this->_padding_ != 0) &&
     (pUVar6 = CastChecked<UCommonVisibilitySwitcherSlot,UPanelSlot>(param_1),
     pUVar6 != (UCommonVisibilitySwitcherSlot *)0x0)) {
    pcVar2 = *(code **)(pUVar6->_padding_ + 0x2c0);
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = this->_padding_;
    if (this->_padding_ != 0) {
      LOCK();
      piVar1 = (int *)(this->_padding_ + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((lVar3 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*pcVar2)(pUVar6);
    this_00 = (pUVar6->VisibilityBox).Object;
    if (this_00 != (SBox *)0x0) {
      EVar5 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res8);
      local_28.Value.Value.Value =
           *(TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar5.Value.Value);
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SPanel::SetVisibility((SPanel *)this_00,&local_28);
    }
    if (((int)this->_padding_ == 1) && (this->bActivateFirstSlotOnAdding != false)) {
      SetActiveWidgetIndex(this,0);
    }
  }
  return;
}

// OnSlotRemoved @ 14a7ff2a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonVisibilitySwitcher::OnSlotRemoved(UCommonVisibilitySwitcher *this,UPanelSlot *param_1)

{
  SBox *pSVar1;
  SOverlay *this_00;
  code *pcVar2;
  bool bVar3;
  UCommonVisibilitySwitcherSlot *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<SWidget,1> local_48;
  SBox *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (this->_padding_ == 0) {
    return;
  }
  pUVar4 = CastChecked<UCommonVisibilitySwitcherSlot,UPanelSlot>(param_1);
  if (pUVar4 != (UCommonVisibilitySwitcherSlot *)0x0) {
    pTVar5 = (pUVar4->VisibilityBox).SharedReferenceCount.ReferenceController;
    pSVar1 = (pUVar4->VisibilityBox).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_38 = pSVar1;
    local_30 = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pSVar1 == (SBox *)0x0) goto LAB_14a7ff3b7;
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (SOverlay *)this->_padding_;
    local_48.Object = (SWidget *)pSVar1;
    local_48.SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      SOverlay::RemoveSlot(this_00,&local_48);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      SOverlay::RemoveSlot(this_00,&local_48);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_14a7ff3b7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// OnWidgetRebuilt @ 14a8013b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonVisibilitySwitcher::OnWidgetRebuilt(UCommonVisibilitySwitcher *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  SPanel *this_00;
  EVisibility EVar5;
  UClass *pUVar6;
  undefined7 extraout_var;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TAttribute<EVisibility> local_48;
  
  UWidget::OnWidgetRebuilt((UWidget *)this);
  plVar7 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar7 == plVar1) break;
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      pUVar6 = UCommonVisibilitySwitcherSlot::StaticClass();
      iVar3 = (int)pUVar6->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
           == &pUVar6->_padding_)) &&
         (this_00 = *(SPanel **)(lVar4 + 0x58), this_00 != (SPanel *)0x0)) {
        EVar5 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res10);
        local_48.Value.Value.Value =
             *(TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar5.Value.Value);
        local_48.Getter._16_8_ = 0;
        local_48.bIsSet = true;
        local_48.Getter._0_8_ = 0;
        local_48.Getter._8_8_ = 0;
        SPanel::SetVisibility(this_00,&local_48);
      }
    }
    plVar7 = plVar7 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a80149e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this,this->ActiveWidgetIndex,0);
  return;
}

// ResetSlotVisibilities @ 14a814ee0

void __thiscall UCommonVisibilitySwitcher::ResetSlotVisibilities(UCommonVisibilitySwitcher *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  SPanel *this_00;
  EVisibility EVar5;
  UClass *pUVar6;
  undefined7 extraout_var;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TAttribute<EVisibility> local_48;
  
  plVar7 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar7 == plVar1) break;
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      pUVar6 = UCommonVisibilitySwitcherSlot::StaticClass();
      iVar3 = (int)pUVar6->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
           == &pUVar6->_padding_)) &&
         (this_00 = *(SPanel **)(lVar4 + 0x58), this_00 != (SPanel *)0x0)) {
        EVar5 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res10);
        local_48.Value.Value.Value =
             *(TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar5.Value.Value);
        local_48.Getter._16_8_ = 0;
        local_48.bIsSet = true;
        local_48.Getter._0_8_ = 0;
        local_48.Getter._8_8_ = 0;
        SPanel::SetVisibility(this_00,&local_48);
      }
    }
    plVar7 = plVar7 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a814fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this,this->ActiveWidgetIndex,0);
  return;
}

// SetActiveWidget @ 14a816290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonVisibilitySwitcher::SetActiveWidget(UCommonVisibilitySwitcher *this,UWidget *param_1)

{
  int iVar1;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  FName local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  iVar1 = UPanelWidget::GetChildIndex((UPanelWidget *)this,param_1);
  if ((iVar1 == -1) && (param_1 != (UWidget *)0x0)) {
    if (5 < (byte)LogCommonUI._0_1_) {
      local_168 = (FName)param_1->_padding_;
      ::FName::ToString(&local_168,&local_150);
      local_168 = (FName)this->_padding_;
      local_178 = (FScriptContainerElement *)L"";
      if (local_150.Data.ArrayNum != 0) {
        local_178 = local_150.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&local_168,&local_160);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UCommonVisibilitySwitcher::SetActiveWidget",0x2a,Yes);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    SetActiveWidgetIndex(this,iVar1);
  }
  return;
}

// SetActiveWidgetIndex @ 14a816480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonVisibilitySwitcher::SetActiveWidgetIndex(UCommonVisibilitySwitcher *this,int param_1)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined1 auStack_188 [32];
  int local_168;
  FName local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar1 = this->ActiveWidgetIndex;
  if (iVar1 == param_1) {
    if (5 < (byte)LogCommonUI._0_1_) {
      local_158 = (FName)this->_padding_;
      ::FName::ToString(&local_158,&local_150);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UCommonVisibilitySwitcher::SetActiveWidgetIndex",0x2f,Yes);
      local_168 = iVar1;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x330))(this,CONCAT44(in_register_00000014,param_1),1);
  }
  return;
}

// SetActiveWidgetIndex_Internal @ 14a816790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonVisibilitySwitcher::SetActiveWidgetIndex_Internal
          (UCommonVisibilitySwitcher *this,int param_1,bool param_2)

{
  undefined1 *puVar1;
  FObjectPtr_u_0 *pFVar2;
  ESlateVisibility EVar3;
  int iVar4;
  FObjectPtr FVar5;
  longlong *plVar6;
  SPanel *pSVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  EVisibility EVar12;
  char cVar13;
  uint uVar14;
  UClass *pUVar15;
  undefined7 extraout_var;
  UEnum *this_00;
  FString *pFVar16;
  undefined7 extraout_var_00;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStack_618 [32];
  FScriptContainerElement *local_5f8;
  FScriptContainerElement *local_5f0;
  bool local_5e8;
  char local_5e7;
  undefined1 local_5e6;
  undefined1 local_5e5;
  FName local_5e4;
  FName local_5dc;
  FName local_5d4;
  FName local_5cc;
  FName local_5c4;
  FName local_5bc;
  FName local_5b4;
  FName local_5ac;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  TAttribute<EVisibility> local_520;
  TAttribute<EVisibility> local_500;
  FText local_4e0;
  FDestructionSentinel local_4d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_618;
  bVar11 = this->bCurrentlySwitching;
  this->bCurrentlySwitching = true;
  uVar17 = this->ActiveWidgetIndex;
  pFVar18 = (FScriptContainerElement *)(longlong)(int)uVar17;
  pFVar22 = (FScriptContainerElement *)(longlong)param_1;
  local_5e8 = bVar11;
  local_5e7 = param_2;
  if ((-1 < (int)uVar17) && ((int)uVar17 < (int)this->_padding_)) {
    iVar4 = (int)this->_padding_;
    uVar14 = 0;
    if ((int)uVar17 < iVar4) {
      uVar14 = ~uVar17 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_5f8 = pFVar18, local_5f0 = (FScriptContainerElement *)(longlong)iVar4,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar2 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)pFVar18 * 8);
    if (*(longlong *)(this->_padding_ + (longlong)pFVar18 * 8) != 0) {
      pUVar15 = UCommonVisibilitySwitcherSlot::StaticClass();
      bVar10 = FObjectPtr::IsA((FObjectPtr *)pFVar2,pUVar15);
      if ((bVar10) &&
         (FVar5.field0_0x0 = (FObjectPtr_u_0)pFVar2->Handle, bVar11 = local_5e8,
         FVar5.field0_0x0 != (UObject *)0x0)) {
        if (*(longlong *)((longlong)FVar5.field0_0x0 + 0x30) != 0) {
          pUVar15 = UCommonActivatableWidget::StaticClass();
          bVar11 = FObjectPtr::IsA((FObjectPtr *)((longlong)FVar5.field0_0x0 + 0x30),pUVar15);
          if ((bVar11) &&
             (plVar6 = *(longlong **)((longlong)FVar5.field0_0x0 + 0x30), plVar6 != (longlong *)0x0)
             ) {
            if (5 < (byte)LogCommonUI._0_1_) {
              local_5e4 = *(FName *)(plVar6 + 3);
              ::FName::ToString(&local_5e4,&local_590);
              local_5dc = (FName)this->_padding_;
              FVar19.Data = (FScriptContainerElement *)L"";
              if (local_590.Data.ArrayNum != 0) {
                FVar19.Data = local_590.Data.AllocatorInstance.Data;
              }
              ::FName::ToString(&local_5dc,&local_5a0);
              local_4b8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_4b8,"UCommonVisibilitySwitcher::SetActiveWidgetIndex_Internal",0x38,
                         Yes);
              local_5f8 = FVar19.Data;
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
              if ((void *)local_4b8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_4b8._padding_);
              }
              if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
              }
              if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_590.Data.AllocatorInstance.Data);
              }
            }
            if ((char)plVar6[0x8b] != '\0') {
              (**(code **)(*plVar6 + 0x528))(plVar6);
            }
          }
        }
        if (5 < (byte)LogCommonUI._0_1_) {
          local_5d4 = *(FName *)((longlong)FVar5.field0_0x0 + 0x18);
          ::FName::ToString(&local_5d4,&local_570);
          local_5cc = (FName)this->_padding_;
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_570.Data.ArrayNum != 0) {
            FVar19.Data = local_570.Data.AllocatorInstance.Data;
          }
          ::FName::ToString(&local_5cc,&local_580);
          local_398._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,"UCommonVisibilitySwitcher::SetActiveWidgetIndex_Internal",0x38,Yes)
          ;
          local_5f8 = FVar19.Data;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
          if ((void *)local_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
          if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_580.Data.AllocatorInstance.Data);
          }
          if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_570.Data.AllocatorInstance.Data);
          }
        }
        pSVar7 = *(SPanel **)((longlong)FVar5.field0_0x0 + 0x58);
        bVar11 = local_5e8;
        if (pSVar7 != (SPanel *)0x0) {
          EVar12 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)&local_5e6);
          local_520.Value.Value.Value =
               *(TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar12.Value.Value);
          local_520.Getter._16_8_ = 0;
          local_520.bIsSet = true;
          local_520.Getter._0_8_ = 0;
          local_520.Getter._8_8_ = 0;
          SPanel::SetVisibility(pSVar7,&local_520);
          bVar11 = local_5e8;
        }
      }
    }
  }
  this->ActiveWidgetIndex = param_1;
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    iVar4 = (int)this->_padding_;
    uVar17 = 0;
    if (param_1 < iVar4) {
      uVar17 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_5f8 = pFVar22, local_5f0 = (FScriptContainerElement *)(longlong)iVar4,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar2 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)pFVar22 * 8);
    if (*(longlong *)(this->_padding_ + (longlong)pFVar22 * 8) != 0) {
      pUVar15 = UCommonVisibilitySwitcherSlot::StaticClass();
      bVar10 = FObjectPtr::IsA((FObjectPtr *)pFVar2,pUVar15);
      if ((bVar10) &&
         (FVar5.field0_0x0 = (FObjectPtr_u_0)pFVar2->Handle, FVar5.field0_0x0 != (UObject *)0x0)) {
        if ((this->bAutoActivateSlot != false) &&
           (*(longlong *)((longlong)FVar5.field0_0x0 + 0x30) != 0)) {
          pUVar15 = UCommonActivatableWidget::StaticClass();
          bVar10 = FObjectPtr::IsA((FObjectPtr *)((longlong)FVar5.field0_0x0 + 0x30),pUVar15);
          if ((bVar10) &&
             (plVar6 = *(longlong **)((longlong)FVar5.field0_0x0 + 0x30), plVar6 != (longlong *)0x0)
             ) {
            if (5 < (byte)LogCommonUI._0_1_) {
              local_5c4 = *(FName *)(plVar6 + 3);
              ::FName::ToString(&local_5c4,&local_550);
              local_5bc = (FName)this->_padding_;
              FVar19.Data = (FScriptContainerElement *)L"";
              if (local_550.Data.ArrayNum != 0) {
                FVar19.Data = local_550.Data.AllocatorInstance.Data;
              }
              ::FName::ToString(&local_5bc,&local_560);
              local_278._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,"UCommonVisibilitySwitcher::SetActiveWidgetIndex_Internal",0x38,
                         Yes);
              local_5f8 = FVar19.Data;
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
              if ((void *)local_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_278._padding_);
              }
              if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_560.Data.AllocatorInstance.Data);
              }
              if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_550.Data.AllocatorInstance.Data);
              }
            }
            if ((char)plVar6[0x8b] == '\0') {
              (**(code **)(*plVar6 + 0x520))(plVar6);
            }
          }
        }
        if (5 < (byte)LogCommonUI._0_1_) {
          StaticEnum<enum_ESlateVisibility>();
          EVar3 = this->ShownVisibility;
          this_00 = StaticEnum<enum_ESlateVisibility>();
          if ((this_00 == (UEnum *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EnumClass != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xd13,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          UEnum::GetDisplayNameTextByValue(this_00,&local_4e0,(ulonglong)EVar3);
          pFVar16 = FText::ToString(&local_4e0);
          if ((pFVar16->Data).ArrayNum == 0) {
            pwVar21 = L"";
          }
          else {
            pwVar21 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
          local_5b4 = *(FName *)((longlong)FVar5.field0_0x0 + 0x18);
          ::FName::ToString(&local_5b4,&local_530);
          local_5ac = (FName)this->_padding_;
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_530.Data.ArrayNum != 0) {
            FVar19.Data = local_530.Data.AllocatorInstance.Data;
          }
          ::FName::ToString(&local_5ac,&local_540);
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UCommonVisibilitySwitcher::SetActiveWidgetIndex_Internal",0x38,Yes)
          ;
          local_5f8 = FVar19.Data;
          local_5f0 = (FScriptContainerElement *)pwVar21;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_540.Data.AllocatorInstance.Data);
          }
          if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_530.Data.AllocatorInstance.Data);
          }
          if (local_4e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_4e0.TextData.Reference + 0x10))();
          }
        }
        pSVar7 = *(SPanel **)((longlong)FVar5.field0_0x0 + 0x58);
        if (pSVar7 != (SPanel *)0x0) {
          EVar12 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)&local_5e5);
          local_500.Value.Value.Value =
               *(TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var_00,EVar12.Value.Value);
          local_500.Getter._16_8_ = 0;
          local_500.bIsSet = true;
          local_500.Getter._0_8_ = 0;
          local_500.Getter._8_8_ = 0;
          SPanel::SetVisibility(pSVar7,&local_500);
        }
      }
    }
  }
  if (local_5e7 == '\0') {
    this->bCurrentlySwitching = bVar11;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnActiveWidgetIndexChangedEvent,(FWriteAccessScope *)&local_4d0);
    puVar1 = &(this->OnActiveWidgetIndexChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar11 = false;
    uVar17 = *(int *)&(this->OnActiveWidgetIndexChangedEvent).field_0x10 - 1;
    if (-1 < (int)uVar17) {
      pFVar18 = (FScriptContainerElement *)(longlong)(int)uVar17;
      lVar20 = (longlong)pFVar18 << 4;
      bVar11 = false;
      do {
        iVar4 = *(int *)&(this->OnActiveWidgetIndexChangedEvent).field_0x10;
        uVar14 = 0;
        if ((int)uVar17 < iVar4) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_5f8 = pFVar18, local_5f0 = (FScriptContainerElement *)(longlong)iVar4,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)&(this->OnActiveWidgetIndexChangedEvent).field_0x8;
        if (((*(int *)(lVar20 + 8 + lVar8) == 0) ||
            (plVar6 = *(longlong **)(lVar20 + lVar8), plVar6 == (longlong *)0x0)) ||
           (cVar13 = (**(code **)(*plVar6 + 0x68))(), cVar13 == '\0')) {
          bVar11 = true;
        }
        pFVar18 = pFVar18 + -1;
        lVar20 = lVar20 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    puVar1 = &(this->OnActiveWidgetIndexChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar11) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnActiveWidgetIndexChangedEvent,false);
    }
    if (local_4d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d0.Accessor,&local_4d0);
    }
    this->bCurrentlySwitching = local_5e8;
  }
  return;
}

// StaticRegisterNativesUCommonVisibilitySwitcher @ 14a81ea50

void __cdecl UCommonVisibilitySwitcher::StaticRegisterNativesUCommonVisibilitySwitcher(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UCommonVisibilitySwitcher_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820b50

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonVisibilitySwitcher::SynchronizeProperties(UCommonVisibilitySwitcher *this)

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
  UCommonVisibilitySwitcher *pUStack_6e8;
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

// execActivateVisibleSlot @ 14a82bb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonVisibilitySwitcher::execActivateVisibleSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  undefined1 auStack_1a8 [32];
  FScriptContainerElement *local_188;
  FName local_178;
  FString local_170;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UPanelWidget::GetChildAt((UPanelWidget *)param_1,*(int *)&param_1[0xb].field_0x24);
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (5 < (byte)LogCommonUI._0_1_) {
        local_178 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_178,&local_160);
        local_178.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_178.Number = *(uint *)&param_1->field_0x1c;
        local_188 = (FScriptContainerElement *)L"";
        if (local_160.Data.ArrayNum != 0) {
          local_188 = local_160.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_178,&local_170);
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UCommonVisibilitySwitcher::ActivateVisibleSlot",0x2e,Yes);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      if (pUVar2[2].FlowDirectionPreference == Inherit) {
        (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2);
      }
    }
  }
  return;
}

// execDeactivateVisibleSlot @ 14a82cb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonVisibilitySwitcher::execDeactivateVisibleSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  undefined1 auStack_1a8 [32];
  FScriptContainerElement *local_188;
  FName local_178;
  FString local_170;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UPanelWidget::GetChildAt((UPanelWidget *)param_1,*(int *)&param_1[0xb].field_0x24);
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (5 < (byte)LogCommonUI._0_1_) {
        local_178 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_178,&local_160);
        local_178.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_178.Number = *(uint *)&param_1->field_0x1c;
        local_188 = (FScriptContainerElement *)L"";
        if (local_160.Data.ArrayNum != 0) {
          local_188 = local_160.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_178,&local_170);
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UCommonVisibilitySwitcher::DeactivateVisibleSlot",0x30,Yes);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      if (pUVar2[2].FlowDirectionPreference != Inherit) {
        (**(code **)(pUVar2->_padding_ + 0x528))(pUVar2);
      }
    }
  }
  return;
}

// execDecrementActiveWidgetIndex @ 14a82cd30

void __cdecl
UCommonVisibilitySwitcher::execDecrementActiveWidgetIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  iVar2 = *(int *)&param_1[0xb].field_0x24 + -1;
  if (iVar2 == -1) {
    if (local_res8[0] == 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0xb) + -1;
  }
  SetActiveWidgetIndex((UCommonVisibilitySwitcher *)param_1,iVar2);
  return;
}

// execGetActiveWidget @ 14a82d3c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonVisibilitySwitcher::execGetActiveWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  UWidget *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UPanelWidget::GetChildAt((UPanelWidget *)param_1,*(int *)&param_1[0xb].field_0x24);
  *(UWidget **)param_3 = pUVar1;
  return;
}

// execGetActiveWidgetIndex @ 14a82d400

void __cdecl
UCommonVisibilitySwitcher::execGetActiveWidgetIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x24;
  return;
}

// execIncrementActiveWidgetIndex @ 14a830150

void __cdecl
UCommonVisibilitySwitcher::execIncrementActiveWidgetIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  iVar2 = *(int *)&param_1[0xb].field_0x24 + 1;
  if (iVar2 == *(int *)(param_1 + 0xb)) {
    if (local_res8[0] == 0) {
      return;
    }
    iVar2 = 0;
  }
  SetActiveWidgetIndex((UCommonVisibilitySwitcher *)param_1,iVar2);
  return;
}

// execIsCurrentlySwitching @ 14a8303c0

void __cdecl
UCommonVisibilitySwitcher::execIsCurrentlySwitching(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xc].field_0x2;
  return;
}

// execSetActiveWidget @ 14a831d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonVisibilitySwitcher::execSetActiveWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidget *pUVar2;
  int iVar3;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  UWidget *local_168;
  FName local_160;
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar2 = local_168;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = UPanelWidget::GetChildIndex((UPanelWidget *)param_1,local_168);
  if ((iVar3 == -1) && (pUVar2 != (UWidget *)0x0)) {
    if (5 < (byte)LogCommonUI._0_1_) {
      local_160 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_160,&local_148);
      local_160.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_160.Number = *(uint *)&param_1->field_0x1c;
      local_178 = (FScriptContainerElement *)L"";
      if (local_148.Data.ArrayNum != 0) {
        local_178 = local_148.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&local_160,&local_158);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UCommonVisibilitySwitcher::SetActiveWidget",0x2a,Yes);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    SetActiveWidgetIndex((UCommonVisibilitySwitcher *)param_1,iVar3);
  }
  return;
}

// execSetActiveWidgetIndex @ 14a831fe0

void __cdecl
UCommonVisibilitySwitcher::execSetActiveWidgetIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetActiveWidgetIndex((UCommonVisibilitySwitcher *)param_1,local_res10[0]);
  return;
}

