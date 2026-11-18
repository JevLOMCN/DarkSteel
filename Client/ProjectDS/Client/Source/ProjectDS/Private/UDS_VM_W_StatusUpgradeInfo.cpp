// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b756630

UClass * __cdecl UDS_VM_W_StatusUpgradeInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_StatusUpgradeInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_StatusUpgradeInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_StatusUpgradeInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_StatusUpgradeInfo,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_StatusUpgradeInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_StatusUpgradeInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_StatusUpgradeInfo.InnerSingleton;
}

// UDS_VM_W_StatusUpgradeInfo @ 14b759d10

UDS_VM_W_StatusUpgradeInfo * __thiscall
UDS_VM_W_StatusUpgradeInfo::UDS_VM_W_StatusUpgradeInfo
          (UDS_VM_W_StatusUpgradeInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_StatusUpgradeInfo__6B_;
  this->StatusIconID = 0;
  (this->StatusName).StringTableType = None;
  (this->StatusName).StringTableID = 0;
  (this->StatusName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusName).StringEnumTableNameID.Number = 0;
  (this->StatusName).DateTime.Ticks = 0;
  (this->StatusName).TimeSpan.Ticks = 0;
  (this->StatusName).TimeExpressionType = None;
  (this->StatusName).IsExpression = false;
  (this->StatusName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).UniqueString.Data.ArrayNum = 0;
  (this->StatusName).UniqueString.Data.ArrayMax = 0;
  (this->StatusName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).FormatArgs.ArrayNum = 0;
  (this->StatusName).FormatArgs.ArrayMax = 0;
  (this->StatusDesc).StringTableType = None;
  (this->StatusDesc).StringTableID = 0;
  (this->StatusDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusDesc).StringEnumTableNameID.Number = 0;
  (this->StatusDesc).DateTime.Ticks = 0;
  (this->StatusDesc).TimeSpan.Ticks = 0;
  (this->StatusDesc).TimeExpressionType = None;
  (this->StatusDesc).IsExpression = false;
  (this->StatusDesc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).UniqueString.Data.ArrayNum = 0;
  (this->StatusDesc).UniqueString.Data.ArrayMax = 0;
  (this->StatusDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).FormatArgs.ArrayNum = 0;
  (this->StatusDesc).FormatArgs.ArrayMax = 0;
  this->BeforeStatusValue = 0;
  this->AfterStatusValue = 0;
  this->StatusGapValue = 0;
  this->PlusStatusValue = 0;
  FText::FText(&this->BeforeStatusValueText);
  FText::FText(&this->AfterStatusValueText);
  FText::FText(&this->StatusGapValueText);
  FText::FText(&this->PlusStatusValueText);
  this->UpgradeVisibility = Collapsed;
  this->PlusVisibility = Collapsed;
  this->IsNew = false;
  return this;
}

// UDS_VM_W_StatusUpgradeInfo @ 14b759e40

