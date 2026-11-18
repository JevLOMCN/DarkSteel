// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// AsWidget @ 1469a2c00

TSharedRef<SWidget,1> * __thiscall
FDelegateToolTip::AsWidget(FDelegateToolTip *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// GetContentWidget @ 1469cea60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FDelegateToolTip::GetContentWidget
          (FDelegateToolTip *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SWidget,1> *this_00;
  atomic<int> *paVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  TSharedRef<SWidget,1> *pTVar7;
  UWidget *local_res8;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  pSVar2 = (this->CachedToolTip).Object;
  this_00 = &this->CachedToolTip;
  if (pSVar2 == (SWidget *)0x0) {
    local_res8 = (UWidget *)0x0;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ToolTipWidgetDelegate,
               &local_res8);
    if (local_res8 != (UWidget *)0x0) {
      pTVar7 = UWidget::TakeWidget(local_res8,&local_18);
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      local_28.Object = pTVar7->Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != &local_28) {
        this_00->Object = local_28.Object;
        local_28.Object = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedToolTip).SharedReferenceCount,&local_28.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      TSharedPtr<SWidget,1>::ToSharedRef(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar5 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  else {
    __return_storage_ptr__->Object = pSVar2;
    pTVar3 = (this->CachedToolTip).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__->Object == (SWidget *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// IsEmpty @ 1469e1530

bool __thiscall FDelegateToolTip::IsEmpty(FDelegateToolTip *this)

{
  bool bVar1;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ToolTipWidgetDelegate);
  return !bVar1;
}

// IsInteractive @ 1469e1910

bool __thiscall FDelegateToolTip::IsInteractive(FDelegateToolTip *this)

{
  return false;
}

// OnClosed @ 1469e5eb0

void __thiscall FDelegateToolTip::OnClosed(FDelegateToolTip *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedToolTip != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->CachedToolTip).Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedToolTip).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// OnOpening @ 1469ef620

void __thiscall FDelegateToolTip::OnOpening(FDelegateToolTip *this)

{
  return;
}

// SetContentWidget @ 146a12b80

void __thiscall
FDelegateToolTip::SetContentWidget(FDelegateToolTip *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10 [2];
  
  local_18 = param_1->Object;
  local_10[0].ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->CachedToolTip != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->CachedToolTip).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedToolTip).SharedReferenceCount,local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

