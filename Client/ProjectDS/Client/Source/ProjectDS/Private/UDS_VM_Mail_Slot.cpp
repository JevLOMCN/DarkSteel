// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickSlot_WrapperImpl @ 14b6941b0

void __cdecl UDS_VM_Mail_Slot::SetClickSlot_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_MailDataSet *this;
  FWeakObjectPtr aFStackX_18 [2];
  
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)aFStackX_18);
  bVar1 = FWeakObjectPtr::IsValid(aFStackX_18);
  if (bVar1) {
    this = (UDS_MailDataSet *)FWeakObjectPtr::Get(aFStackX_18);
    UDS_MailDataSet::SetSelectedMailUID(this,(FString *)((longlong)param_1 + 0xd8));
  }
  return;
}

// StaticClass @ 14b6941c0

UClass * __cdecl UDS_VM_Mail_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mail_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mail_Slot",
               &Z_Registration_Info_UClass_UDS_VM_Mail_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mail_Slot,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Mail_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mail_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mail_Slot.InnerSingleton;
}

// UDS_VM_Mail_Slot @ 14b699b50

UDS_VM_Mail_Slot * __thiscall
UDS_VM_Mail_Slot::UDS_VM_Mail_Slot(UDS_VM_Mail_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail_Slot__6B_;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  FText::FText(&this->RemainTime);
  this->bIsSelected = false;
  this->bisExpired = false;
  (this->MailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailUID).Data.ArrayNum = 0;
  (this->MailUID).Data.ArrayMax = 0;
  (this->ExpireTime).Ticks = 0;
  return this;
}

// UDS_VM_Mail_Slot @ 14b699be0

UDS_VM_Mail_Slot * __thiscall
UDS_VM_Mail_Slot::UDS_VM_Mail_Slot(UDS_VM_Mail_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail_Slot__6B_;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  FText::FText(&this->RemainTime);
  this->bIsSelected = false;
  this->bisExpired = false;
  (this->MailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailUID).Data.ArrayNum = 0;
  (this->MailUID).Data.ArrayMax = 0;
  (this->ExpireTime).Ticks = 0;
  return this;
}

// ~UDS_VM_Mail_Slot @ 14b69b040

void __thiscall UDS_VM_Mail_Slot::~UDS_VM_Mail_Slot(UDS_VM_Mail_Slot *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail_Slot__6B_;
  pFVar1 = (this->MailUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RemainTime).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlot).Delegate);
  pvVar3 = *(void **)&(this->ClickSlot).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlot).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d480

IClassDescriptor * __thiscall
UDS_VM_Mail_Slot::GetFieldNotificationDescriptor(UDS_VM_Mail_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mail_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69e020

UClass * __cdecl UDS_VM_Mail_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mail_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mail_Slot",
               &Z_Registration_Info_UClass_UDS_VM_Mail_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mail_Slot,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Mail_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mail_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mail_Slot.InnerSingleton;
}

// GetTickableTickType @ 14b69e560

ETickableTickType __thiscall UDS_VM_Mail_Slot::GetTickableTickType(UDS_VM_Mail_Slot *this)

{
  return Conditional;
}

// IsUpdate @ 14b69e5a0

bool __thiscall UDS_VM_Mail_Slot::IsUpdate(UDS_VM_Mail_Slot *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_Mail_Slot @ 14b69e770

void __cdecl UDS_VM_Mail_Slot::StaticRegisterNativesUDS_VM_Mail_Slot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Mail_Slot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMailDataChanged @ 14b69f8e0

void __cdecl UDS_VM_Mail_Slot::execOnMailDataChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMailDataChanged((UDS_VM_Mail_Slot *)param_1,local_res10);
  return;
}

// OnClickSlot @ 14befb2e0