UDS_VM_W_StatusUpgradeInfo * __thiscall
UDS_VM_W_StatusUpgradeInfo::UDS_VM_W_StatusUpgradeInfo
          (UDS_VM_W_StatusUpgradeInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_StatusUpgradeInfo__6B_;
  this->StatusIconID = 0;
  (this->StatusName).StringTableType = None;
  (this->StatusName).StringTableID = 0;
  (this->StatusName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusName).StringEnumTableNameID.Number = 0;
  (this->StatusName).DateTime.Ticks = 0;
  (this->StatusName).TimeSpan.Ticks = 0;
  (this->StatusName).TimeExpressionType = None;
  (this->StatusName).IsExpression = false;
  (this->StatusName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).UniqueString.Data.ArrayNum = 0;
  (this->StatusName).UniqueString.Data.ArrayMax = 0;
  (this->StatusName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusName).FormatArgs.ArrayNum = 0;
  (this->StatusName).FormatArgs.ArrayMax = 0;
  (this->StatusDesc).StringTableType = None;
  (this->StatusDesc).StringTableID = 0;
  (this->StatusDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusDesc).StringEnumTableNameID.Number = 0;
  (this->StatusDesc).DateTime.Ticks = 0;
  (this->StatusDesc).TimeSpan.Ticks = 0;
  (this->StatusDesc).TimeExpressionType = None;
  (this->StatusDesc).IsExpression = false;
  (this->StatusDesc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).UniqueString.Data.ArrayNum = 0;
  (this->StatusDesc).UniqueString.Data.ArrayMax = 0;
  (this->StatusDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).FormatArgs.ArrayNum = 0;
  (this->StatusDesc).FormatArgs.ArrayMax = 0;
  this->BeforeStatusValue = 0;
  this->AfterStatusValue = 0;
  this->StatusGapValue = 0;
  this->PlusStatusValue = 0;
  FText::FText(&this->BeforeStatusValueText);
  FText::FText(&this->AfterStatusValueText);
  FText::FText(&this->StatusGapValueText);
  FText::FText(&this->PlusStatusValueText);
  this->UpgradeVisibility = Collapsed;
  this->PlusVisibility = Collapsed;
  this->IsNew = false;
  return this;
}

// ~UDS_VM_W_StatusUpgradeInfo @ 14b75baf0

