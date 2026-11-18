// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetChangerButtonRightClickEvent_WrapperImpl @ 14b675a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_QuickChanger::SetChangerButtonRightClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ContentManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  EDS_ContentsTabFrameType aEStack_148 [2];
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_ContentManager::GetInst();
  if (this == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_QuickChanger::OpenCharcterInfoUI",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Display,TStack_138.Ptr,0xa0,L"contentManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    uStack_140 = 0;
    aEStack_148[0] = Character;
    UDS_ContentManager::OpenContent(this,aEStack_148,(TObjectPtr<UDS_ContentArguments>)&uStack_140);
  }
  return;
}

// StaticClass @ 14b675a70

UClass * __cdecl UDS_VM_HUD_QuickChanger::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_QuickChanger.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_QuickChanger",
               &Z_Registration_Info_UClass_UDS_VM_HUD_QuickChanger.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_QuickChanger,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_QuickChanger>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_QuickChanger>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_QuickChanger.InnerSingleton;
}

// UDS_VM_HUD_QuickChanger @ 14b67a110

UDS_VM_HUD_QuickChanger * __thiscall
UDS_VM_HUD_QuickChanger::UDS_VM_HUD_QuickChanger
          (UDS_VM_HUD_QuickChanger *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_QuickChanger__6B_;
  (this->VM_Changer_StatusInfo_LeftGuageBar).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_Changer_StatusInfo_RightGuageBar).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  this->CharacterPortraitIconID = 0;
  this->CharLevel = 0;
  (this->ChangerButtonRightClickEvent)._padding_ = '\0';
  (this->ChangerButtonRightClickEvent).bIsCustomSelected = false;
  (this->ChangerButtonRightClickEvent).bIsLacked = false;
  (this->ChangerButtonRightClickEvent).bIsCustomDisabled = false;
  (this->ChangerButtonRightClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->ChangerButtonRightClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangerButtonRightClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ChangerButtonRightClickEvent).Delegate.field_0x8 = 0;
  this->CurEntityID = 0;
  this->CurCharID = 0;
  this->StatusTypeRight = None;
  this->StatusTypeLeft = None;
  return this;
}

// UDS_VM_HUD_QuickChanger @ 14b67a1a0

UDS_VM_HUD_QuickChanger * __thiscall
UDS_VM_HUD_QuickChanger::UDS_VM_HUD_QuickChanger
          (UDS_VM_HUD_QuickChanger *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_QuickChanger__6B_;
  (this->VM_Changer_StatusInfo_LeftGuageBar).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_Changer_StatusInfo_RightGuageBar).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  this->CharacterPortraitIconID = 0;
  this->CharLevel = 0;
  (this->ChangerButtonRightClickEvent)._padding_ = '\0';
  (this->ChangerButtonRightClickEvent).bIsCustomSelected = false;
  (this->ChangerButtonRightClickEvent).bIsLacked = false;
  (this->ChangerButtonRightClickEvent).bIsCustomDisabled = false;
  (this->ChangerButtonRightClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->ChangerButtonRightClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ChangerButtonRightClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ChangerButtonRightClickEvent).Delegate.field_0x8 = 0;
  this->CurEntityID = 0;
  this->CurCharID = 0;
  this->StatusTypeRight = None;
  this->StatusTypeLeft = None;
  return this;
}

// ~UDS_VM_HUD_QuickChanger @ 14b67b840

