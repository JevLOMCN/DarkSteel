// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// SetTitle_WrapperImpl @ 14b72d9c0

void __cdecl UDS_VM_W_ContentsPopupTitle::SetTitle_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Title.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Title.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b72d9d0

UClass * __cdecl UDS_VM_W_ContentsPopupTitle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ContentsPopupTitle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ContentsPopupTitle",
               &Z_Registration_Info_UClass_UDS_VM_W_ContentsPopupTitle.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ContentsPopupTitle,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_ContentsPopupTitle>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ContentsPopupTitle>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ContentsPopupTitle.InnerSingleton;
}

// UDS_VM_W_ContentsPopupTitle @ 14b7347b0

UDS_VM_W_ContentsPopupTitle * __thiscall
UDS_VM_W_ContentsPopupTitle::UDS_VM_W_ContentsPopupTitle
          (UDS_VM_W_ContentsPopupTitle *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ContentsPopupTitle__6B_;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->Title).StringTableType = None;
  return this;
}

// UDS_VM_W_ContentsPopupTitle @ 14b734840

UDS_VM_W_ContentsPopupTitle * __thiscall
UDS_VM_W_ContentsPopupTitle::UDS_VM_W_ContentsPopupTitle
          (UDS_VM_W_ContentsPopupTitle *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ContentsPopupTitle__6B_;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->Title).StringTableType = None;
  return this;
}

// ~UDS_VM_W_ContentsPopupTitle @ 14b736230

void __thiscall
UDS_VM_W_ContentsPopupTitle::~UDS_VM_W_ContentsPopupTitle(UDS_VM_W_ContentsPopupTitle *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ContentsPopupTitle__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739360

IClassDescriptor * __thiscall
UDS_VM_W_ContentsPopupTitle::GetFieldNotificationDescriptor(UDS_VM_W_ContentsPopupTitle *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ContentsPopupTitle::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a080

UClass * __cdecl UDS_VM_W_ContentsPopupTitle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ContentsPopupTitle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ContentsPopupTitle",
               &Z_Registration_Info_UClass_UDS_VM_W_ContentsPopupTitle.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ContentsPopupTitle,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_ContentsPopupTitle>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ContentsPopupTitle>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ContentsPopupTitle.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_ContentsPopupTitle @ 14b73af40

void __cdecl UDS_VM_W_ContentsPopupTitle::StaticRegisterNativesUDS_VM_W_ContentsPopupTitle(void)

{
  return;
}

// OnSetViewModel @ 14bfcba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ContentsPopupTitle::OnSetViewModel
          (UDS_VM_W_ContentsPopupTitle *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_PopupTitle,1> local_168;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PopupTitle>(&local_168,&local_148);
  if (local_168.Object == (FDS_ViewModelContext_PopupTitle *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_ContentsPopupTitle::OnSetViewModel",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x10,L"popupTitleContext is Invalid.")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_PopupTitle *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FDS_Text::operator=(&this->Title,&(local_168.Object)->Title);
    local_150 = FFieldNotificationClassDescriptor::Title.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::Title.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTitle @ 14bfdde80

void __thiscall
UDS_VM_W_ContentsPopupTitle::SetTitle(UDS_VM_W_ContentsPopupTitle *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Title.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Title.FieldName;
  FDS_Text::operator=(&this->Title,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