void __thiscall
UDS_VM_W_StatusUpgradeInfo::~UDS_VM_W_StatusUpgradeInfo(UDS_VM_W_StatusUpgradeInfo *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_StatusUpgradeInfo__6B_;
  pIVar1 = (this->PlusStatusValueText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->StatusGapValueText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->AfterStatusValueText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->BeforeStatusValueText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StatusDesc).FormatArgs.AllocatorInstance.Data,
             (this->StatusDesc).FormatArgs.ArrayNum);
  pFVar2 = (this->StatusDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StatusDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StatusName).FormatArgs.AllocatorInstance.Data,
             (this->StatusName).FormatArgs.ArrayNum);
  pFVar2 = (this->StatusName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StatusName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75ddd0

IClassDescriptor * __thiscall
UDS_VM_W_StatusUpgradeInfo::GetFieldNotificationDescriptor(UDS_VM_W_StatusUpgradeInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_StatusUpgradeInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e730

UClass * __cdecl UDS_VM_W_StatusUpgradeInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_StatusUpgradeInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_StatusUpgradeInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_StatusUpgradeInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_StatusUpgradeInfo,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_StatusUpgradeInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_StatusUpgradeInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_StatusUpgradeInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_StatusUpgradeInfo @ 14b75efb0

void __cdecl UDS_VM_W_StatusUpgradeInfo::StaticRegisterNativesUDS_VM_W_StatusUpgradeInfo(void)

{
  return;
}

// OnSetViewModel @ 14c035a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_StatusUpgradeInfo::OnSetViewModel
          (UDS_VM_W_StatusUpgradeInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  FString *pFVar7;
  FText *pFVar8;
  FString *pFVar9;
  ESlateVisibility EVar10;
  undefined1 auStackY_3d8 [32];
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_3a8;
  FName local_398;
  int local_390;
  FName local_388;
  int local_380;
  FName local_378;
  int local_370;
  FName local_368;
  int local_360;
  FName local_358;
  int local_350;
  FName local_348;
  int local_340;
  FName local_338;
  int local_330;
  FName local_328;
  int local_320;
  FName local_318;
  int local_310;
  FFieldId local_308;
  FFieldId local_2f8;
  FFieldId local_2e8;
  FFieldId local_2d8;
  FName local_2c8;
  int local_2c0;
  FDS_Text local_2b8;
  FDS_Text local_268;
  TSharedPtr<FDS_ViewModelContext,1> local_218;
  FDS_StringUiID local_208;
  FText local_1f8;
  FString local_1e8;
  FText local_1d8;
  FString local_1c8;
  FText local_1b8;
  FString local_1a8;
  FText local_198;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_218.Object = param_1->Object;
  local_218.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_StatusUpgradeInfo>(&local_3a8,&local_218);
  iVar5 = FFieldNotificationClassDescriptor::StatusIconID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::StatusIconID.FieldName;
  if (local_3a8.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_W_StatusUpgradeInfo::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_168.Ptr,0x10,
                 L"FDS_ViewModelTemplateContext_CharacterStatusUpgradeInfo is Invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    if (local_3a8.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->StatusIconID != (local_3a8.Object)->StatusIconID) {
      this->StatusIconID = (local_3a8.Object)->StatusIconID;
      local_398 = FVar2;
      local_390 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_398);
    }
    iVar5 = FFieldNotificationClassDescriptor::StatusName.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::StatusName.FieldName;
    local_2b8.StringTableID = 0;
    local_2b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2b8.StringEnumTableNameID.Number = 0;
    local_2b8.DateTime.Ticks = 0;
    local_2b8.TimeSpan.Ticks = 0;
    local_2b8.TimeExpressionType = None;
    local_2b8.IsExpression = false;
    local_2b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.UniqueString.Data.ArrayNum = 0;
    local_2b8.UniqueString.Data.ArrayMax = 0;
    local_2b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.FormatArgs.ArrayNum = 0;
    local_2b8.FormatArgs.ArrayMax = 0;
    local_2b8.StringTableType = None;
    FDS_Text::SetTextFromStringTable(&local_2b8,StringBase,(local_3a8.Object)->StatusNameID);
    FDS_Text::operator=(&this->StatusName,&local_2b8);
    local_388 = FVar2;
    local_380 = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_388);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data,
               local_2b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_2b8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_2b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar5 = FFieldNotificationClassDescriptor::StatusDesc.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::StatusDesc.FieldName;
    local_268.DateTime.Ticks = 0;
    local_268.TimeSpan.Ticks = 0;
    local_268.StringTableType = None;
    local_268.StringTableID = 0;
    local_268.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_268.StringEnumTableNameID.Number = 0;
    local_268.TimeExpressionType = None;
    local_268.IsExpression = false;
    local_268.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.UniqueString.Data.ArrayNum = 0;
    local_268.UniqueString.Data.ArrayMax = 0;
    local_268.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.FormatArgs.ArrayNum = 0;
    local_268.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_268,StringBase,(local_3a8.Object)->StatusDescID);
    FDS_Text::operator=(&this->StatusDesc,&local_268);
    local_378 = FVar2;
    local_370 = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data,
               local_268.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_268.FormatArgs.AllocatorInstance.Data);
    }
    if (local_268.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.UniqueString.Data.AllocatorInstance.Data);
    }
    FVar2 = FFieldNotificationClassDescriptor::UpgradeVisibility.FieldName;
    EVar10 = Collapsed;
    EVar4 = Collapsed;
    if ((local_3a8.Object)->IsUpagade != false) {
      EVar4 = SelfHitTestInvisible;
    }
    if (this->UpgradeVisibility != EVar4) {
      local_360 = FFieldNotificationClassDescriptor::UpgradeVisibility.BitNumber;
      this->UpgradeVisibility = EVar4;
      local_368 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_368);
    }
    iVar5 = FFieldNotificationClassDescriptor::PlusVisibility.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::PlusVisibility.FieldName;
    if ((local_3a8.Object)->IsPlus != false) {
      EVar10 = SelfHitTestInvisible;
    }
    if (this->PlusVisibility != EVar10) {
      this->PlusVisibility = EVar10;
      local_350 = iVar5;
      local_358 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_358);
    }
    FVar2 = FFieldNotificationClassDescriptor::BeforeStatusValue.FieldName;
    if (this->BeforeStatusValue != (local_3a8.Object)->BeforeStatusValue) {
      local_340 = FFieldNotificationClassDescriptor::BeforeStatusValue.BitNumber;
      this->BeforeStatusValue = (local_3a8.Object)->BeforeStatusValue;
      local_348 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_348);
    }
    FVar2 = FFieldNotificationClassDescriptor::AfterStatusValue.FieldName;
    if (this->AfterStatusValue != (local_3a8.Object)->AfterStatusValue) {
      local_330 = FFieldNotificationClassDescriptor::AfterStatusValue.BitNumber;
      this->AfterStatusValue = (local_3a8.Object)->AfterStatusValue;
      local_338 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_338);
    }
    FVar2 = FFieldNotificationClassDescriptor::StatusGapValue.FieldName;
    iVar5 = this->AfterStatusValue - this->BeforeStatusValue;
    if (this->StatusGapValue != iVar5) {
      local_320 = FFieldNotificationClassDescriptor::StatusGapValue.BitNumber;
      this->StatusGapValue = iVar5;
      local_328 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_328);
    }
    FVar2 = FFieldNotificationClassDescriptor::PlusStatusValue.FieldName;
    if (this->PlusStatusValue != (local_3a8.Object)->PlusStatusValue) {
      local_310 = FFieldNotificationClassDescriptor::PlusStatusValue.BitNumber;
      this->PlusStatusValue = (local_3a8.Object)->PlusStatusValue;
      local_318 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
    }
    iVar5 = FFieldNotificationClassDescriptor::BeforeStatusValueText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::BeforeStatusValueText.FieldName;
    pFVar7 = DS_Util::GetInfoViewValueFormattedString
                       (&local_1e8,(local_3a8.Object)->FormatType,(float)this->BeforeStatusValue);
    pFVar8 = FText::FromString(&local_1f8,pFVar7);
    local_308.FieldName = FVar2;
    local_308.BitNumber = iVar5;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->BeforeStatusValueText,pFVar8,&local_308);
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    iVar5 = FFieldNotificationClassDescriptor::AfterStatusValueText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::AfterStatusValueText.FieldName;
    pFVar7 = DS_Util::GetInfoViewValueFormattedString
                       (&local_1c8,(local_3a8.Object)->FormatType,(float)this->AfterStatusValue);
    pFVar8 = FText::FromString(&local_1d8,pFVar7);
    local_2f8.FieldName = FVar2;
    local_2f8.BitNumber = iVar5;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->AfterStatusValueText,pFVar8,&local_2f8);
    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    iVar5 = FFieldNotificationClassDescriptor::StatusGapValueText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::StatusGapValueText.FieldName;
    pFVar7 = DS_Util::GetInfoViewValueFormattedString
                       (&local_1a8,(local_3a8.Object)->FormatType,(float)this->StatusGapValue);
    pFVar8 = FText::FromString(&local_1b8,pFVar7);
    local_2e8.FieldName = FVar2;
    local_2e8.BitNumber = iVar5;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->StatusGapValueText,pFVar8,&local_2e8);
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    iVar5 = FFieldNotificationClassDescriptor::PlusStatusValueText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::PlusStatusValueText.FieldName;
    pFVar7 = DS_Util::GetInfoViewValueFormattedString
                       (&local_178,(local_3a8.Object)->FormatType,(float)this->PlusStatusValue);
    local_208.ID = 0x29817;
    local_208._padding_ = (longlong)&___7FDS_StringUiID__6B_;
    pFVar9 = FDS_StringUiID::Str(&local_208);
    pFVar7 = DS_Util::GetFormatString<FString>(&local_188,pFVar9,pFVar7);
    pFVar8 = FText::FromString(&local_198,pFVar7);
    local_2d8.FieldName = FVar2;
    local_2d8.BitNumber = iVar5;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->PlusStatusValueText,pFVar8,&local_2d8);
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    FVar2 = FFieldNotificationClassDescriptor::IsNew.FieldName;
    if (this->IsNew != (local_3a8.Object)->IsNew) {
      local_2c0 = FFieldNotificationClassDescriptor::IsNew.BitNumber;
      this->IsNew = (local_3a8.Object)->IsNew;
      local_2c8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

