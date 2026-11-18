// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b55e7f0

UClass * __cdecl UDS_PlayerIconSlotImplSelectable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerIconSlotImplSelectable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerIconSlotImplSelectable",
               &Z_Registration_Info_UClass_UDS_PlayerIconSlotImplSelectable.InnerSingleton,
               StaticRegisterNativesUDS_PlayerIconSlotImplSelectable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerIconSlotImplSelectable>,
               InternalVTableHelperCtorCaller<UDS_PlayerIconSlotImplSelectable>,local_res8,
               UDS_PlayerIconSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerIconSlotImplSelectable.InnerSingleton;
}

// UDS_PlayerIconSlotImplSelectable @ 14b5642c0

UDS_PlayerIconSlotImplSelectable * __thiscall
UDS_PlayerIconSlotImplSelectable::UDS_PlayerIconSlotImplSelectable
          (UDS_PlayerIconSlotImplSelectable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IsSelectedIcon = false;
  this->IsUnLockableIcon = false;
  this->IsHaveIcon = false;
  this->IsUsingIcon = false;
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplSelectable__6B_;
  return this;
}

// UDS_PlayerIconSlotImplSelectable @ 14b5642f0

UDS_PlayerIconSlotImplSelectable * __thiscall
UDS_PlayerIconSlotImplSelectable::UDS_PlayerIconSlotImplSelectable
          (UDS_PlayerIconSlotImplSelectable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IsSelectedIcon = false;
  this->IsUnLockableIcon = false;
  this->IsHaveIcon = false;
  this->IsUsingIcon = false;
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplSelectable__6B_;
  return this;
}

// ~UDS_PlayerIconSlotImplSelectable @ 14b565160

void __thiscall
UDS_PlayerIconSlotImplSelectable::~UDS_PlayerIconSlotImplSelectable
          (UDS_PlayerIconSlotImplSelectable *this)

{
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5674a0

UClass * __cdecl UDS_PlayerIconSlotImplSelectable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerIconSlotImplSelectable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerIconSlotImplSelectable",
               &Z_Registration_Info_UClass_UDS_PlayerIconSlotImplSelectable.InnerSingleton,
               StaticRegisterNativesUDS_PlayerIconSlotImplSelectable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerIconSlotImplSelectable>,
               InternalVTableHelperCtorCaller<UDS_PlayerIconSlotImplSelectable>,local_res8,
               UDS_PlayerIconSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerIconSlotImplSelectable.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerIconSlotImplSelectable @ 14b5680c0

void __cdecl
UDS_PlayerIconSlotImplSelectable::StaticRegisterNativesUDS_PlayerIconSlotImplSelectable(void)

{
  return;
}

// BindModel @ 14bd469a0

void __thiscall UDS_PlayerIconSlotImplSelectable::BindModel(UDS_PlayerIconSlotImplSelectable *this)

{
  UDS_PlayerEvent *pUVar1;
  
  pUVar1 = UDS_PlayerEvent::GetEvent();
  if (pUVar1 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectPlayerIcon,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_PlayerIconSlotImplSelectable>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectPlayerIcon,(UDS_PlayerIconSlotImplSelectable *)&stack0x00000010,
               (pmf_dfb23fef)this);
  }
  return;
}

// IsHave @ 14bd6b900

bool __thiscall UDS_PlayerIconSlotImplSelectable::IsHave(UDS_PlayerIconSlotImplSelectable *this)

{
  return this->IsHaveIcon;
}

// IsSelected @ 14bd6cb10

bool __thiscall UDS_PlayerIconSlotImplSelectable::IsSelected(UDS_PlayerIconSlotImplSelectable *this)

{
  return this->IsSelectedIcon;
}

// IsUnLockable @ 14bd6ce40

bool __thiscall
UDS_PlayerIconSlotImplSelectable::IsUnLockable(UDS_PlayerIconSlotImplSelectable *this)

{
  return this->IsUnLockableIcon;
}

// IsUsing @ 14bd6ce50

bool __thiscall UDS_PlayerIconSlotImplSelectable::IsUsing(UDS_PlayerIconSlotImplSelectable *this)

{
  return this->IsUsingIcon;
}

// OnEventMouseButtonUp @ 14bd77ea0

void __thiscall
UDS_PlayerIconSlotImplSelectable::OnEventMouseButtonUp(UDS_PlayerIconSlotImplSelectable *this)

{
  UDS_PlayerEvent *pUVar1;
  
  if ((this->IsSelectedIcon != true) &&
     (pUVar1 = UDS_PlayerEvent::GetEvent(), pUVar1 != (UDS_PlayerEvent *)0x0)) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnSelectPlayerIcon,(int)this->_padding_);
    FDS_EventDelegate<enum_EDS_PlayerIconSlotType_const_>::Broadcast
              (&pUVar1->OnPlayerIconUpdate,Selectable);
  }
  return;
}

// OnSelectSlot @ 14bd7cf10

void __thiscall
UDS_PlayerIconSlotImplSelectable::OnSelectSlot(UDS_PlayerIconSlotImplSelectable *this,int param_1)

{
  this->IsSelectedIcon = (int)this->_padding_ == param_1;
  return;
}

// SetContext @ 14bd87e80

void __thiscall
UDS_PlayerIconSlotImplSelectable::SetContext
          (UDS_PlayerIconSlotImplSelectable *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDS_PlayerIconTableRow *pFVar4;
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PlayerIconSlot>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (local_28.Object)->PlayerIconID;
    *(int *)&this->_padding_ = iVar1;
    pFVar4 = FDS_PlayerIconTableRow::GetRef((longlong)iVar1,true);
    *(int *)((longlong)&this->_padding_ + 4) = pFVar4->ID_PlayerIcon;
    this->IsSelectedIcon = (local_28.Object)->IsSelected;
    this->IsUnLockableIcon = (local_28.Object)->IsUnLockable;
    this->IsHaveIcon = (local_28.Object)->IsHave;
    this->IsUsingIcon = (local_28.Object)->IsUsing;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnBindModel @ 14bd8bac0

void __thiscall
UDS_PlayerIconSlotImplSelectable::UnBindModel(UDS_PlayerIconSlotImplSelectable *this)

{
  UDS_PlayerEvent *pUVar1;
  
  pUVar1 = UDS_PlayerEvent::GetEvent();
  if (pUVar1 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectPlayerIcon,
               this);
    return;
  }
  return;
}

