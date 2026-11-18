// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FMenuInPopup @ 1426a7dd0

FMenuInPopup * __thiscall
FMenuInPopup::FMenuInPopup(FMenuInPopup *this,TSharedRef<SWidget,1> *param_1,bool param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> *paVar3;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FMenuBase__6B_;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 2;
  *(SWidget **)&this->field_0x38 = pSVar1;
  *(TReferenceControllerBase<1> **)&this->field_0x40 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  this->field_0x48 = 0;
  this->field_0x49 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(undefined ***)this = &___7FMenuInPopup__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMenuInPopup @ 1426aab80

void __thiscall FMenuInPopup::~FMenuInPopup(FMenuInPopup *this)

{
  *(undefined ***)this = &___7FMenuInPopup__6B_;
  FMenuBase::~FMenuBase((FMenuBase *)this);
  return;
}

// Dismiss @ 1426b6ef0

void __thiscall FMenuInPopup::Dismiss(FMenuInPopup *this)

{
  TSharedRef<FMenuBase,1> *pTVar1;
  TSharedRef<IMenu,1> local_28;
  TSharedRef<FMenuBase,1> local_18;
  
  if (this->field_0x48 == '\0') {
    this->field_0x48 = 1;
    pTVar1 = TSharedFromThis<FMenuBase,1>::AsShared
                       ((TSharedFromThis<FMenuBase,1> *)&this->field_0x8,&local_18);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    local_28.Object = (IMenu *)pTVar1->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TMulticastDelegate<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x18,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetOwnedWindow @ 1426be930

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FMenuInPopup::GetOwnedWindow(FMenuInPopup *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetParentWindow @ 1426be9f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FMenuInPopup::GetParentWindow(FMenuInPopup *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateApplication *pFVar2;
  
  pFVar2 = FSlateApplication::Get();
  __return_storage_ptr__->Object = (pFVar2->MenuStack).HostWindow.Object;
  pTVar1 = (pFVar2->MenuStack).HostWindow.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPopupMethod @ 1426bea90

EPopupMethod __thiscall FMenuInPopup::GetPopupMethod(FMenuInPopup *this)

{
  return UseCurrentWindow;
}

