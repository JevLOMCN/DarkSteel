// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetOnClickTabChangeEvent_WrapperImpl @ 14b71bc30

void __cdecl
UDS_VM_W_CharacterLevelupInfo::SetOnClickTabChangeEvent_WrapperImpl(void *param_1,void *param_2)

{
  FDS_EventDelegate<EDS_CharStatusPanelType_const_> *this;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_CharacterUIEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel FStack_38;
  
  pUVar9 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar9 != (UDS_CharacterUIEvent *)0x0) {
    this = &pUVar9->OnChangeDetailPanel;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&FStack_38);
      puVar1 = &(pUVar9->OnChangeDetailPanel).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->OnChangeDetailPanel).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->OnChangeDetailPanel).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->OnChangeDetailPanel).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->OnChangeDetailPanel).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
      }
      if (FStack_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_38.Accessor,&FStack_38);
      }
    }
  }
  return;
}

// StaticClass @ 14b71bc40

UClass * __cdecl UDS_VM_W_CharacterLevelupInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterLevelupInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterLevelupInfo,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterLevelupInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterLevelupInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfo.InnerSingleton;
}

// UDS_VM_W_CharacterLevelupInfo @ 14b71e980

UDS_VM_W_CharacterLevelupInfo * __thiscall
UDS_VM_W_CharacterLevelupInfo::UDS_VM_W_CharacterLevelupInfo
          (UDS_VM_W_CharacterLevelupInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterLevelupInfo__6B_;
  (this->DescText).StringTableType = None;
  (this->DescText).StringTableID = 0;
  (this->DescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescText).StringEnumTableNameID.Number = 0;
  (this->DescText).DateTime.Ticks = 0;
  (this->DescText).TimeSpan.Ticks = 0;
  (this->DescText).TimeExpressionType = None;
  (this->DescText).IsExpression = false;
  (this->DescText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).UniqueString.Data.ArrayNum = 0;
  (this->DescText).UniqueString.Data.ArrayMax = 0;
  (this->DescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).FormatArgs.ArrayNum = 0;
  (this->DescText).FormatArgs.ArrayMax = 0;
  (this->PanelChangeBtnText).StringTableType = None;
  (this->PanelChangeBtnText).StringTableID = 0;
  (this->PanelChangeBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PanelChangeBtnText).StringEnumTableNameID.Number = 0;
  (this->PanelChangeBtnText).DateTime.Ticks = 0;
  (this->PanelChangeBtnText).TimeSpan.Ticks = 0;
  (this->PanelChangeBtnText).TimeExpressionType = None;
  (this->PanelChangeBtnText).IsExpression = false;
  (this->PanelChangeBtnText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PanelChangeBtnText).UniqueString.Data.ArrayNum = 0;
  (this->PanelChangeBtnText).UniqueString.Data.ArrayMax = 0;
  (this->PanelChangeBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PanelChangeBtnText).FormatArgs.ArrayNum = 0;
  (this->PanelChangeBtnText).FormatArgs.ArrayMax = 0;
  this->CharEntityID = 0;
  this->CharID = 0;
  this->PanelSwitcherIndex = 0;
  (this->OnClickTabChangeEvent)._padding_ = '\0';
  (this->OnClickTabChangeEvent).bIsCustomSelected = false;
  (this->OnClickTabChangeEvent).bIsLacked = false;
  (this->OnClickTabChangeEvent).bIsCustomDisabled = false;
  (this->OnClickTabChangeEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickTabChangeEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickTabChangeEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickTabChangeEvent).Delegate.field_0x8 = 0;
  this->PanelChangeBtnVisibility = Collapsed;
  return this;
}

// UDS_VM_W_CharacterLevelupInfo @ 14b71ea90