void __thiscall UDS_VM_HUD_QuickChanger::~UDS_VM_HUD_QuickChanger(UDS_VM_HUD_QuickChanger *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_QuickChanger__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ChangerButtonRightClickEvent).Delegate);
  pvVar1 = *(void **)&(this->ChangerButtonRightClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ChangerButtonRightClickEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67df70

IClassDescriptor * __thiscall
UDS_VM_HUD_QuickChanger::GetFieldNotificationDescriptor(UDS_VM_HUD_QuickChanger *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_QuickChanger::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67ea70

UClass * __cdecl UDS_VM_HUD_QuickChanger::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_QuickChanger.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_QuickChanger",
               &Z_Registration_Info_UClass_UDS_VM_HUD_QuickChanger.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_QuickChanger,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_QuickChanger>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_QuickChanger>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_QuickChanger.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_QuickChanger @ 14b67f2a0

void __cdecl UDS_VM_HUD_QuickChanger::StaticRegisterNativesUDS_VM_HUD_QuickChanger(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_QuickChanger_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnLevelUp @ 14b680530

void __cdecl UDS_VM_HUD_QuickChanger::execOnLevelUp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLevelUp((UDS_VM_HUD_QuickChanger *)param_1,piVar2);
  return;
}

// CharEntityValidLogicSet @ 14bf440d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_QuickChanger::CharEntityValidLogicSet
          (UDS_VM_HUD_QuickChanger *this,long64 param_1,EDS_StatusType param_2,
          EDS_StatusType param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FDS_CharacterBaseTableRow *pFVar6;
  FDS_CharacterSkinTableRow *pFVar7;
  char *pcVar8;
  <lambda_1> local_f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FWeakObjectPtr local_e8;
  FName local_e0;
  FWeakObjectPtr local_d8;
  FName local_d0;
  FWeakObjectPtr local_c8;
  FName local_c0;
  UDS_VM_HUD_QuickChanger *local_b8;
  FName *local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  UDS_CharInfoData::GetData((ulong64)&local_d8);
  bVar2 = FWeakObjectPtr::IsValid(&local_d8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4914847779664166739>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_QuickChanger.cpp"
                       ,0xad,"charInfoData.IsValid()");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_d8);
  this->CharLevel = *(int *)&pUVar3[8].field_0xc;
  pUVar3 = FWeakObjectPtr::Get(&local_d8);
  pcVar4 = strstr("&UDS_VM_HUD_QuickChanger::OnLevelUp","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf441cd:
    pcVar8 = &DAT_00000002;
LAB_14bf441d2:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar4;
      pcVar4 = strstr(pcVar8 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14bf441cd;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14bf441d2;
  }
  ::FName::FName(&local_c0,pcVar8);
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e8.ObjectIndex = 0;
  local_e8.ObjectSerialNumber = 0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d0 = local_c0;
  local_b8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_HUD_QuickChanger *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_b8);
  local_e0 = local_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f0,&local_60);
  if ((local_e0 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e8), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bf442cd;
  }
  local_b0 = &local_d0;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_BindDynamic<UDS_VM_HUD_QuickChanger>'::__l2::<lambda_1>::operator()(&local_b0);
LAB_14bf442cd:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f0,&local_48);
  local_88.Object = local_e8;
  local_88.FunctionName = local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x20,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)(pUVar3 + 3),local_f8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x20,&local_88
            );
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  local_a0 = FFieldNotificationClassDescriptor::CharLevel.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::CharLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  UpdateChangerStatusInfo(this,this->CurEntityID,param_2,param_3);
  UDS_PlayerData::GetData((ulong64)&local_c8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_c8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_c8);
    pFVar6 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar3[8].field_0x18,true);
    if (((pFVar6 != (FDS_CharacterBaseTableRow *)0x0) &&
        (pFVar7 = FDS_CharacterSkinTableRow::Get((longlong)pFVar6->ID_DefaultSkin,true),
        local_90 = FFieldNotificationClassDescriptor::CharacterPortraitIconID.BitNumber,
        local_98 = FFieldNotificationClassDescriptor::CharacterPortraitIconID.FieldName,
        pFVar7 != (FDS_CharacterSkinTableRow *)0x0)) &&
       (this->CharacterPortraitIconID != (longlong)pFVar7->ID_Portrait)) {
      this->CharacterPortraitIconID = (longlong)pFVar7->ID_Portrait;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
  }
  return;
}

// InitViewModel @ 14bf5a8c0

void __thiscall UDS_VM_HUD_QuickChanger::InitViewModel(UDS_VM_HUD_QuickChanger *this)

{
  UDS_VM_StatusInfo *pUVar1;
  
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VM_Changer_StatusInfo_LeftGuageBar).field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VM_Changer_StatusInfo_RightGuageBar).field0_0x0.DebugPtr = pUVar1;
  return;
}

// OnCloseInit @ 14bf63330

void __thiscall UDS_VM_HUD_QuickChanger::OnCloseInit(UDS_VM_HUD_QuickChanger *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  if (this->CurEntityID != 0) {
    UDS_CharInfoData::GetData((ulong64)local_res8);
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res8);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x20,
                 (UObject *)this);
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4914847779664166853>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_QuickChanger.cpp"
                         ,0x3b,"charInfoData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// OnLevelUp @ 14bf64450

void __thiscall UDS_VM_HUD_QuickChanger::OnLevelUp(UDS_VM_HUD_QuickChanger *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->CharLevel = *param_1;
  local_10 = FFieldNotificationClassDescriptor::CharLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnQuickRightChangeEvent @ 14bf66890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_QuickChanger::OnQuickRightChangeEvent
          (UDS_VM_HUD_QuickChanger *this,FDS_ButtonEventField *param_1)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  EDS_ContentsTabFrameType local_148 [2];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_QuickChanger::OpenCharcterInfoUI",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0xa0,L"contentManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_140 = 0;
    local_148[0] = Character;
    UDS_ContentManager::OpenContent(this_00,local_148,(TObjectPtr<UDS_ContentArguments>)&local_140);
  }
  return;
}

