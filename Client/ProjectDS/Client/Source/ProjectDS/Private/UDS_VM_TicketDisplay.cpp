// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetNeedTicketCount_WrapperImpl @ 14b6ecae0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl UDS_VM_TicketDisplay::SetNeedTicketCount_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  FString *pFVar2;
  undefined1 auStack_98 [8];
  FSharedReferencer<1> FStack_90;
  FText FStack_88;
  FText FStack_78;
  FStringFormatArg FStack_68;
  FStringFormatArg FStack_48;
  FString FStack_28;
  FString FStack_18;
  
  *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)param_2;
  FStack_90.ReferenceController._0_4_ = FFieldNotificationClassDescriptor::NeedTicketCount.BitNumber
  ;
  auStack_98._0_4_ =
       FFieldNotificationClassDescriptor::NeedTicketCount.FieldName.ComparisonIndex.Value;
  auStack_98._4_4_ = FFieldNotificationClassDescriptor::NeedTicketCount.FieldName.Number;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,auStack_98)
  ;
  auStack_98 = (undefined1  [8])0x0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::AsNumber(&FStack_88,*(int *)((longlong)param_1 + 0xa0),
                           (FNumberFormattingOptions *)0x0,(TSharedPtr<FCulture,1> *)auStack_98);
  FText::operator=((FText *)((longlong)param_1 + 0xa8),pFVar1);
  if (FStack_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  FStack_90.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::NeedTicketCount_Text.BitNumber;
  auStack_98._0_4_ =
       FFieldNotificationClassDescriptor::NeedTicketCount_Text.FieldName.ComparisonIndex.Value;
  auStack_98._4_4_ = FFieldNotificationClassDescriptor::NeedTicketCount_Text.FieldName.Number;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,auStack_98)
  ;
  if (*(longlong *)((longlong)param_1 + 200) != 0) {
    FStack_88.Flags = 0x2b0b;
    FStack_88._12_4_ = 0;
    FStack_88.TextData.Reference = (ITextData *)&___7FDS_StringUiID__6B_;
    pFVar2 = ::FString::FormatAsNumber
                       (&FStack_28,*(int *)(*(longlong *)((longlong)param_1 + 200) + 0xa8));
    FStringFormatArg::FStringFormatArg(&FStack_68,pFVar2);
    pFVar2 = ::FString::FormatAsNumber(&FStack_18,*(int *)((longlong)param_1 + 0xa0));
    FStringFormatArg::FStringFormatArg(&FStack_48,pFVar2);
    auStack_98 = (undefined1  [8])0x0;
    FStack_90.ReferenceController._0_4_ = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,(ForAnyElementType *)auStack_98,2,
               (int *)((longlong)&FStack_90.ReferenceController + 4));
    ConstructItems<FStringFormatArg,FStringFormatArg,int>((void *)auStack_98,&FStack_68,2);
    pFVar1 = FDS_StringIDWrapper::FormatText
                       ((FDS_StringIDWrapper *)&FStack_88,&FStack_78,
                        (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)auStack_98);
    FText::operator=((FText *)((longlong)param_1 + 0xb8),pFVar1);
    if (FStack_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)auStack_98,(int)FStack_90.ReferenceController);
    if (auStack_98 != (undefined1  [8])0x0) {
      FMemory::Free((void *)auStack_98);
    }
    if (FStack_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.StringValue.Data.AllocatorInstance.Data);
    }
    if (FStack_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.StringValue.Data.AllocatorInstance.Data);
    }
    FStack_90.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::HavePerNeedTicket_Text.BitNumber;
    auStack_98._0_4_ =
         FFieldNotificationClassDescriptor::HavePerNeedTicket_Text.FieldName.ComparisonIndex.Value;
    auStack_98._4_4_ = FFieldNotificationClassDescriptor::HavePerNeedTicket_Text.FieldName.Number;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,auStack_98);
  }
  return;
}

// StaticClass @ 14b6ecaf0

UClass * __cdecl UDS_VM_TicketDisplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TicketDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TicketDisplay",
               &Z_Registration_Info_UClass_UDS_VM_TicketDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_TicketDisplay,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TicketDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_TicketDisplay>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TicketDisplay.InnerSingleton;
}

// UDS_VM_TicketDisplay @ 14b6f2530

UDS_VM_TicketDisplay * __thiscall
UDS_VM_TicketDisplay::UDS_VM_TicketDisplay(UDS_VM_TicketDisplay *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TicketDisplay__6B_;
  FText::FText(&this->NeedTicketCount_Text);
  FText::FText(&this->HavePerNeedTicket_Text);
  (this->TicketData).field0_0x0.DebugPtr = (UDS_VM_TicketData *)0x0;
  return this;
}

// UDS_VM_TicketDisplay @ 14b6f2590

UDS_VM_TicketDisplay * __thiscall
UDS_VM_TicketDisplay::UDS_VM_TicketDisplay(UDS_VM_TicketDisplay *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TicketDisplay__6B_;
  FText::FText(&this->NeedTicketCount_Text);
  FText::FText(&this->HavePerNeedTicket_Text);
  (this->TicketData).field0_0x0.DebugPtr = (UDS_VM_TicketData *)0x0;
  return this;
}

// ~UDS_VM_TicketDisplay @ 14b6f42d0

