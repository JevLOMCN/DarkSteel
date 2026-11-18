// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickTagOnOff_WrapperImpl @ 14b6fc9b0

void __cdecl UDS_VM_WB_CheatTagButton::SetClickTagOnOff_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_38;
  int iStack_30;
  FReadAccessScope FStack_28;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0xf0);
  if (lVar1 != 0) {
    auStackX_8[0] = *(char *)(lVar1 + 0x4c) == '\0';
    *(undefined1 *)(lVar1 + 0x4c) = auStackX_8[0];
    FVar4 = FFieldNotificationClassDescriptor::IsDisabledButton.FieldName;
    if ((bool)*(char *)((longlong)param_1 + 0xe8) != !(bool)auStackX_8[0]) {
      iStack_30 = FFieldNotificationClassDescriptor::IsDisabledButton.BitNumber;
      *(bool *)((longlong)param_1 + 0xe8) = !(bool)auStackX_8[0];
      FStack_38 = FVar4;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_38);
    }
    if (*(longlong *)((longlong)param_1 + 0xf0) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar1 = *(longlong *)((longlong)param_1 + 0xf0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
               &FStack_28);
    if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
       (plVar2 = *(longlong **)((longlong)param_1 + 0xa8), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,lVar1 + 0x48,auStackX_8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
  }
  return;
}

// SetButtonName_WrapperImpl @ 14b6fc9c0

void __cdecl UDS_VM_WB_CheatTagButton::SetButtonName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ButtonName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ButtonName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xd8),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xd8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xd8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetIsDisabledButton_WrapperImpl @ 14b6fcac0

void __cdecl UDS_VM_WB_CheatTagButton::SetIsDisabledButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsDisabledButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsDisabledButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xe8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6fcad0

UClass * __cdecl UDS_VM_WB_CheatTagButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatTagButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatTagButton",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatTagButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatTagButton,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatTagButton>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatTagButton>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatTagButton.InnerSingleton;
}

// UDS_VM_WB_CheatTagButton @ 14b7000e0

