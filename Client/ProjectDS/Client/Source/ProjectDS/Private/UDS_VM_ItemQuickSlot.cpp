// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b693f90

UClass * __cdecl UDS_VM_ItemQuickSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemQuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemQuickSlot",
               &Z_Registration_Info_UClass_UDS_VM_ItemQuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemQuickSlot,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemQuickSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemQuickSlot.InnerSingleton;
}

// UDS_VM_ItemQuickSlot @ 14b697b30

UDS_VM_ItemQuickSlot * __thiscall
UDS_VM_ItemQuickSlot::UDS_VM_ItemQuickSlot(UDS_VM_ItemQuickSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemQuickSlot__6B_;
  (this->VM_InputKeyBottom).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// UDS_VM_ItemQuickSlot @ 14b697b80

UDS_VM_ItemQuickSlot * __thiscall
UDS_VM_ItemQuickSlot::UDS_VM_ItemQuickSlot(UDS_VM_ItemQuickSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemQuickSlot__6B_;
  (this->VM_InputKeyBottom).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// ~UDS_VM_ItemQuickSlot @ 14b69a420

void __thiscall UDS_VM_ItemQuickSlot::~UDS_VM_ItemQuickSlot(UDS_VM_ItemQuickSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemQuickSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69cf40

IClassDescriptor * __thiscall
UDS_VM_ItemQuickSlot::GetFieldNotificationDescriptor(UDS_VM_ItemQuickSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemQuickSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69d720

UClass * __cdecl UDS_VM_ItemQuickSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemQuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemQuickSlot",
               &Z_Registration_Info_UClass_UDS_VM_ItemQuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemQuickSlot,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemQuickSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemQuickSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemQuickSlot @ 14b69e5c0

void __cdecl UDS_VM_ItemQuickSlot::StaticRegisterNativesUDS_VM_ItemQuickSlot(void)

{
  return;
}

// OnSetViewModel @ 14bfc0af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemQuickSlot::OnSetViewModel
          (UDS_VM_ItemQuickSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_VM_InputKey *pUVar6;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_198;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext_ItemQuickSlot,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemQuickSlot>(&local_178,&local_168);
  if (local_178.Object == (FDS_ViewModelContext_ItemQuickSlot *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_178.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_ItemQuickSlot::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xe,L"context is nullptr.");
      if ((FDS_ViewModelContext_ItemQuickSlot *)local_148._padding_ !=
          (FDS_ViewModelContext_ItemQuickSlot *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this->InputKeyGroup_Vis = (local_178.Object)->QuickSlotInput_Vis;
    local_180 = FFieldNotificationClassDescriptor::InputKeyGroup_Vis.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::InputKeyGroup_Vis.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    MakeContext<FDS_ViewModelContext_InputKey>(&local_198);
    pFVar3 = local_198.Object;
    if (local_198.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15d;
    iVar1 = (local_178.Object)->QuickSlotIndex;
    if (iVar1 == 1) {
      pFVar3->KeyActionType = IA_ItemSlot_1;
    }
    else if (iVar1 == 2) {
      pFVar3->KeyActionType = IA_ItemSlot_2;
    }
    else if (iVar1 == 3) {
      pFVar3->KeyActionType = IA_ItemSlot_3;
    }
    else if (iVar1 == 4) {
      pFVar3->KeyActionType = IA_ItemSlot_4;
    }
    if ((this->VM_InputKeyBottom).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
      local_158.Object = (FDS_ViewModelContext *)local_198.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_198.SharedReferenceCount.ReferenceController;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_158);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_InputKey *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->VM_InputKeyBottom).field0_0x0.DebugPtr = pUVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetInputPosition @ 14bfda7c0

void __thiscall UDS_VM_ItemQuickSlot::SetInputPosition(UDS_VM_ItemQuickSlot *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  UDS_VM_InputKey *pUVar5;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
  pFVar3 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar3->_padding_ = 0x15d;
  iVar1 = *param_1;
  if (iVar1 == 1) {
    pFVar3->KeyActionType = IA_ItemSlot_1;
  }
  else if (iVar1 == 2) {
    pFVar3->KeyActionType = IA_ItemSlot_2;
  }
  else if (iVar1 == 3) {
    pFVar3->KeyActionType = IA_ItemSlot_3;
  }
  else if (iVar1 == 4) {
    pFVar3->KeyActionType = IA_ItemSlot_4;
  }
  if ((this->VM_InputKeyBottom).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_InputKeyBottom).field0_0x0.DebugPtr = pUVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