UDS_VM_W_CharacterLevelupInfo * __thiscall
UDS_VM_W_CharacterLevelupInfo::UDS_VM_W_CharacterLevelupInfo
          (UDS_VM_W_CharacterLevelupInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterLevelupInfo__6B_;
  (this->DescText).StringTableType = None;
  (this->DescText).StringTableID = 0;
  (this->DescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescText).StringEnumTableNameID.Number = 0;
  (this->DescText).DateTime.Ticks = 0;
  (this->DescText).TimeSpan.Ticks = 0;
  (this->DescText).TimeExpressionType = None;
  (this->DescText).IsExpression = false;
  (this->DescText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).UniqueString.Data.ArrayNum = 0;
  (this->DescText).UniqueString.Data.ArrayMax = 0;
  (this->DescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).FormatArgs.ArrayNum = 0;
  (this->DescText).FormatArgs.ArrayMax = 0;
  (this->PanelChangeBtnText).StringTableType = None;
  (this->PanelChangeBtnText).StringTableID = 0;
  (this->PanelChangeBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PanelChangeBtnText).StringEnumTableNameID.Number = 0;
  (this->PanelChangeBtnText).DateTime.Ticks = 0;
  (this->PanelChangeBtnText).TimeSpan.Ticks = 0;
  (this->PanelChangeBtnText).TimeExpressionType = None;
  (this->PanelChangeBtnText).IsExpression = false;
  (this->PanelChangeBtnText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PanelChangeBtnText).UniqueString.Data.ArrayNum = 0;
  (this->PanelChangeBtnText).UniqueString.Data.ArrayMax = 0;
  (this->PanelChangeBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PanelChangeBtnText).FormatArgs.ArrayNum = 0;
  (this->PanelChangeBtnText).FormatArgs.ArrayMax = 0;
  this->CharEntityID = 0;
  this->CharID = 0;
  this->PanelSwitcherIndex = 0;
  (this->OnClickTabChangeEvent)._padding_ = '\0';
  (this->OnClickTabChangeEvent).bIsCustomSelected = false;
  (this->OnClickTabChangeEvent).bIsLacked = false;
  (this->OnClickTabChangeEvent).bIsCustomDisabled = false;
  (this->OnClickTabChangeEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickTabChangeEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickTabChangeEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickTabChangeEvent).Delegate.field_0x8 = 0;
  this->PanelChangeBtnVisibility = Collapsed;
  return this;
}

// ~UDS_VM_W_CharacterLevelupInfo @ 14b71fcf0

void __thiscall
UDS_VM_W_CharacterLevelupInfo::~UDS_VM_W_CharacterLevelupInfo(UDS_VM_W_CharacterLevelupInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterLevelupInfo__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickTabChangeEvent).Delegate);
  pvVar1 = *(void **)&(this->OnClickTabChangeEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickTabChangeEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PanelChangeBtnText).FormatArgs.AllocatorInstance.Data,
             (this->PanelChangeBtnText).FormatArgs.ArrayNum);
  pFVar2 = (this->PanelChangeBtnText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PanelChangeBtnText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DescText).FormatArgs.AllocatorInstance.Data,
             (this->DescText).FormatArgs.ArrayNum);
  pFVar2 = (this->DescText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DescText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b721250

IClassDescriptor * __thiscall
UDS_VM_W_CharacterLevelupInfo::GetFieldNotificationDescriptor(UDS_VM_W_CharacterLevelupInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CharacterLevelupInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7218e0

UClass * __cdecl UDS_VM_W_CharacterLevelupInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterLevelupInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterLevelupInfo,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterLevelupInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterLevelupInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CharacterLevelupInfo @ 14b721c20

void __cdecl UDS_VM_W_CharacterLevelupInfo::StaticRegisterNativesUDS_VM_W_CharacterLevelupInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_CharacterLevelupInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsRedDotState @ 14b722c80

void __cdecl
UDS_VM_W_CharacterLevelupInfo::execIsRedDotState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRedDotState((UDS_VM_W_CharacterLevelupInfo *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnChangedRedDotState @ 14b723030

void __cdecl
UDS_VM_W_CharacterLevelupInfo::execOnChangedRedDotState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedRedDotState((UDS_VM_W_CharacterLevelupInfo *)param_1);
  return;
}

// BindModel @ 14bf9c8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterLevelupInfo::BindModel(UDS_VM_W_CharacterLevelupInfo *this)

{
  UDS_NotificationManager *this_00;
  UDS_LogManager *pUVar1;
  FName *pFVar2;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 == (UDS_NotificationManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_CharacterLevelupInfo::BindModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Display,local_138.Ptr,0x52,L"notificationManager is nullptr.");
      if ((UDS_NotificationManager *)local_138._padding_ != (UDS_NotificationManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this);
    pFVar2 = ::FName::FName(local_148,"OnChangedRedDotState");
    UDS_NotificationManager::BindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this,*pFVar2)
    ;
  }
  return;
}

// IsRedDotState @ 14bfb3160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_CharacterLevelupInfo::IsRedDotState(UDS_VM_W_CharacterLevelupInfo *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_CharInfoData::GetData((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_CharacterLevelupInfo::IsRedDotState",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x6e,L"charInfoData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar1 = FDS_CharacterService::CanUseItemForLevelUp
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_148[0]);
    if ((bVar1) && (this->ChangePanelType == Levelup)) {
      return true;
    }
    bVar1 = FDS_CharacterService::CanAscendWithCost
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_148[0]);
    if (bVar1) {
      return this->ChangePanelType == Ascend;
    }
  }
  return false;
}

