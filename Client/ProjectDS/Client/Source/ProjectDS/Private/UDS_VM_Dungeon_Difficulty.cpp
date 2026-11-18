// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetDifficultyVisibility_WrapperImpl @ 14b637a30

void __cdecl
UDS_VM_Dungeon_Difficulty::SetDifficultyVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetDifficultyVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b637a40

UClass * __cdecl UDS_VM_Dungeon_Difficulty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Difficulty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Difficulty",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Difficulty.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Difficulty,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Difficulty>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Difficulty>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Difficulty.InnerSingleton;
}

// UDS_VM_Dungeon_Difficulty @ 14b63aa90

UDS_VM_Dungeon_Difficulty * __thiscall
UDS_VM_Dungeon_Difficulty::UDS_VM_Dungeon_Difficulty
          (UDS_VM_Dungeon_Difficulty *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DifficultyVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Difficulty__6B_;
  (this->DifficultyNormal_ViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->DifficultyHard_ViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->DifficultyHell_ViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  return this;
}

// UDS_VM_Dungeon_Difficulty @ 14b63aaf0

UDS_VM_Dungeon_Difficulty * __thiscall
UDS_VM_Dungeon_Difficulty::UDS_VM_Dungeon_Difficulty
          (UDS_VM_Dungeon_Difficulty *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DifficultyVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Difficulty__6B_;
  (this->DifficultyNormal_ViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->DifficultyHard_ViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->DifficultyHell_ViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  return this;
}

// ~UDS_VM_Dungeon_Difficulty @ 14b63cb50

void __thiscall
UDS_VM_Dungeon_Difficulty::~UDS_VM_Dungeon_Difficulty(UDS_VM_Dungeon_Difficulty *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Difficulty__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f5a0

IClassDescriptor * __thiscall
UDS_VM_Dungeon_Difficulty::GetFieldNotificationDescriptor(UDS_VM_Dungeon_Difficulty *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_Difficulty::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640090

UClass * __cdecl UDS_VM_Dungeon_Difficulty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Difficulty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Difficulty",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Difficulty.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Difficulty,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Difficulty>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Difficulty>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Difficulty.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_Difficulty @ 14b640b20

void __cdecl UDS_VM_Dungeon_Difficulty::StaticRegisterNativesUDS_VM_Dungeon_Difficulty(void)

{
  return;
}

// BindModel @ 14be74e80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_Difficulty::BindModel(UDS_VM_Dungeon_Difficulty *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8c7c0

void __thiscall UDS_VM_Dungeon_Difficulty::InitViewModel(UDS_VM_Dungeon_Difficulty *this)

{
  UDS_VM_CommonIconTextButton *pUVar1;
  
  if ((this->DifficultyNormal_ViewModel).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0)
  {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->DifficultyNormal_ViewModel).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->DifficultyHard_ViewModel).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->DifficultyHard_ViewModel).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->DifficultyHell_ViewModel).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->DifficultyHell_ViewModel).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnSetViewModel @ 14be9d7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_Difficulty::OnSetViewModel
          (UDS_VM_Dungeon_Difficulty *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  ESlateVisibility EVar7;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_178;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_178,&local_158);
  if (local_178.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Dungeon_Difficulty::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_148.Ptr,0x12,L"contentsOpenContext IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_178.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = FFieldNotificationClassDescriptor::DifficultyVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::DifficultyVisibility.FieldName;
    EVar7 = Collapsed;
    if ((local_178.Object)->TabFrameID == NormalDungeon) {
      EVar7 = SelfHitTestInvisible;
    }
    if (this->DifficultyVisibility != EVar7) {
      this->DifficultyVisibility = EVar7;
      local_160 = iVar4;
      local_168 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDifficultyButtons @ 14beaded0

void __thiscall UDS_VM_Dungeon_Difficulty::SetDifficultyButtons(UDS_VM_Dungeon_Difficulty *this)

{
  return;
}

// SetDifficultyVisibility @ 14beadee0

void __thiscall
UDS_VM_Dungeon_Difficulty::SetDifficultyVisibility
          (UDS_VM_Dungeon_Difficulty *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DifficultyVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DifficultyVisibility.FieldName;
  if (this->DifficultyVisibility != param_1) {
    this->DifficultyVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bebbc00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_Difficulty::UnbindModel(UDS_VM_Dungeon_Difficulty *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