void __thiscall UDS_VM_Mail_Slot::OnClickSlot(UDS_VM_Mail_Slot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_MailDataSet *this_00;
  FWeakObjectPtr local_res18 [2];
  
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get(local_res18);
    UDS_MailDataSet::SetSelectedMailUID(this_00,&this->MailUID);
  }
  return;
}

// OnMailDataChanged @ 14befee20

void __thiscall UDS_VM_Mail_Slot::OnMailDataChanged(UDS_VM_Mail_Slot *this,UDS_DataBase *param_1)

{
  void *_Src;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  UDS_DataBase *pUVar4;
  UObject *pUVar5;
  longlong lVar6;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_28;
  int local_20;
  int local_1c;
  
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_MailData_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar4 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
       == &pUVar3->_padding_)) goto LAB_14befee62;
  }
  pUVar4 = (UDS_DataBase *)0x0;
LAB_14befee62:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = (FName)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar4 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    if (param_1 == pUVar4) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      local_28.ComparisonIndex.Value = 0;
      local_28.Number = 0;
      local_20 = *(int *)&pUVar5[2].field_0x10;
      lVar6 = (longlong)local_20;
      _Src = *(void **)&pUVar5[2].field_0x8;
      if (local_20 == 0) {
        local_1c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_20,0,(ForAnyElementType *)&local_28,local_20,&local_1c);
        memcpy((void *)local_28,_Src,lVar6 * 2);
      }
      iVar2 = (this->MailUID).Data.ArrayNum;
      if (local_20 == iVar2) {
        if (local_20 < 2) {
          bVar1 = false;
        }
        else {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_28,
                             (wchar_t *)(this->MailUID).Data.AllocatorInstance.Data);
          bVar1 = iVar2 != 0;
        }
      }
      else {
        bVar1 = iVar2 + local_20 != 1;
      }
      if (local_28 != (FName)0x0) {
        FMemory::Free((void *)local_28);
      }
      iVar2 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
      if (!bVar1) {
        local_res18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        if (this->bIsSelected != (bool)pUVar5[4].field_0x20) {
          this->bIsSelected = (bool)pUVar5[4].field_0x20;
          local_28 = local_res18;
          local_20 = iVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf05730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_Mail_Slot::OnSetViewModel(UDS_VM_Mail_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_MailDataSet *this_00;
  UObject *pUVar5;
  char *pcVar6;
  UObject *this_01;
  UFunction *pUVar7;
  char *pcVar8;
  int iVar9;
  <lambda_1> local_res8 [8];
  undefined1 local_res10 [16];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FWeakObjectPtr local_100;
  FName local_f8;
  FName local_f0;
  UDS_VM_Mail_Slot *local_e8;
  FName *local_e0;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_a8;
  FDestructionSentinel local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  this->bisExpired = false;
  local_b8.Object = param_1->Object;
  local_b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Mail>(&local_c8,&local_b8);
  if (local_c8.Object == (FDS_ViewModelContext_Mail *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    goto LAB_14bf05a93;
  }
  iVar1 = ((local_c8.Object)->MailUID).Data.ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange
            (&this->MailUID,(wchar_t *)((local_c8.Object)->MailUID).Data.AllocatorInstance.Data,
             iVar9);
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)(local_res10 + 8));
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_res10 + 8));
  if (bVar4) {
    this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_res10 + 8));
    UDS_MailDataSet::GetMailData(this_00,(FString *)local_res10);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_res10);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res10);
      (this->ExpireTime).Ticks = *(long64 *)(pUVar5 + 4);
      SetRemainTime(this);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res10);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),
                 (UObject *)this);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res10);
      pcVar6 = strstr("&UDS_VM_Mail_Slot::OnMailDataChanged","::");
      if (pcVar6 == (char *)0x0) {
LAB_14bf058cb:
        pcVar8 = &DAT_00000002;
LAB_14bf058d0:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        do {
          pcVar8 = pcVar6;
          pcVar6 = strstr(pcVar8 + 1,"::");
        } while (pcVar6 != (char *)0x0);
        if (pcVar8 == (char *)0x0) goto LAB_14bf058cb;
        pcVar8 = pcVar8 + 2;
        if (*pcVar8 == '0') goto LAB_14bf058d0;
      }
      ::FName::FName(&local_f0,pcVar8);
      local_res20 = local_f0;
      local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_100.ObjectIndex = 0;
      local_100.ObjectSerialNumber = 0;
      local_f8.ComparisonIndex.Value = 0;
      local_f8.Number = 0;
      local_e8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Mail_Slot *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_e8);
      local_f8 = local_res20;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_108,&local_80);
      if ((local_f8 == (FName)0x0) ||
         (this_01 = FWeakObjectPtr::Get(&local_100), this_01 == (UObject *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
LAB_14bf059b3:
        local_e0 = &local_res20;
        `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
        __Internal_BindDynamic<UDS_VM_Mail_Slot>'::__l2::<lambda_1>::operator()(&local_e0);
      }
      else {
        pUVar7 = UObject::FindFunction(this_01,local_f8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        if (pUVar7 == (UFunction *)0x0) goto LAB_14bf059b3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_108,&local_68);
      local_a8.Object = local_100;
      local_a8.FunctionName = local_f8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),
                 (FWriteAccessScope *)&local_98);
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                  *)&pUVar5[1].field_0x8,local_res8,Default);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),&local_a8);
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res10);
      this->bIsSelected = (bool)pUVar5[4].field_0x20;
      local_d0 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
      local_d8 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
LAB_14bf05a93:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf0aab0

void __thiscall UDS_VM_Mail_Slot::OnUpdate(UDS_VM_Mail_Slot *this,float param_1)

{
  UDS_MailManager *this_00;
  FText *pFVar1;
  double dVar2;
  longlong lStackX_8;
  FString FStack_28;
  FText FStack_18;
  
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  dVar2 = (double)((this->ExpireTime).Ticks - lStackX_8) * __real_3e7ad7f29abcaf48;
  if (0.0 <= dVar2) {
    UDS_TimeUtilManager::ConvertStringFromSec(&FStack_28,(float)dVar2,DayHourSec,false);
    pFVar1 = FText::FromString(&FStack_18,&FStack_28);
    FText::operator=(&this->RemainTime,pFVar1);
    if (FStack_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
    }
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    FStack_28.Data.ArrayNum = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
    FStack_28.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::RemainTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
  }
  else if (this->bisExpired == false) {
    this->bisExpired = true;
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    this_00 = UDS_MailManager::GetInst();
    if (this_00 != (UDS_MailManager *)0x0) {
      UDS_MailManager::DeleteMail(this_00,&this->MailUID,None,false);
      return;
    }
  }
  return;
}

// SetIsSelected @ 14bf14eb0

void __thiscall UDS_VM_Mail_Slot::SetIsSelected(UDS_VM_Mail_Slot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRemainTime @ 14bf188f0

void __thiscall UDS_VM_Mail_Slot::SetRemainTime(UDS_VM_Mail_Slot *this)

{
  UDS_MailManager *this_00;
  FText *pFVar1;
  double dVar2;
  longlong local_res8;
  FString local_28;
  FText local_18;
  
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  dVar2 = (double)((this->ExpireTime).Ticks - local_res8) * __real_3e7ad7f29abcaf48;
  if (0.0 <= dVar2) {
    UDS_TimeUtilManager::ConvertStringFromSec(&local_28,(float)dVar2,DayHourSec,false);
    pFVar1 = FText::FromString(&local_18,&local_28);
    FText::operator=(&this->RemainTime,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.ArrayNum = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
    local_28.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::RemainTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  else if (this->bisExpired == false) {
    this->bisExpired = true;
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    this_00 = UDS_MailManager::GetInst();
    if (this_00 != (UDS_MailManager *)0x0) {
      UDS_MailManager::DeleteMail(this_00,&this->MailUID,None,false);
      return;
    }
  }
  return;
}

