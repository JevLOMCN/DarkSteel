// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b693b90

UClass * __cdecl UDS_VM_Mail_Info::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mail_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mail_Info",
               &Z_Registration_Info_UClass_UDS_VM_Mail_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mail_Info,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Mail_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_Mail_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mail_Info.InnerSingleton;
}

// UDS_VM_Mail_Info @ 14b699a10

UDS_VM_Mail_Info * __thiscall
UDS_VM_Mail_Info::UDS_VM_Mail_Info(UDS_VM_Mail_Info *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->AttachmentDescriptionVisibility = Collapsed;
  this->ItemVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail_Info__6B_;
  (this->MailItem_ViewModel).field0_0x0.DebugPtr = (UDS_VM_MailItem *)0x0;
  (this->FixedText_AttachmentDescription).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AttachmentDescription).StringEnumTableNameID.Number = 0;
  (this->FixedText_AttachmentDescription).DateTime.Ticks = 0;
  (this->FixedText_AttachmentDescription).TimeSpan.Ticks = 0;
  (this->FixedText_AttachmentDescription).TimeExpressionType = None;
  (this->FixedText_AttachmentDescription).IsExpression = false;
  (this->FixedText_AttachmentDescription).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AttachmentDescription).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AttachmentDescription).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AttachmentDescription).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AttachmentDescription).FormatArgs.ArrayNum = 0;
  (this->FixedText_AttachmentDescription).FormatArgs.ArrayMax = 0;
  (this->FixedText_AttachmentDescription).StringTableType = StringUi;
  (this->FixedText_AttachmentDescription).StringTableID = 0x2716a;
  return this;
}

// UDS_VM_Mail_Info @ 14b699ab0

UDS_VM_Mail_Info * __thiscall
UDS_VM_Mail_Info::UDS_VM_Mail_Info(UDS_VM_Mail_Info *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->AttachmentDescriptionVisibility = Collapsed;
  this->ItemVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail_Info__6B_;
  (this->MailItem_ViewModel).field0_0x0.DebugPtr = (UDS_VM_MailItem *)0x0;
  (this->FixedText_AttachmentDescription).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AttachmentDescription).StringEnumTableNameID.Number = 0;
  (this->FixedText_AttachmentDescription).DateTime.Ticks = 0;
  (this->FixedText_AttachmentDescription).TimeSpan.Ticks = 0;
  (this->FixedText_AttachmentDescription).TimeExpressionType = None;
  (this->FixedText_AttachmentDescription).IsExpression = false;
  (this->FixedText_AttachmentDescription).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AttachmentDescription).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AttachmentDescription).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AttachmentDescription).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AttachmentDescription).FormatArgs.ArrayNum = 0;
  (this->FixedText_AttachmentDescription).FormatArgs.ArrayMax = 0;
  (this->FixedText_AttachmentDescription).StringTableType = StringUi;
  (this->FixedText_AttachmentDescription).StringTableID = 0x2716a;
  return this;
}

// ~UDS_VM_Mail_Info @ 14b69afd0

void __thiscall UDS_VM_Mail_Info::~UDS_VM_Mail_Info(UDS_VM_Mail_Info *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail_Info__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_AttachmentDescription).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_AttachmentDescription).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_AttachmentDescription).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_AttachmentDescription).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d410