// OnChangedRedDotState @ 14bfb7370

void __thiscall
UDS_VM_W_CharacterLevelupInfo::OnChangedRedDotState(UDS_VM_W_CharacterLevelupInfo *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsRedDotState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRedDotState.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickTabChange @ 14bfbace0

void __thiscall
UDS_VM_W_CharacterLevelupInfo::OnClickTabChange
          (UDS_VM_W_CharacterLevelupInfo *this,FDS_ButtonEventField *param_1)

{
  FDS_EventDelegate<EDS_CharStatusPanelType_const_> *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_CharacterUIEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pUVar9 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar9 != (UDS_CharacterUIEvent *)0x0) {
    this_00 = &pUVar9->OnChangeDetailPanel;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->OnChangeDetailPanel).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->OnChangeDetailPanel).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->OnChangeDetailPanel).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->OnChangeDetailPanel).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->OnChangeDetailPanel).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bfc7350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterLevelupInfo::OnSetViewModel
          (UDS_VM_W_CharacterLevelupInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UDS_CharInfoData *pUVar8;
  longlong lVar9;
  FName *pFVar10;
  undefined1 auStackY_378 [32];
  FWeakObjectPtr local_348;
  TSharedPtr<FDS_ViewModelContext_CharacterStatusInfoPanel,1> local_340;
  FName local_330;
  FName local_328;
  int local_320;
  FName local_318;
  int local_310;
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_278.Object = param_1->Object;
  local_278.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharacterStatusInfoPanel>(&local_340,&local_278);
  if (local_340.Object == (FDS_ViewModelContext_CharacterStatusInfoPanel *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_268._padding_ = (longlong)local_340.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_W_CharacterLevelupInfo::OnSetViewModel",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_268.Ptr,0x1a,L"context is Invalid.");
      if ((FDS_ViewModelContext_CharacterStatusInfoPanel *)local_268._padding_ !=
          (FDS_ViewModelContext_CharacterStatusInfoPanel *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    goto LAB_14bfc77e9;
  }
  if (local_340.Object == (FDS_ViewModelContext_CharacterStatusInfoPanel *)0x0) {
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
  this->CharEntityID = (local_340.Object)->CharEntityID;
  UDS_CharInfoData::GetData((ulong64)&local_348);
  bVar5 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_348,(void *)0x0);
  iVar3 = FFieldNotificationClassDescriptor::CharID.BitNumber;
  if (bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_CharacterLevelupInfo::OnSetViewModel",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Display,local_148.Ptr,0x23,L"charInfoData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14bfc77e9;
  }
  local_330 = FFieldNotificationClassDescriptor::CharID.FieldName;
  pUVar7 = FWeakObjectPtr::Get(&local_348);
  if (this->CharID != *(int *)&pUVar7[8].field_0x8) {
    this->CharID = *(int *)&pUVar7[8].field_0x8;
    local_328 = local_330;
    local_320 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_328);
  }
  pUVar8 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_348);
  bVar5 = UDS_CharInfoData::IsMaxLevel(pUVar8);
  iVar3 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::PanelSwitcherIndex.FieldName;
  if (bVar5) {
    if (this->PanelSwitcherIndex != 1) {
      this->PanelSwitcherIndex = 1;
      local_310 = iVar3;
      local_318 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
    }
    FDS_Text::SetTextFromStringTable(&this->DescText,StringUi,0x2983a);
    local_300 = FFieldNotificationClassDescriptor::DescText.BitNumber;
    local_308 = FFieldNotificationClassDescriptor::DescText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
    iVar3 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.FieldName;
    if (this->PanelChangeBtnVisibility != Collapsed) {
      this->PanelChangeBtnVisibility = Collapsed;
      pFVar10 = &local_2f8;
      local_2f0 = iVar3;
      lVar9 = this->_padding_;
      local_2f8 = FVar4;
      goto LAB_14bfc77c2;
    }
  }
  else {
    if (this->PanelSwitcherIndex != 0) {
      this->PanelSwitcherIndex = 0;
      local_2e0 = iVar3;
      local_2e8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
    }
    pUVar8 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_348);
    bVar5 = UDS_CharInfoData::CanAscend(pUVar8);
    if (bVar5) {
      this->ChangePanelType = Ascend;
      FDS_Text::SetTextFromStringTable(&this->PanelChangeBtnText,StringUi,0x29831);
      local_2d0 = FFieldNotificationClassDescriptor::PanelChangeBtnText.BitNumber;
      local_2d8 = FFieldNotificationClassDescriptor::PanelChangeBtnText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
      iVar3 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.FieldName;
      if (this->PanelChangeBtnVisibility != SelfHitTestInvisible) {
        this->PanelChangeBtnVisibility = SelfHitTestInvisible;
        pFVar10 = &local_2c8;
        local_2c0 = iVar3;
        lVar9 = this->_padding_;
        local_2c8 = FVar4;
        goto LAB_14bfc77c2;
      }
    }
    else {
      pUVar8 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_348);
      bVar5 = UDS_CharInfoData::CanLevelup(pUVar8);
      iVar3 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.FieldName;
      if (bVar5) {
        this->ChangePanelType = Levelup;
        FDS_Text::SetTextFromStringTable(&this->PanelChangeBtnText,StringUi,0x29830);
        local_2b0 = FFieldNotificationClassDescriptor::PanelChangeBtnText.BitNumber;
        local_2b8 = FFieldNotificationClassDescriptor::PanelChangeBtnText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
        iVar3 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::PanelChangeBtnVisibility.FieldName;
        if (this->PanelChangeBtnVisibility != SelfHitTestInvisible) {
          this->PanelChangeBtnVisibility = SelfHitTestInvisible;
          pFVar10 = &local_2a8;
          local_2a0 = iVar3;
          lVar9 = this->_padding_;
          local_2a8 = FVar4;
LAB_14bfc77c2:
          (**(code **)(lVar9 + 0x38))(&this->_padding_,pFVar10);
        }
      }
      else if (this->PanelChangeBtnVisibility != Collapsed) {
        this->PanelChangeBtnVisibility = Collapsed;
        local_290 = iVar3;
        pFVar10 = &local_298;
        lVar9 = this->_padding_;
        local_298 = FVar4;
        goto LAB_14bfc77c2;
      }
    }
  }
  local_280 = FFieldNotificationClassDescriptor::IsRedDotState.BitNumber;
  local_288 = FFieldNotificationClassDescriptor::IsRedDotState.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
LAB_14bfc77e9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_340.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bfdfbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterLevelupInfo::UnbindModel(UDS_VM_W_CharacterLevelupInfo *this)

{
  UDS_NotificationManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 == (UDS_NotificationManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_CharacterLevelupInfo::UnbindModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Display,local_138.Ptr,0x61,L"notificationManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this);
  }
  return;
}

