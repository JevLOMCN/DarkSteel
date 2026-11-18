// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetConditionText_WrapperImpl @ 14b7237d0

void __cdecl UDS_VM_W_Common_Condition::SetConditionText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::ConditionText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ConditionText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetConditionValue_Left_WrapperImpl @ 14b7237e0

void __cdecl
UDS_VM_W_Common_Condition::SetConditionValue_Left_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xf0);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0xf0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xf8) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::ConditionValue_Left.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ConditionValue_Left.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetConditionValue_Right_WrapperImpl @ 14b7237f0

void __cdecl
UDS_VM_W_Common_Condition::SetConditionValue_Right_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0x100);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0x100) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x108) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::ConditionValue_Right.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ConditionValue_Right.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetColonVisibility_WrapperImpl @ 14b723800

void __cdecl UDS_VM_W_Common_Condition::SetColonVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x110) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::ColonVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ColonVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCountValueVisibility_WrapperImpl @ 14b723810

void __cdecl
UDS_VM_W_Common_Condition::SetCountValueVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CountValueVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CountValueVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x111) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x111) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b723820

UClass * __cdecl UDS_VM_W_Common_Condition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_Condition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_Condition",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_Condition.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_Condition,0x118,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_Common_Condition>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_Condition>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_Condition.InnerSingleton;
}

// UDS_VM_W_Common_Condition @ 14b728ad0

UDS_VM_W_Common_Condition * __thiscall
UDS_VM_W_Common_Condition::UDS_VM_W_Common_Condition
          (UDS_VM_W_Common_Condition *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ConditionText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_Condition__6B_;
  (this->ConditionText).StringTableID = 0;
  (this->ConditionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConditionText).StringEnumTableNameID.Number = 0;
  (this->ConditionText).DateTime.Ticks = 0;
  (this->ConditionText).TimeSpan.Ticks = 0;
  (this->ConditionText).TimeExpressionType = None;
  (this->ConditionText).IsExpression = false;
  (this->ConditionText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionText).UniqueString.Data.ArrayNum = 0;
  (this->ConditionText).UniqueString.Data.ArrayMax = 0;
  (this->ConditionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionText).FormatArgs.ArrayNum = 0;
  (this->ConditionText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->ConditionValue_Left);
  FText::FText(&this->ConditionValue_Right);
  this->CountValueVisibility = SelfHitTestInvisible;
  return this;
}

// UDS_VM_W_Common_Condition @ 14b728b80

UDS_VM_W_Common_Condition * __thiscall
UDS_VM_W_Common_Condition::UDS_VM_W_Common_Condition
          (UDS_VM_W_Common_Condition *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ConditionText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_Condition__6B_;
  (this->ConditionText).StringTableID = 0;
  (this->ConditionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConditionText).StringEnumTableNameID.Number = 0;
  (this->ConditionText).DateTime.Ticks = 0;
  (this->ConditionText).TimeSpan.Ticks = 0;
  (this->ConditionText).TimeExpressionType = None;
  (this->ConditionText).IsExpression = false;
  (this->ConditionText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionText).UniqueString.Data.ArrayNum = 0;
  (this->ConditionText).UniqueString.Data.ArrayMax = 0;
  (this->ConditionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionText).FormatArgs.ArrayNum = 0;
  (this->ConditionText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->ConditionValue_Left);
  FText::FText(&this->ConditionValue_Right);
  this->CountValueVisibility = SelfHitTestInvisible;
  return this;
}

// ~UDS_VM_W_Common_Condition @ 14b729790