IClassDescriptor * __thiscall
UDS_VM_Mail_Info::GetFieldNotificationDescriptor(UDS_VM_Mail_Info *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mail_Info::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69df60

UClass * __cdecl UDS_VM_Mail_Info::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mail_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mail_Info",
               &Z_Registration_Info_UClass_UDS_VM_Mail_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mail_Info,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Mail_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_Mail_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mail_Info.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Mail_Info @ 14b69e760

void __cdecl UDS_VM_Mail_Info::StaticRegisterNativesUDS_VM_Mail_Info(void)

{
  return;
}

// InitViewModel @ 14bef2f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Mail_Info::InitViewModel(UDS_VM_Mail_Info *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_MailItem *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->MailItem_ViewModel).field0_0x0.DebugPtr == (UDS_VM_MailItem *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_MailItem_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_MailItem_NoRegister();
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
    pUVar5 = (UDS_VM_MailItem *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_MailItem *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_MailItem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->MailItem_ViewModel).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnSetViewModel @ 14bf05580

void __thiscall
UDS_VM_Mail_Info::OnSetViewModel(UDS_VM_Mail_Info *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_MailItem *this_00;
  code *pcVar3;
  FDS_ViewModelContext_Mail *pFVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_48;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Mail>(&local_38,&local_28);
  if (local_38.Object != (FDS_ViewModelContext_Mail *)0x0) {
    SetMailInfo(this);
    if ((this->MailItem_ViewModel).field0_0x0.DebugPtr != (UDS_VM_MailItem *)0x0) {
      MakeContext<FDS_ViewModelContext_Mail>(&local_48);
      pFVar4 = local_48.Object;
      if (local_48.Object == (FDS_ViewModelContext_Mail *)0x0) {
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
      *(undefined4 *)&pFVar4->_padding_ = 0x1ee;
      if (local_38.Object == (FDS_ViewModelContext_Mail *)0x0) {
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
      if (pFVar4 == (FDS_ViewModelContext_Mail *)0x0) {
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
      iVar1 = ((local_38.Object)->MailUID).Data.ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange
                (&pFVar4->MailUID,
                 (wchar_t *)((local_38.Object)->MailUID).Data.AllocatorInstance.Data,iVar6);
      this_00 = (this->MailItem_ViewModel).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_48.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMailInfo @ 14bf15da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Mail_Info::SetMailInfo(UDS_VM_Mail_Info *this)

{
  void *_Src;
  FName FVar1;
  int iVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  UDS_LogManager *pUVar5;
  UDS_MailDataSet *this_00;
  UObject *pUVar6;
  longlong lVar7;
  undefined1 auStackY_1a8 [32];
  FName local_168;
  int local_160;
  int local_15c;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)(local_158 + 8));
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_158 + 8));
  if (!bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Mail_Info::SetMailInfo",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x31,L"mailDataSet is invalid");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_158 + 8));
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_158 + 8));
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  local_160 = *(int *)&pUVar6[6].field_0x18;
  lVar7 = (longlong)local_160;
  _Src = *(void **)&pUVar6[6].field_0x10;
  if (local_160 == 0) {
    local_15c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_160,0,(ForAnyElementType *)&local_168,local_160,&local_15c);
    memcpy((void *)local_168,_Src,lVar7 * 2);
  }
  UDS_MailDataSet::GetMailData(this_00,(FString *)local_158);
  if (local_168 != (FName)0x0) {
    FMemory::Free((void *)local_168);
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_158);
  if (!bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Mail_Info::SetMailInfo",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x38,L"mailData is invalid");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_158);
  iVar2 = FFieldNotificationClassDescriptor::ItemVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ItemVisibility.FieldName;
  EVar4 = Collapsed;
  if (pUVar6[4].field_0x12 != '\0') {
    EVar4 = SelfHitTestInvisible;
  }
  if (this->ItemVisibility != EVar4) {
    this->ItemVisibility = EVar4;
    local_160 = iVar2;
    local_168 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_158);
  if (pUVar6[4].field_0x12 != '\0') {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_158);
    EVar4 = SelfHitTestInvisible;
    if (pUVar6[4].field_0x11 != '\0') goto LAB_14bf1602d;
  }
  EVar4 = Collapsed;
LAB_14bf1602d:
  local_168 = FFieldNotificationClassDescriptor::AttachmentDescriptionVisibility.FieldName;
  if (this->AttachmentDescriptionVisibility != EVar4) {
    local_160 = FFieldNotificationClassDescriptor::AttachmentDescriptionVisibility.BitNumber;
    this->AttachmentDescriptionVisibility = EVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  return;
}