UDS_VM_WB_CheatTagButton * __thiscall
UDS_VM_WB_CheatTagButton::UDS_VM_WB_CheatTagButton
          (UDS_VM_WB_CheatTagButton *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->CheatTagButtonDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatTagButton__6B_;
  *(undefined8 *)&(this->CheatTagButtonDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CheatTagButtonDelegate).field_0x10 = 0;
  (this->ClickTagOnOff)._padding_ = '\0';
  (this->ClickTagOnOff).bIsCustomSelected = false;
  (this->ClickTagOnOff).bIsLacked = false;
  (this->ClickTagOnOff).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTagOnOff).Delegate = 0;
  *(undefined8 *)&(this->ClickTagOnOff).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTagOnOff).Delegate.field_0x10 = 0;
  FText::FText(&this->ButtonName);
  (this->CheatTagContext).Object = (FDS_ViewModelContext_CheatTag *)0x0;
  (this->CheatTagContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_VM_WB_CheatTagButton @ 14b700170

UDS_VM_WB_CheatTagButton * __thiscall
UDS_VM_WB_CheatTagButton::UDS_VM_WB_CheatTagButton
          (UDS_VM_WB_CheatTagButton *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->CheatTagButtonDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatTagButton__6B_;
  *(undefined8 *)&(this->CheatTagButtonDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CheatTagButtonDelegate).field_0x10 = 0;
  (this->ClickTagOnOff)._padding_ = '\0';
  (this->ClickTagOnOff).bIsCustomSelected = false;
  (this->ClickTagOnOff).bIsLacked = false;
  (this->ClickTagOnOff).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTagOnOff).Delegate = 0;
  *(undefined8 *)&(this->ClickTagOnOff).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTagOnOff).Delegate.field_0x10 = 0;
  FText::FText(&this->ButtonName);
  (this->CheatTagContext).Object = (FDS_ViewModelContext_CheatTag *)0x0;
  (this->CheatTagContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_VM_WB_CheatTagButton @ 14b702b50

void __thiscall UDS_VM_WB_CheatTagButton::~UDS_VM_WB_CheatTagButton(UDS_VM_WB_CheatTagButton *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatTagButton__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CheatTagContext).SharedReferenceCount.ReferenceController);
  pIVar1 = (this->ButtonName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTagOnOff).Delegate);
  pvVar2 = *(void **)&(this->ClickTagOnOff).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTagOnOff).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CheatTagButtonDelegate);
  pvVar2 = *(void **)&(this->CheatTagButtonDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CheatTagButtonDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705cf0

IClassDescriptor * __thiscall
UDS_VM_WB_CheatTagButton::GetFieldNotificationDescriptor(UDS_VM_WB_CheatTagButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_CheatTagButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706650

UClass * __cdecl UDS_VM_WB_CheatTagButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatTagButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatTagButton",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatTagButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatTagButton,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatTagButton>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatTagButton>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatTagButton.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_CheatTagButton @ 14b7075e0

void __cdecl UDS_VM_WB_CheatTagButton::StaticRegisterNativesUDS_VM_WB_CheatTagButton(void)

{
  return;
}

// OnClickTagOnOff @ 14bfbae90

void __thiscall
UDS_VM_WB_CheatTagButton::OnClickTagOnOff
          (UDS_VM_WB_CheatTagButton *this,FDS_ButtonEventField *param_1)

{
  FDS_ViewModelContext_CheatTag *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_38;
  int local_30;
  FReadAccessScope local_28;
  
  pFVar1 = (this->CheatTagContext).Object;
  if (pFVar1 != (FDS_ViewModelContext_CheatTag *)0x0) {
    local_res8[0] = pFVar1->IsSelected == false;
    pFVar1->IsSelected = (bool)local_res8[0];
    FVar4 = FFieldNotificationClassDescriptor::IsDisabledButton.FieldName;
    if (this->IsDisabledButton != !(bool)local_res8[0]) {
      local_30 = FFieldNotificationClassDescriptor::IsDisabledButton.BitNumber;
      this->IsDisabledButton = !(bool)local_res8[0];
      local_38 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    if ((this->CheatTagContext).Object == (FDS_ViewModelContext_CheatTag *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->CheatTagContext).Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CheatTagButtonDelegate,&local_28);
    if ((*(int *)&(this->CheatTagButtonDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->CheatTagButtonDelegate).field_0x8, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x68))(plVar2,&pFVar1->TagIndex,local_res8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnSetViewModel @ 14bfc29f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatTagButton::OnSetViewModel
          (UDS_VM_WB_CheatTagButton *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FDS_ViewModelContext_CheatTag *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  int iVar8;
  FName FVar9;
  bool bVar10;
  UDS_LogManager *pUVar11;
  FText *pFVar12;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ForAnyElementType local_340;
  int local_338;
  TSharedPtr<FDS_ViewModelContext_CheatTag,1> local_330;
  undefined1 local_320 [8];
  FName local_318;
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  TSharedPtr<FDS_ViewModelContext,1> local_2e8;
  FDestructionSentinel local_2d8;
  FDS_ViewModelContext_CheatTag *local_2c0;
  TReferenceControllerBase<1> *pTStack_2b8;
  FText local_2b0;
  FReadAccessScope local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_WB_CheatTagButton::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_288.Ptr,0x11,L"InViewModelContext is not valid");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    local_2e8.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_2e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2e8.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_CheatTag>(&local_330,&local_2e8);
    if (local_330.Object == (FDS_ViewModelContext_CheatTag *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_WB_CheatTagButton::OnSetViewModel",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar11,1,Warning,local_168.Ptr,0x18,L"context is nullptr");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_330.SharedReferenceCount.ReferenceController);
    }
    else {
      if (local_330.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2c0 = (this->CheatTagContext).Object;
      pTStack_2b8 = (this->CheatTagContext).SharedReferenceCount.ReferenceController;
      (this->CheatTagContext).Object = local_330.Object;
      (this->CheatTagContext).SharedReferenceCount.ReferenceController =
           local_330.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_2b8);
      if (local_330.Object == (FDS_ViewModelContext_CheatTag *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar12 = FText::FromString(&local_2b0,&(local_330.Object)->TagName);
      iVar8 = FFieldNotificationClassDescriptor::ButtonName.BitNumber;
      local_318 = FFieldNotificationClassDescriptor::ButtonName.FieldName;
      bVar10 = FText::IdenticalTo(&this->ButtonName,pFVar12,None);
      if (!bVar10) {
        pIVar3 = (pFVar12->TextData).Reference;
        pIVar4 = (this->ButtonName).TextData.Reference;
        if (pIVar4 != pIVar3) {
          (this->ButtonName).TextData.Reference = pIVar3;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_320);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        (this->ButtonName).Flags = pFVar12->Flags;
        local_308 = local_318;
        local_300 = iVar8;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
      }
      if (local_2b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
      }
      if (local_330.Object == (FDS_ViewModelContext_CheatTag *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar5 = (this->CheatTagContext).Object;
      if (pFVar5 != (FDS_ViewModelContext_CheatTag *)0x0) {
        pFVar5->IsSelected = (local_330.Object)->IsSelected;
        FVar9 = FFieldNotificationClassDescriptor::IsDisabledButton.FieldName;
        bVar10 = (local_330.Object)->IsSelected == false;
        if (this->IsDisabledButton != bVar10) {
          local_2f0 = FFieldNotificationClassDescriptor::IsDisabledButton.BitNumber;
          this->IsDisabledButton = bVar10;
          local_2f8 = FVar9;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2f8);
        }
      }
      if (local_330.Object == (FDS_ViewModelContext_CheatTag *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (&(local_330.Object)->CheatTagButtonDelegate != &this->CheatTagButtonDelegate) {
        local_348 = (undefined1  [8])0x0;
        local_340.Data = (FScriptContainerElement *)0x0;
        local_338 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_330.Object)->CheatTagButtonDelegate,&local_2a0);
        if ((*(int *)&((local_330.Object)->CheatTagButtonDelegate).field_0x10 != 0) &&
           (plVar6 = *(longlong **)&((local_330.Object)->CheatTagButtonDelegate).field_0x8,
           plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x50))(plVar6,local_348);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_2a0);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CheatTagButtonDelegate,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_348);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
                   (FWriteAccessScope *)&local_2d8);
        if ((local_338 != 0) && (local_340.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_340.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_340,0,0,0x10);
          local_338 = 0;
        }
        if (local_2d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
        }
        if (local_340.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_348);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_330.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetButtonName @ 14bfd61a0

void __thiscall
UDS_VM_WB_CheatTagButton::SetButtonName(UDS_VM_WB_CheatTagButton *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ButtonName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ButtonName.FieldName;
  bVar5 = FText::IdenticalTo(&this->ButtonName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ButtonName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ButtonName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ButtonName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetClickAble @ 14bfd6f30

void __thiscall UDS_VM_WB_CheatTagButton::SetClickAble(UDS_VM_WB_CheatTagButton *this,bool *param_1)

{
  FDS_ViewModelContext_CheatTag *pFVar1;
  FName local_18;
  int local_10;
  
  pFVar1 = (this->CheatTagContext).Object;
  if (pFVar1 != (FDS_ViewModelContext_CheatTag *)0x0) {
    pFVar1->IsSelected = *param_1;
    local_10 = FFieldNotificationClassDescriptor::IsDisabledButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsDisabledButton.FieldName;
    if (this->IsDisabledButton != (*param_1 == false)) {
      this->IsDisabledButton = *param_1 == false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetIsDisabledButton @ 14bfda970

void __thiscall
UDS_VM_WB_CheatTagButton::SetIsDisabledButton(UDS_VM_WB_CheatTagButton *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsDisabledButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDisabledButton.FieldName;
  if (this->IsDisabledButton != *param_1) {
    this->IsDisabledButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