void __thiscall UDS_VM_TicketDisplay::~UDS_VM_TicketDisplay(UDS_VM_TicketDisplay *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TicketDisplay__6B_;
  pIVar1 = (this->HavePerNeedTicket_Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->NeedTicketCount_Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6cb0

IClassDescriptor * __thiscall
UDS_VM_TicketDisplay::GetFieldNotificationDescriptor(UDS_VM_TicketDisplay *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TicketDisplay::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7660

UClass * __cdecl UDS_VM_TicketDisplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TicketDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TicketDisplay",
               &Z_Registration_Info_UClass_UDS_VM_TicketDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_TicketDisplay,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TicketDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_TicketDisplay>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TicketDisplay.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TicketDisplay @ 14b6f8430

void __cdecl UDS_VM_TicketDisplay::StaticRegisterNativesUDS_VM_TicketDisplay(void)

{
  return;
}

// InitViewModel @ 14be256a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_TicketDisplay::InitViewModel(UDS_VM_TicketDisplay *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_TicketData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->TicketData).field0_0x0.DebugPtr == (UDS_VM_TicketData *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_TicketData_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_TicketData_NoRegister();
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
    pUVar5 = (UDS_VM_TicketData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_TicketData *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_TicketData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->TicketData).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnSetViewModel @ 14be41450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TicketDisplay::OnSetViewModel
          (UDS_VM_TicketDisplay *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  UDS_VM_TicketData *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ViewModelContext_Ticket,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
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
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_TicketDisplay::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x10,L"InViewModelContext is nullptr.");
      if ((FDS_ViewModelContext_Ticket *)local_148._padding_ != (FDS_ViewModelContext_Ticket *)0x0)
      {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_168.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_168.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_Ticket>(&local_178,&local_168);
    if (local_178.Object == (FDS_ViewModelContext_Ticket *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = (longlong)local_178.Object;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_TicketDisplay::OnSetViewModel",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x17,L"context is nullptr.");
        if ((FDS_ViewModelContext_Ticket *)local_148._padding_ != (FDS_ViewModelContext_Ticket *)0x0
           ) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      this_00 = (this->TicketData).field0_0x0.DebugPtr;
      local_158.Object = (FDS_ViewModelContext *)local_178.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_178.SharedReferenceCount.ReferenceController;
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_158);
      SetNeedTicketCount(this,&(local_178.Object)->NeedTicket);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetNeedTicketCount @ 14be4e320

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_TicketDisplay::SetNeedTicketCount(UDS_VM_TicketDisplay *this,int *param_1)

{
  UDS_VM_TicketData *pUVar1;
  FText *pFVar2;
  FString *pFVar3;
  undefined1 local_98 [8];
  FSharedReferencer<1> FStack_90;
  FText local_88;
  FText local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  FString local_18;
  
  this->NeedTicketCount = *param_1;
  FStack_90.ReferenceController._0_4_ = FFieldNotificationClassDescriptor::NeedTicketCount.BitNumber
  ;
  local_98._0_4_ =
       FFieldNotificationClassDescriptor::NeedTicketCount.FieldName.ComparisonIndex.Value;
  local_98._4_4_ = FFieldNotificationClassDescriptor::NeedTicketCount.FieldName.Number;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_98);
  local_98 = (undefined1  [8])0x0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = FText::AsNumber(&local_88,this->NeedTicketCount,(FNumberFormattingOptions *)0x0,
                           (TSharedPtr<FCulture,1> *)local_98);
  FText::operator=(&this->NeedTicketCount_Text,pFVar2);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  FStack_90.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::NeedTicketCount_Text.BitNumber;
  local_98._0_4_ =
       FFieldNotificationClassDescriptor::NeedTicketCount_Text.FieldName.ComparisonIndex.Value;
  local_98._4_4_ = FFieldNotificationClassDescriptor::NeedTicketCount_Text.FieldName.Number;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_98);
  pUVar1 = (this->TicketData).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_VM_TicketData *)0x0) {
    local_88.Flags = 0x2b0b;
    local_88._12_4_ = 0;
    local_88.TextData.Reference = (ITextData *)&___7FDS_StringUiID__6B_;
    pFVar3 = ::FString::FormatAsNumber(&local_28,pUVar1->CurrentQuantity);
    FStringFormatArg::FStringFormatArg(&local_68,pFVar3);
    pFVar3 = ::FString::FormatAsNumber(&local_18,this->NeedTicketCount);
    FStringFormatArg::FStringFormatArg(&local_48,pFVar3);
    local_98 = (undefined1  [8])0x0;
    FStack_90.ReferenceController._0_4_ = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,(ForAnyElementType *)local_98,2,
               (int *)((longlong)&FStack_90.ReferenceController + 4));
    ConstructItems<FStringFormatArg,FStringFormatArg,int>((void *)local_98,&local_68,2);
    pFVar2 = FDS_StringIDWrapper::FormatText
                       ((FDS_StringIDWrapper *)&local_88,&local_78,
                        (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)local_98);
    FText::operator=(&this->HavePerNeedTicket_Text,pFVar2);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_98,(int)FStack_90.ReferenceController);
    if (local_98 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_98);
    }
    if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
    }
    FStack_90.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::HavePerNeedTicket_Text.BitNumber;
    local_98._0_4_ =
         FFieldNotificationClassDescriptor::HavePerNeedTicket_Text.FieldName.ComparisonIndex.Value;
    local_98._4_4_ = FFieldNotificationClassDescriptor::HavePerNeedTicket_Text.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_98);
  }
  return;
}