void __thiscall
UDS_VM_W_Common_Condition::~UDS_VM_W_Common_Condition(UDS_VM_W_Common_Condition *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_Condition__6B_;
  pIVar1 = (this->ConditionValue_Right).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ConditionValue_Left).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ConditionText).FormatArgs.AllocatorInstance.Data,
             (this->ConditionText).FormatArgs.ArrayNum);
  pFVar2 = (this->ConditionText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConditionText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72b140

IClassDescriptor * __thiscall
UDS_VM_W_Common_Condition::GetFieldNotificationDescriptor(UDS_VM_W_Common_Condition *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_Condition::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72bbe0

UClass * __cdecl UDS_VM_W_Common_Condition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_Condition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_Condition",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_Condition.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_Condition,0x118,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_Common_Condition>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_Condition>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_Condition.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_Condition @ 14b72bf30

void __cdecl UDS_VM_W_Common_Condition::StaticRegisterNativesUDS_VM_W_Common_Condition(void)

{
  return;
}

// OnSetViewModel @ 14bfca570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_Condition::OnSetViewModel
          (UDS_VM_W_Common_Condition *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  UDS_LogManager *pUVar5;
  FText *pFVar6;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [4];
  undefined1 local_244 [12];
  FName local_238;
  int local_230;
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  TSharedPtr<FDS_ViewModelContext_Condition,1> local_208;
  FDS_Text local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FCulture,1> local_198;
  TSharedPtr<FCulture,1> local_188;
  FText local_178;
  FText local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_Common_Condition::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0xe,L"InViewModelContext is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    local_1a8.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_Condition>(&local_208,&local_1a8);
    if (local_208.Object == (FDS_ViewModelContext_Condition *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_Common_Condition::OnSetViewModel",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x15,L"context is nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      local_1f8.StringTableID = 0;
      local_1f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1f8.StringEnumTableNameID.Number = 0;
      local_1f8.DateTime.Ticks = 0;
      local_1f8.TimeSpan.Ticks = 0;
      local_1f8.TimeExpressionType = None;
      local_1f8.IsExpression = false;
      local_1f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.UniqueString.Data.ArrayNum = 0;
      local_1f8.UniqueString.Data.ArrayMax = 0;
      local_1f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.FormatArgs.ArrayNum = 0;
      local_1f8.FormatArgs.ArrayMax = 0;
      local_1f8.StringTableType = None;
      FDS_Text::SetTextFromStringTable(&local_1f8,StringUi,(local_208.Object)->StringUiId);
      FDS_Text::operator=(&this->ConditionText,&local_1f8);
      local_230 = FFieldNotificationClassDescriptor::ConditionText.BitNumber;
      local_238 = FFieldNotificationClassDescriptor::ConditionText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1f8.FormatArgs.AllocatorInstance.Data,
                 local_1f8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1f8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1f8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.UniqueString.Data.AllocatorInstance.Data);
      }
      local_198.Object = (FCulture *)0x0;
      local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = FText::AsNumber(&local_178,(local_208.Object)->LeftValue,
                               (FNumberFormattingOptions *)0x0,&local_198);
      pIVar3 = (this->ConditionValue_Left).TextData.Reference;
      pIVar4 = (pFVar6->TextData).Reference;
      if (pIVar3 != pIVar4) {
        (this->ConditionValue_Left).TextData.Reference = pIVar4;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_248);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (this->ConditionValue_Left).Flags = pFVar6->Flags;
      local_220 = FFieldNotificationClassDescriptor::ConditionValue_Left.BitNumber;
      local_228 = FFieldNotificationClassDescriptor::ConditionValue_Left.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      local_188.Object = (FCulture *)0x0;
      local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = FText::AsNumber(&local_168,(local_208.Object)->RightValue,
                               (FNumberFormattingOptions *)0x0,&local_188);
      pIVar3 = (this->ConditionValue_Right).TextData.Reference;
      pIVar4 = (pFVar6->TextData).Reference;
      if (pIVar3 != pIVar4) {
        (this->ConditionValue_Right).TextData.Reference = pIVar4;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_244);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (this->ConditionValue_Right).Flags = pFVar6->Flags;
      local_210 = FFieldNotificationClassDescriptor::ConditionValue_Right.BitNumber;
      local_218 = FFieldNotificationClassDescriptor::ConditionValue_Right.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetColonVisibility @ 14bfd6f90

void __thiscall
UDS_VM_W_Common_Condition::SetColonVisibility
          (UDS_VM_W_Common_Condition *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->ColonVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::ColonVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ColonVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetConditionText @ 14bfd7080

void __thiscall
UDS_VM_W_Common_Condition::SetConditionText(UDS_VM_W_Common_Condition *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->ConditionText,param_1);
  local_10 = FFieldNotificationClassDescriptor::ConditionText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ConditionText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetConditionValue_Left @ 14bfd70d0

void __thiscall
UDS_VM_W_Common_Condition::SetConditionValue_Left(UDS_VM_W_Common_Condition *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ConditionValue_Left).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ConditionValue_Left).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ConditionValue_Left).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::ConditionValue_Left.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ConditionValue_Left.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetConditionValue_Right @ 14bfd7160

void __thiscall
UDS_VM_W_Common_Condition::SetConditionValue_Right(UDS_VM_W_Common_Condition *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ConditionValue_Right).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ConditionValue_Right).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ConditionValue_Right).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::ConditionValue_Right.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ConditionValue_Right.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCountValueVisibility @ 14bfd8880

void __thiscall
UDS_VM_W_Common_Condition::SetCountValueVisibility
          (UDS_VM_W_Common_Condition *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CountValueVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CountValueVisibility.FieldName;
  if (this->CountValueVisibility != *param_1) {
    this->CountValueVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

