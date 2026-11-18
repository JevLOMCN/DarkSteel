// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b676e40

UClass * __cdecl UDS_VM_HUD_PartyGroupSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PartyGroupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PartyGroupSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PartyGroupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PartyGroupSlot,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_PartyGroupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PartyGroupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PartyGroupSlot.InnerSingleton;
}

// UDS_VM_HUD_PartyGroupSlot @ 14b6799d0

UDS_VM_HUD_PartyGroupSlot * __thiscall
UDS_VM_HUD_PartyGroupSlot::UDS_VM_HUD_PartyGroupSlot
          (UDS_VM_HUD_PartyGroupSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyGroupSlot__6B_;
  (this->VM_MemberSlot1).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_MemberSlot2).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_MemberSlot3).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_MemberSlot4).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  return this;
}

// UDS_VM_HUD_PartyGroupSlot @ 14b679a30

UDS_VM_HUD_PartyGroupSlot * __thiscall
UDS_VM_HUD_PartyGroupSlot::UDS_VM_HUD_PartyGroupSlot
          (UDS_VM_HUD_PartyGroupSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyGroupSlot__6B_;
  (this->VM_MemberSlot1).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_MemberSlot2).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_MemberSlot3).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_MemberSlot4).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  return this;
}

// ~UDS_VM_HUD_PartyGroupSlot @ 14b67b4e0

void __thiscall
UDS_VM_HUD_PartyGroupSlot::~UDS_VM_HUD_PartyGroupSlot(UDS_VM_HUD_PartyGroupSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyGroupSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67dd40

IClassDescriptor * __thiscall
UDS_VM_HUD_PartyGroupSlot::GetFieldNotificationDescriptor(UDS_VM_HUD_PartyGroupSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_PartyGroupSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e6b0

UClass * __cdecl UDS_VM_HUD_PartyGroupSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PartyGroupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PartyGroupSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PartyGroupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PartyGroupSlot,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_PartyGroupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PartyGroupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PartyGroupSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_PartyGroupSlot @ 14b67f1f0

void __cdecl UDS_VM_HUD_PartyGroupSlot::StaticRegisterNativesUDS_VM_HUD_PartyGroupSlot(void)

{
  return;
}

// InitViewModel @ 14bef2c20

void __thiscall UDS_VM_HUD_PartyGroupSlot::InitViewModel(UDS_VM_HUD_PartyGroupSlot *this)

{
  UDS_VM_HUD_PartyMemberSlot *pUVar1;
  
  if ((this->VM_MemberSlot1).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_MemberSlot1).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_MemberSlot2).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_MemberSlot2).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_MemberSlot3).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_MemberSlot3).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_MemberSlot4).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_MemberSlot4).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnSetViewModel @ 14bf04a40

void __thiscall
UDS_VM_HUD_PartyGroupSlot::OnSetViewModel
          (UDS_VM_HUD_PartyGroupSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_PartyType EVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_VM_HUD_PartyMemberSlot *pUVar4;
  code *pcVar5;
  FName FVar6;
  int iVar7;
  FDS_ViewModelContext_PartyMember *pFVar8;
  bool bVar9;
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_a8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_98;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_88;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PartyMember>(&local_78,&local_68);
  iVar7 = FFieldNotificationClassDescriptor::SlotNumber.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::SlotNumber.FieldName;
  if (local_78.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6364775966530600944>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Party\\DS_VM_HUD_PartyGroupSlot.cpp"
                       ,0x10,"partyMemberContext.IsValid()");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    EVar1 = (local_78.Object)->PartyType;
    iVar2 = (local_78.Object)->SlotIndex;
    if (this->SlotNumber != (local_78.Object)->SlotNumber) {
      this->SlotNumber = (local_78.Object)->SlotNumber;
      local_c0 = iVar7;
      local_c8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    }
    MakeContext<FDS_ViewModelContext_PartyMember>(&local_b8);
    pFVar8 = local_b8.Object;
    if (local_b8.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)&pFVar8->_padding_ = 0x31;
    pFVar8->PartyType = EVar1;
    pFVar8->SlotIndex = iVar2;
    pUVar4 = (this->VM_MemberSlot1).field0_0x0.DebugPtr;
    local_58.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    MakeContext<FDS_ViewModelContext_PartyMember>(&local_a8);
    pFVar8 = local_a8.Object;
    if (local_a8.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)&pFVar8->_padding_ = 0x31;
    pFVar8->PartyType = EVar1;
    pFVar8->SlotIndex = iVar2 + 1;
    pUVar4 = (this->VM_MemberSlot2).field0_0x0.DebugPtr;
    local_48.Object = (FDS_ViewModelContext *)local_a8.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    MakeContext<FDS_ViewModelContext_PartyMember>(&local_98);
    pFVar8 = local_98.Object;
    if (local_98.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)&pFVar8->_padding_ = 0x31;
    pFVar8->PartyType = EVar1;
    pFVar8->SlotIndex = iVar2 + 2;
    pUVar4 = (this->VM_MemberSlot3).field0_0x0.DebugPtr;
    local_38.Object = (FDS_ViewModelContext *)local_98.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    MakeContext<FDS_ViewModelContext_PartyMember>(&local_88);
    pFVar8 = local_88.Object;
    if (local_88.Object == (FDS_ViewModelContext_PartyMember *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)&pFVar8->_padding_ = 0x31;
    pFVar8->PartyType = EVar1;
    pFVar8->SlotIndex = iVar2 + 3;
    pUVar4 = (this->VM_MemberSlot4).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_88.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

