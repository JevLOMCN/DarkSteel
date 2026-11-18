// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickEntry_WrapperImpl @ 14b6bab10

void __cdecl UDS_VM_PartySearchDropBox::SetClickEntry_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_PlayerEvent *pUVar3;
  
  pUVar3 = UDS_PlayerEvent::GetEvent();
  if (pUVar3 != (UDS_PlayerEvent *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0xf8);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnClickSearchedNameEntry);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnClickSearchedNameEntry).Delegate,iVar1);
    }
  }
  return;
}

// SetClickRemove_WrapperImpl @ 14b6bab20

void __cdecl UDS_VM_PartySearchDropBox::SetClickRemove_WrapperImpl(void *param_1,void *param_2)

{
  FDS_PlayerRepo *this;
  
  this = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  FDS_PlayerRepo::RemoveSearchedPlayerNameByIndex(this,(int *)((longlong)param_1 + 0xf8));
  return;
}

// SetSearchName_WrapperImpl @ 14b6bab30

void __cdecl UDS_VM_PartySearchDropBox::SetSearchName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::SearchName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::SearchName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xe0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xe0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xe0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xe8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// StaticClass @ 14b6bab40

UClass * __cdecl UDS_VM_PartySearchDropBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartySearchDropBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartySearchDropBox",
               &Z_Registration_Info_UClass_UDS_VM_PartySearchDropBox.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartySearchDropBox,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_PartySearchDropBox>,
               InternalVTableHelperCtorCaller<UDS_VM_PartySearchDropBox>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartySearchDropBox.InnerSingleton;
}

// UDS_VM_PartySearchDropBox @ 14b6bd450

UDS_VM_PartySearchDropBox * __thiscall
UDS_VM_PartySearchDropBox::UDS_VM_PartySearchDropBox
          (UDS_VM_PartySearchDropBox *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEntry)._padding_ = '\0';
  (this->ClickEntry).bIsCustomSelected = false;
  (this->ClickEntry).bIsLacked = false;
  (this->ClickEntry).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartySearchDropBox__6B_;
  *(undefined8 *)&(this->ClickEntry).Delegate = 0;
  *(undefined8 *)&(this->ClickEntry).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEntry).Delegate.field_0x10 = 0;
  (this->ClickRemove)._padding_ = '\0';
  (this->ClickRemove).bIsCustomSelected = false;
  (this->ClickRemove).bIsLacked = false;
  (this->ClickRemove).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRemove).Delegate = 0;
  *(undefined8 *)&(this->ClickRemove).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRemove).Delegate.field_0x10 = 0;
  FText::FText(&this->SearchName);
  (this->VM_EntryButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->EntryIndex = 0;
  return this;
}

// UDS_VM_PartySearchDropBox @ 14b6bd4f0

UDS_VM_PartySearchDropBox * __thiscall
UDS_VM_PartySearchDropBox::UDS_VM_PartySearchDropBox
          (UDS_VM_PartySearchDropBox *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEntry)._padding_ = '\0';
  (this->ClickEntry).bIsCustomSelected = false;
  (this->ClickEntry).bIsLacked = false;
  (this->ClickEntry).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartySearchDropBox__6B_;
  *(undefined8 *)&(this->ClickEntry).Delegate = 0;
  *(undefined8 *)&(this->ClickEntry).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEntry).Delegate.field_0x10 = 0;
  (this->ClickRemove)._padding_ = '\0';
  (this->ClickRemove).bIsCustomSelected = false;
  (this->ClickRemove).bIsLacked = false;
  (this->ClickRemove).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRemove).Delegate = 0;
  *(undefined8 *)&(this->ClickRemove).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRemove).Delegate.field_0x10 = 0;
  FText::FText(&this->SearchName);
  (this->VM_EntryButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->EntryIndex = 0;
  return this;
}

// ~UDS_VM_PartySearchDropBox @ 14b6bf070

void __thiscall
UDS_VM_PartySearchDropBox::~UDS_VM_PartySearchDropBox(UDS_VM_PartySearchDropBox *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartySearchDropBox__6B_;
  pIVar1 = (this->SearchName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRemove).Delegate);
  pvVar2 = *(void **)&(this->ClickRemove).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRemove).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEntry).Delegate);
  pvVar2 = *(void **)&(this->ClickEntry).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEntry).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0bd0