// OnSetViewModel @ 14bf69140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_QuickChanger::OnSetViewModel
          (UDS_VM_HUD_QuickChanger *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_StatusType EVar1;
  EDS_StatusType EVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  TSharedPtr<FDS_ViewModelContext_QuickChanger,1> local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_150.Object = param_1->Object;
  local_150.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_150.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_QuickChanger>(&local_160,&local_150);
  if (local_160.Object != (FDS_ViewModelContext_QuickChanger *)0x0) {
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = FWeakObjectPtr::IsValid(&local_168);
    if (bVar5) {
      this->CurEntityID = (local_160.Object)->CharEntityID;
      pUVar7 = FWeakObjectPtr::Get(&local_168);
      this->CurCharID = *(int *)&pUVar7[8].field_0x18;
      EVar1 = (local_160.Object)->StatusType_Right;
      this->StatusTypeRight = EVar1;
      EVar2 = (local_160.Object)->StatusType_Left;
      this->StatusTypeLeft = EVar2;
      CharEntityValidLogicSet(this,this->CurEntityID,EVar2,EVar1);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4914847779664166873>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_QuickChanger.cpp"
                         ,0x27,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_HUD_QuickChanger::OnSetViewModel",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x28,L"mainPlayerData is Invalid.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenCharcterInfoUI @ 14bf735c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_QuickChanger::OpenCharcterInfoUI(UDS_VM_HUD_QuickChanger *this)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  EDS_ContentsTabFrameType local_148 [2];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_QuickChanger::OpenCharcterInfoUI",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0xa0,L"contentManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_140 = 0;
    local_148[0] = Character;
    UDS_ContentManager::OpenContent(this_00,local_148,(TObjectPtr<UDS_ContentArguments>)&local_140);
  }
  return;
}

// UnbindModel @ 14bf84be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_QuickChanger::UnbindModel(UDS_VM_HUD_QuickChanger *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  if (this->CurEntityID != 0) {
    UDS_CharInfoData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_HUD_QuickChanger::UnbindModel",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x4d,L"UnbindModel charInfoData is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(local_148);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x20,
                 (UObject *)this);
    }
  }
  return;
}

// UpdateChangerStatusInfo @ 14bf86a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_QuickChanger::UpdateChangerStatusInfo
          (UDS_VM_HUD_QuickChanger *this,long64 param_1,EDS_StatusType param_2,
          EDS_StatusType param_3)

{
  UDS_VM_StatusInfo *pUVar1;
  code *pcVar2;
  FDS_ViewModelContext_StatusInfo *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_208 [32];
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> local_1c8 [2];
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_198;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  UDS_CharStatusData::GetData((ulong64)local_1c8);
  bVar4 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals(local_1c8,(void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_HUD_QuickChanger::UpdateChangerStatusInfo",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_158.Ptr,0x60,L"charStatusData is nullptr. (%d)");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((this->VM_Changer_StatusInfo_LeftGuageBar).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0)
    {
      MakeContext<FDS_ViewModelContext_StatusInfo>(&local_198);
      pFVar3 = local_198.Object;
      if ((local_198.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x12;
      pFVar3->EntityID = param_1;
      pFVar3->StatusID = param_2;
      pFVar3->bIsUse_VM_Progress = false;
      pFVar3->bIsUseDamageProgress = param_2 == Hp;
      pUVar1 = (this->VM_Changer_StatusInfo_LeftGuageBar).field0_0x0.DebugPtr;
      local_178.Object = (FDS_ViewModelContext *)local_198.Object;
      local_178.SharedReferenceCount.ReferenceController =
           local_198.SharedReferenceCount.ReferenceController;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_178);
      local_1b0 = FFieldNotificationClassDescriptor::VM_Changer_StatusInfo_LeftGuageBar.BitNumber;
      local_1b8 = FFieldNotificationClassDescriptor::VM_Changer_StatusInfo_LeftGuageBar.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_Changer_StatusInfo_RightGuageBar).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0)
    {
      MakeContext<FDS_ViewModelContext_StatusInfo>(&local_188);
      pFVar3 = local_188.Object;
      if ((local_188.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x12;
      pFVar3->EntityID = param_1;
      pFVar3->StatusID = param_3;
      pFVar3->bIsUse_VM_Progress = false;
      pFVar3->bIsUseDamageProgress = param_3 == Hp;
      pUVar1 = (this->VM_Changer_StatusInfo_RightGuageBar).field0_0x0.DebugPtr;
      local_168.Object = (FDS_ViewModelContext *)local_188.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_188.SharedReferenceCount.ReferenceController;
      if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_168);
      local_1a0 = FFieldNotificationClassDescriptor::VM_Changer_StatusInfo_RightGuageBar.BitNumber;
      local_1a8 = FFieldNotificationClassDescriptor::VM_Changer_StatusInfo_RightGuageBar.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// UpdatePortraitInfo @ 14bf88740

void __thiscall
UDS_VM_HUD_QuickChanger::UpdatePortraitInfo(UDS_VM_HUD_QuickChanger *this,long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_CharacterBaseTableRow *pFVar3;
  FDS_CharacterSkinTableRow *pFVar4;
  FWeakObjectPtr local_res18 [2];
  FName local_18;
  int local_10;
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    pFVar3 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar2[8].field_0x18,true);
    if (pFVar3 != (FDS_CharacterBaseTableRow *)0x0) {
      pFVar4 = FDS_CharacterSkinTableRow::Get((longlong)pFVar3->ID_DefaultSkin,true);
      local_10 = FFieldNotificationClassDescriptor::CharacterPortraitIconID.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::CharacterPortraitIconID.FieldName;
      if (pFVar4 != (FDS_CharacterSkinTableRow *)0x0) {
        if (this->CharacterPortraitIconID != (longlong)pFVar4->ID_Portrait) {
          this->CharacterPortraitIconID = (longlong)pFVar4->ID_Portrait;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        }
      }
    }
  }
  return;
}