IClassDescriptor * __thiscall
UDS_VM_PartySearchDropBox::GetFieldNotificationDescriptor(UDS_VM_PartySearchDropBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PartySearchDropBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c10a0

UClass * __cdecl UDS_VM_PartySearchDropBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartySearchDropBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartySearchDropBox",
               &Z_Registration_Info_UClass_UDS_VM_PartySearchDropBox.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartySearchDropBox,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_PartySearchDropBox>,
               InternalVTableHelperCtorCaller<UDS_VM_PartySearchDropBox>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartySearchDropBox.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PartySearchDropBox @ 14b6c1920

void __cdecl UDS_VM_PartySearchDropBox::StaticRegisterNativesUDS_VM_PartySearchDropBox(void)

{
  return;
}

// InitViewModel @ 14bf5b500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_PartySearchDropBox::InitViewModel(UDS_VM_PartySearchDropBox *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CommonIconTextButton *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_EntryButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_CommonIconTextButton_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_CommonIconTextButton_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_CommonIconTextButton *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_EntryButton).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnClickEntry @ 14bf62000

void __thiscall
UDS_VM_PartySearchDropBox::OnClickEntry
          (UDS_VM_PartySearchDropBox *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_PlayerEvent *pUVar3;
  
  pUVar3 = UDS_PlayerEvent::GetEvent();
  if (pUVar3 != (UDS_PlayerEvent *)0x0) {
    iVar1 = this->EntryIndex;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnClickSearchedNameEntry);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnClickSearchedNameEntry).Delegate,iVar1);
    }
  }
  return;
}

// OnClickRemove @ 14bf62640

void __thiscall
UDS_VM_PartySearchDropBox::OnClickRemove
          (UDS_VM_PartySearchDropBox *this,FDS_ButtonEventField *param_1)

{
  FDS_PlayerRepo *this_00;
  
  this_00 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  FDS_PlayerRepo::RemoveSearchedPlayerNameByIndex(this_00,&this->EntryIndex);
  return;
}

// OnSetViewModel @ 14bf69940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartySearchDropBox::OnSetViewModel
          (UDS_VM_PartySearchDropBox *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_CommonIconTextButton *this_00;
  code *pcVar3;
  FDS_ViewModelContext_CommonIconTextButton *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_PlayerRepo *pFVar7;
  FText *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_208 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext_PartySearchDropBox,1> local_1b8;
  UDS_VM_PartySearchDropBox *local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a0;
  FText local_190;
  FDestructionSentinel local_180;
  undefined1 *local_168;
  FText local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_1a0.Object = param_1->Object;
  local_1a0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PartySearchDropBox>(&local_1b8,&local_1a0);
  if (local_1b8.Object == (FDS_ViewModelContext_PartySearchDropBox *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_PartySearchDropBox::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x13,L"dropBoxContext is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  else {
    this->EntryIndex = (local_1b8.Object)->EntryIndex;
    pFVar7 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    iVar1 = this->EntryIndex;
    if ((iVar1 < 0) || ((pFVar7->SearchedPlayerNameList).ArrayNum <= iVar1)) {
      pFVar8 = FText::FText(&local_190);
      SetSearchName(this,pFVar8);
      if (local_190.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
      }
    }
    else {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar11 = (pFVar7->SearchedPlayerNameList).AllocatorInstance.Data + (longlong)iVar1 * 0x10;
      pFVar8 = FText::FromString(&local_160,(FString *)pFVar11);
      SetSearchName(this,pFVar8);
      if (local_160.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
      }
      MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_1c8);
      pFVar4 = local_1c8.Object;
      if (local_1c8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
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
      FDS_Text::SetTextFromUniqueString(&pFVar4->DSText,(FString *)pFVar11);
      if (pFVar4 == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
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
      local_1d8.Object = (FDS_ViewModelContext *)OnClickEntry;
      local_1d8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)(uint)local_190._12_4_ << 0x20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->OnClickDelegate,
                 (FWriteAccessScope *)&local_180);
      local_168 = &(pFVar4->OnClickDelegate).field_0x8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_168);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartySearchDropBox____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[3] = 0;
        local_1a8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_1a8);
        puVar9[4] = local_1d8.Object;
        puVar9[5] = local_1d8.SharedReferenceCount.ReferenceController;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      this_00 = (this->VM_EntryButton).field0_0x0.DebugPtr;
      local_1d8.Object = (FDS_ViewModelContext *)local_1c8.Object;
      local_1d8.SharedReferenceCount.ReferenceController =
           local_1c8.SharedReferenceCount.ReferenceController;
      if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSearchName @ 14bf7d3d0

void __thiscall
UDS_VM_PartySearchDropBox::SetSearchName(UDS_VM_PartySearchDropBox *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::SearchName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::SearchName.FieldName;
  bVar5 = FText::IdenticalTo(&this->SearchName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->SearchName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->SearchName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->SearchName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

