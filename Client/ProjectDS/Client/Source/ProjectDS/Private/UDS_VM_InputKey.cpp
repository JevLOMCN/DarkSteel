// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// StaticClass @ 14b675010

UClass * __cdecl UDS_VM_InputKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InputKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InputKey",
               &Z_Registration_Info_UClass_UDS_VM_InputKey.InnerSingleton,
               StaticRegisterNativesUDS_VM_InputKey,0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_InputKey>,InternalVTableHelperCtorCaller<UDS_VM_InputKey>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InputKey.InnerSingleton;
}

// UDS_VM_InputKey @ 14b67ad70

UDS_VM_InputKey * __thiscall
UDS_VM_InputKey::UDS_VM_InputKey(UDS_VM_InputKey *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_FirstKey = Collapsed;
  this->Vis_FirstKey_LongPress = Collapsed;
  this->Vis_SecondKey = Collapsed;
  this->Vis_Text = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_InputKey__6B_;
  this->FirstKeyIconID = 0;
  this->SecondKeyIconID = 0;
  (this->KeyText).StringTableType = None;
  (this->KeyText).StringTableID = 0;
  (this->KeyText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->KeyText).StringEnumTableNameID.Number = 0;
  (this->KeyText).DateTime.Ticks = 0;
  (this->KeyText).TimeSpan.Ticks = 0;
  (this->KeyText).TimeExpressionType = None;
  (this->KeyText).IsExpression = false;
  (this->KeyText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyText).UniqueString.Data.ArrayNum = 0;
  (this->KeyText).UniqueString.Data.ArrayMax = 0;
  (this->KeyText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyText).FormatArgs.ArrayNum = 0;
  (this->KeyText).FormatArgs.ArrayMax = 0;
  (this->LongPressProcessor).field0_0x0.DebugPtr = (UDS_LongPressProcessor *)0x0;
  this->Vis_Combination = Collapsed;
  this->bShowSubKey = false;
  this->bUseCurrentMappingType = true;
  return this;
}

// UDS_VM_InputKey @ 14b67ae30

UDS_VM_InputKey * __thiscall
UDS_VM_InputKey::UDS_VM_InputKey(UDS_VM_InputKey *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_FirstKey = Collapsed;
  this->Vis_FirstKey_LongPress = Collapsed;
  this->Vis_SecondKey = Collapsed;
  this->Vis_Text = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_InputKey__6B_;
  this->FirstKeyIconID = 0;
  this->SecondKeyIconID = 0;
  (this->KeyText).StringTableType = None;
  (this->KeyText).StringTableID = 0;
  (this->KeyText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->KeyText).StringEnumTableNameID.Number = 0;
  (this->KeyText).DateTime.Ticks = 0;
  (this->KeyText).TimeSpan.Ticks = 0;
  (this->KeyText).TimeExpressionType = None;
  (this->KeyText).IsExpression = false;
  (this->KeyText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyText).UniqueString.Data.ArrayNum = 0;
  (this->KeyText).UniqueString.Data.ArrayMax = 0;
  (this->KeyText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyText).FormatArgs.ArrayNum = 0;
  (this->KeyText).FormatArgs.ArrayMax = 0;
  (this->LongPressProcessor).field0_0x0.DebugPtr = (UDS_LongPressProcessor *)0x0;
  this->Vis_Combination = Collapsed;
  this->bShowSubKey = false;
  this->bUseCurrentMappingType = true;
  return this;
}

// ~UDS_VM_InputKey @ 14b67bd50

void __thiscall UDS_VM_InputKey::~UDS_VM_InputKey(UDS_VM_InputKey *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_InputKey__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->KeyText).FormatArgs.AllocatorInstance.Data,
             (this->KeyText).FormatArgs.ArrayNum);
  pFVar1 = (this->KeyText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KeyText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67e210

IClassDescriptor * __thiscall UDS_VM_InputKey::GetFieldNotificationDescriptor(UDS_VM_InputKey *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_InputKey::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67eef0

UClass * __cdecl UDS_VM_InputKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InputKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InputKey",
               &Z_Registration_Info_UClass_UDS_VM_InputKey.InnerSingleton,
               StaticRegisterNativesUDS_VM_InputKey,0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_InputKey>,InternalVTableHelperCtorCaller<UDS_VM_InputKey>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InputKey.InnerSingleton;
}

// GetTickableTickType @ 14b67f0a0

ETickableTickType __thiscall UDS_VM_InputKey::GetTickableTickType(UDS_VM_InputKey *this)

{
  return Conditional;
}

// IsUpdate @ 14b67f100

bool __thiscall UDS_VM_InputKey::IsUpdate(UDS_VM_InputKey *this)

{
  return this->bIsLongPress;
}

// StaticRegisterNativesUDS_VM_InputKey @ 14b67f390

void __cdecl UDS_VM_InputKey::StaticRegisterNativesUDS_VM_InputKey(void)

{
  return;
}

// BindModel @ 14be76750

void __thiscall UDS_VM_InputKey::BindModel(UDS_VM_InputKey *this)

{
  bool bVar1;
  UDS_InputEvent *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_InputKey>
              (&pUVar2->OnChangeInputDeviceType,(UDS_VM_InputKey *)(local_res10 + 1),
               (pmf_b675fdf2 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangeInputKey,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_InputKey>
              (&pUVar2->OnChangeInputKey,(UDS_VM_InputKey *)(local_res10 + 1),(pmf_540a9839 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnInputUIEvent,this);
    TMulticastDelegateRegistration<void___cdecl(bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_InputKey>
              (&pUVar2->OnInputUIEvent,(UDS_VM_InputKey *)(local_res10 + 1),(pmf_8370e304 *)this);
  }
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputControlType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_InputKey>
              (pUVar3 + 0x32,(UDS_VM_InputKey *)(local_res10 + 1),(pmf_364d1d65 *)this);
  }
  return;
}

// HideAllKey @ 14be8b890

void __thiscall UDS_VM_InputKey::HideAllKey(UDS_VM_InputKey *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_FirstKey.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_FirstKey.FieldName;
  if (this->Vis_FirstKey != Collapsed) {
    this->Vis_FirstKey = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::Vis_FirstKey_LongPress.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_FirstKey_LongPress.FieldName;
  if (this->Vis_FirstKey_LongPress != Collapsed) {
    this->Vis_FirstKey_LongPress = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::Vis_SecondKey.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_SecondKey.FieldName;
  if (this->Vis_SecondKey != Collapsed) {
    this->Vis_SecondKey = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::Vis_Text.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Text.FieldName;
  if (this->Vis_Text != Collapsed) {
    this->Vis_Text = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::Vis_Combination.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Combination.FieldName;
  if (this->Vis_Combination != Collapsed) {
    this->Vis_Combination = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// InitViewModel @ 14be8cd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_InputKey::InitViewModel(UDS_VM_InputKey *this)

{
  UClass *pUVar1;
  UDS_LongPressProcessor *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->LongPressProcessor).field0_0x0.DebugPtr == (UDS_LongPressProcessor *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_LongPressProcessor_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = this;
    pUVar2 = (UDS_LongPressProcessor *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_LongPressProcessor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->LongPressProcessor).field0_0x0.DebugPtr = pUVar2;
  }
  return;
}

// OnChangedInputControlType @ 14be912c0

void __thiscall
UDS_VM_InputKey::OnChangedInputControlType(UDS_VM_InputKey *this,EDS_InputControlType *param_1)

{
  EDS_KeyActionType EVar1;
  bool bVar2;
  EDS_InputDeviceType local_res18 [8];
  FWeakObjectPtr local_res20;
  
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    EVar1 = this->KeyActionType;
    FWeakObjectPtr::Get(&local_res20);
    SetInputKey(this,local_res18,EVar1);
  }
  return;
}

// OnChangedInputKey @ 14be91320

void __thiscall UDS_VM_InputKey::OnChangedInputKey(UDS_VM_InputKey *this,EDS_KeyActionType *param_1)

{
  EDS_KeyActionType EVar1;
  bool bVar2;
  EDS_InputDeviceType local_res8 [8];
  FWeakObjectPtr local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  EVar1 = *param_1;
  ::FString::FString(&local_38,L"EDS_KeyActionType");
  DS_Util::GetEnumToString(&local_18,&local_38,(longlong)(int)EVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  EVar1 = this->KeyActionType;
  ::FString::FString(&local_38,L"EDS_KeyActionType");
  DS_Util::GetEnumToString(&local_28,&local_38,(longlong)(int)EVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  EVar1 = this->KeyActionType;
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    FWeakObjectPtr::Get(&local_res10);
  }
  SetInputKey(this,local_res8,EVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangedInputType @ 14be91410

void __thiscall
UDS_VM_InputKey::OnChangedInputType(UDS_VM_InputKey *this,EDS_InputDeviceType *param_1)

{
  SetLongPress(this,this->KeyActionType);
  SetInputKey(this,param_1,this->KeyActionType);
  return;
}

// OnInputEvent @ 14be997f0

void __thiscall
UDS_VM_InputKey::OnInputEvent
          (UDS_VM_InputKey *this,bool *param_1,EDS_KeyActionType *param_2,EDS_WindowWidget *param_3)

{
  EDS_LongPressEventType EVar1;
  UDS_LongPressProcessor *this_00;
  FDateTime FVar2;
  
  if ((((this->KeyActionType == *param_2) && (this->ParentWindowWidget == *param_3)) &&
      (this->bIsLongPress != false)) &&
     (this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr,
     this_00 != (UDS_LongPressProcessor *)0x0)) {
    if (*param_1 == false) {
      UDS_LongPressProcessor::OnRelease(this_00);
      return;
    }
    if (this_00->bUsableLongPress != false) {
      this_00->bIsPress = true;
      FVar2 = FDateTime::Now();
      EVar1 = this_00->LongPressEventType;
                    /* WARNING: Load size is inaccurate */
      (this_00->pressedTime).Ticks = *FVar2.Ticks;
      if (EVar1 == Once) {
        this_00->bIsOnceNotify = false;
      }
    }
    return;
  }
  return;
}

// OnLongPressSuccessEvent @ 14be99ff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_InputKey::OnLongPressSuccessEvent(UDS_VM_InputKey *this)

{
  UDS_LongPressProcessor *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UDS_WindowManager *this_01;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  FWeakObjectPtr local_res8;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20;
  
  this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (this_00 != (UDS_LongPressProcessor *)0x0) {
    UDS_LongPressProcessor::OnRelease(this_00);
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      UDS_WindowManager::GetWindowInfo(this_01,(EDS_WindowWidget)&local_res8);
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_20 = 0;
        pUVar7 = FWeakObjectPtr::Get(&local_res8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7[5].field_0x18,
                   (FWriteAccessScope *)&local_58);
        *(int *)&pUVar7[6].field_0xc = *(int *)&pUVar7[6].field_0xc + 1;
        bVar3 = false;
        uVar8 = *(int *)(pUVar7 + 6) - 1;
        if (-1 < (int)uVar8) {
          lVar9 = (longlong)(int)uVar8 << 4;
          bVar3 = false;
          do {
            uVar6 = 0;
            if ((int)uVar8 < *(int *)(pUVar7 + 6)) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((*(int *)(*(longlong *)&pUVar7[5].field_0x20 + 8 + lVar9) == 0) ||
                (plVar1 = *(longlong **)(*(longlong *)&pUVar7[5].field_0x20 + lVar9),
                plVar1 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,&this->KeyActionType,local_40),
               cVar5 == '\0')) {
              bVar3 = true;
            }
            lVar9 = lVar9 + -0x10;
            uVar8 = uVar8 - 1;
          } while (-1 < (int)uVar8);
        }
        *(int *)&pUVar7[6].field_0xc = *(int *)&pUVar7[6].field_0xc + -1;
        if (bVar3) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[5].field_0x18,
                     false);
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bea2880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_InputKey::OnSetViewModel(UDS_VM_InputKey *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_KeyActionType EVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_198 [32];
  EDS_InputDeviceType local_168 [8];
  FWeakObjectPtr local_160;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
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
  SafeCast<FDS_ViewModelContext_InputKey>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_InputKey *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_InputKey::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2b,L"context is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->ParentWindowWidget = (local_158.Object)->ParentWindowWidget;
    this->bShowSubKey = (local_158.Object)->bShowSubKey;
    this->bUseCurrentMappingType = (local_158.Object)->bUseCurrentMappingType;
    this->InputMappingType = (local_158.Object)->InputMappingType;
    SetLongPress(this,(local_158.Object)->KeyActionType);
    EVar1 = (local_158.Object)->KeyActionType;
    ADS_PlayerController::GetPlayerController();
    bVar2 = FWeakObjectPtr::IsValid(&local_160);
    if (bVar2) {
      FWeakObjectPtr::Get(&local_160);
    }
    SetInputKey(this,local_168,EVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bea76f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_InputKey::OnUpdate(UDS_VM_InputKey *this,float param_1)

{
  UDS_LongPressProcessor *pUVar1;
  double dVar2;
  UDS_LogManager *pUVar3;
  FDateTime FVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LongPressProcessor *)0x0) {
    uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
    if (((pUVar1->bUsableLongPress != false) && (pUVar1->bIsPress != false)) &&
       ((pUVar1->LongPressEventType != Once || (pUVar1->bIsOnceNotify != true)))) {
      if (0.0 < pUVar1->LongPressTime) {
        FVar4 = FDateTime::Now();
        dVar2 = (double)(*(longlong *)FVar4.Ticks - (pUVar1->pressedTime).Ticks) *
                __real_3e7ad7f29abcaf48;
        if ((double)pUVar1->LongPressDelay <= dVar2) {
          if (dVar2 < (double)(pUVar1->LongPressDelay + pUVar1->LongPressTime)) {
            lVar5 = 0x58;
            if (pUVar1->LongPressRatio == 0.0) {
              lVar5 = 0x28;
            }
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                       ((longlong)&pUVar1->_padding_ + lVar5));
            fVar6 = (float)((dVar2 - (double)pUVar1->LongPressDelay) / (double)pUVar1->LongPressTime
                           );
            if (__real_3f800000 <= fVar6) {
              fVar6 = __real_3f800000;
            }
            pUVar1->LongPressRatio = fVar6;
          }
          else {
            if (pUVar1->LongPressEventType == Once) {
              pUVar1->bIsOnceNotify = true;
            }
            pUVar1->LongPressRatio = 1.0;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                      (&pUVar1->OnLongPressEndDelegate);
          }
          TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&pUVar1->OnLongPressRatioDelegate,&pUVar1->LongPressRatio);
        }
        else {
          pUVar1->LongPressRatio = 0.0;
          TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&pUVar1->OnLongPressRatioDelegate,&pUVar1->LongPressRatio);
        }
      }
      else {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          TStack_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_158,"UDS_LongPressProcessor::CheckLongPress",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,TStack_158.Ptr,0x14,
                     L"LongPressTime must not be \'0\' or less.");
          if ((void *)TStack_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_158._padding_);
          }
        }
      }
    }
    return;
  }
  return;
}

// SetIcon_FirstKey @ 14beafdf0

void __thiscall UDS_VM_InputKey::SetIcon_FirstKey(UDS_VM_InputKey *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::FirstKeyIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FirstKeyIconID.FieldName;
  if (this->FirstKeyIconID != param_1) {
    this->FirstKeyIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIcon_SecondKey @ 14beafe40

void __thiscall UDS_VM_InputKey::SetIcon_SecondKey(UDS_VM_InputKey *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SecondKeyIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SecondKeyIconID.FieldName;
  if (this->SecondKeyIconID != param_1) {
    this->SecondKeyIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInputKey @ 14beaff40

void __thiscall
UDS_VM_InputKey::SetInputKey
          (UDS_VM_InputKey *this,EDS_InputDeviceType *param_1,EDS_KeyActionType param_2)

{
  EDS_InputDeviceType EVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  EDS_KeyType EVar7;
  EDS_KeyActionType EVar8;
  UObject *pUVar9;
  UInputAction *pUVar10;
  ADS_PlayerController *this_00;
  TObjectPtr<UInputMappingContext> TVar11;
  UObject *pUVar12;
  FDS_KeyTypeDataTableRow *pFVar13;
  FDS_KeyActionDataTableRow *pFVar14;
  ESlateVisibility EVar15;
  ESlateVisibility EVar16;
  FWeakObjectPtr local_res8;
  UInputAction *local_res20;
  TArray<FKey,TSizedDefaultAllocator<32>_> local_f8;
  UInputAction *local_e8;
  UObject *local_e0;
  UInputAction *local_d8;
  UObject *local_d0;
  UInputAction *local_c8;
  UObject *local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  undefined1 local_58 [8];
  FKey local_50;
  
  this->KeyActionType = param_2;
  ADS_PlayerController::GetPlayerController();
  bVar6 = FWeakObjectPtr::IsValid(&local_res8);
  if ((!bVar6) || (param_2 == None)) {
LAB_14beb04a4:
    HideAllKey(this);
    return;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res8);
  pUVar10 = DS_InputUtil::GetInputAction(*(UDS_InputConfig **)&pUVar9[0x30].field_0x8,param_2);
  if (pUVar10 == (UInputAction *)0x0) goto LAB_14beb04a4;
  if (this->bUseCurrentMappingType == false) {
    this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
    TVar11 = ADS_PlayerController::GetInputMappingContext(this_00,(EDS_InputMappingType)local_58);
    pUVar9 = *(UObject **)TVar11.field0_0x0;
LAB_14beb0002:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
  }
  else {
    pUVar9 = FWeakObjectPtr::Get(&local_res8);
    pUVar9 = *(UObject **)&pUVar9[0x38].field_0x10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      goto LAB_14beb0002;
    }
  }
  pUVar12 = FWeakObjectPtr::Get(&local_res8);
  EVar1 = pUVar12[0x36].field_0x8;
  local_e8 = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e0 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  DS_InputUtil::GetKeys
            (&local_f8,(TObjectPtr<UInputMappingContext>)&local_e0,
             (TObjectPtr<UInputAction_const_>)&local_e8,param_2,EVar1);
  if (local_f8.ArrayNum != 0) {
    if ((local_f8.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar5.Data = local_f8.AllocatorInstance.Data;
    bVar6 = FKey::IsValid((FKey *)local_f8.AllocatorInstance.Data);
    if (bVar6) {
      FWeakObjectPtr::Get(&local_res8);
      local_d8 = pUVar10;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      local_d0 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      DS_InputUtil::GetChordInputAction
                ((TObjectPtr<UInputMappingContext>)&local_res20,
                 (TObjectPtr<UInputAction_const_>)&local_d0,(EDS_InputDeviceType)&local_d8);
      bVar6 = this->bIsLongPress;
      if (local_res20 == (UInputAction *)0x0) {
        EVar16 = SelfHitTestInvisible;
        EVar15 = Collapsed;
        if (bVar6 != true) {
          EVar15 = SelfHitTestInvisible;
        }
        SetVis_FirstKey(this,EVar15);
        if (bVar6 != true) {
          EVar16 = Collapsed;
        }
        SetVis_FirstKey_LongPress(this,EVar16);
        SetVis_SecondKey(this,Collapsed);
        iVar4 = FFieldNotificationClassDescriptor::Vis_Combination.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::Vis_Combination.FieldName;
        if (this->Vis_Combination != Collapsed) {
          this->Vis_Combination = Collapsed;
          local_a0 = iVar4;
          local_a8 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
        }
        EVar7 = DS_InputUtil::GetKeyType((FKey *)FVar5.Data);
        pFVar13 = FDS_KeyTypeDataTableRow::Get((longlong)(int)EVar7,true);
        if (pFVar13 != (FDS_KeyTypeDataTableRow *)0x0) {
          SetIcon_FirstKey(this,pFVar13->ID_Icon);
        }
        FVar5.Data = local_f8.AllocatorInstance.Data;
        if (((this->bShowSubKey == true) && (1 < local_f8.ArrayNum)) &&
           (bVar6 = FKey::IsValid((FKey *)(local_f8.AllocatorInstance.Data + 0x18)), bVar6)) {
          SetVis_SecondKey(this,SelfHitTestInvisible);
          EVar7 = DS_InputUtil::GetKeyType((FKey *)(FVar5.Data + 0x18));
          pFVar13 = FDS_KeyTypeDataTableRow::Get((longlong)(int)EVar7,true);
          if (pFVar13 != (FDS_KeyTypeDataTableRow *)0x0) {
            SetIcon_SecondKey(this,pFVar13->ID_Icon);
          }
        }
      }
      else {
        EVar15 = Collapsed;
        if (bVar6 != true) {
          EVar15 = SelfHitTestInvisible;
        }
        SetVis_FirstKey(this,EVar15);
        EVar15 = SelfHitTestInvisible;
        if (bVar6 != true) {
          EVar15 = Collapsed;
        }
        SetVis_FirstKey_LongPress(this,EVar15);
        SetVis_SecondKey(this,SelfHitTestInvisible);
        iVar4 = FFieldNotificationClassDescriptor::Vis_Combination.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::Vis_Combination.FieldName;
        if (this->Vis_Combination != SelfHitTestInvisible) {
          this->Vis_Combination = SelfHitTestInvisible;
          local_b0 = iVar4;
          local_b8 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
        }
        EVar7 = DS_InputUtil::GetKeyType((FKey *)FVar5.Data);
        pFVar13 = FDS_KeyTypeDataTableRow::Get((longlong)(int)EVar7,true);
        if (pFVar13 != (FDS_KeyTypeDataTableRow *)0x0) {
          SetIcon_FirstKey(this,pFVar13->ID_Icon);
        }
        pUVar12 = FWeakObjectPtr::Get(&local_res8);
        EVar8 = UDS_InputConfig::FindKeyActionType
                          (*(UDS_InputConfig **)&pUVar12[0x30].field_0x8,local_res20,true);
        pUVar12 = FWeakObjectPtr::Get(&local_res8);
        EVar1 = pUVar12[0x36].field_0x8;
        local_c8 = local_res20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res20 != (UInputAction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res20);
        }
        local_c0 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        DS_InputUtil::GetKey
                  (&local_50,(TObjectPtr<UInputMappingContext>)&local_c0,
                   (TObjectPtr<UInputAction_const_>)&local_c8,EVar8,EVar1);
        EVar7 = DS_InputUtil::GetKeyType(&local_50);
        pFVar13 = FDS_KeyTypeDataTableRow::Get((longlong)(int)EVar7,true);
        if (pFVar13 != (FDS_KeyTypeDataTableRow *)0x0) {
          SetIcon_SecondKey(this,pFVar13->ID_Icon);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      pFVar14 = FDS_KeyActionDataTableRow::Get((longlong)(int)param_2,true);
      iVar4 = FFieldNotificationClassDescriptor::Vis_Text.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::Vis_Text.FieldName;
      if (pFVar14 == (FDS_KeyActionDataTableRow *)0x0) {
        if (this->Vis_Text != Collapsed) {
          this->Vis_Text = Collapsed;
          local_60 = iVar4;
          local_68 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
        }
      }
      else if ((pFVar14->ID_ActionName).ID < 1) {
        if (this->Vis_Text != Collapsed) {
          this->Vis_Text = Collapsed;
          local_70 = iVar4;
          local_78 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
        }
      }
      else {
        if (this->Vis_Text != SelfHitTestInvisible) {
          this->Vis_Text = SelfHitTestInvisible;
          local_90 = iVar4;
          local_98 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
        }
        FDS_Text::SetTextFromStringID(&this->KeyText,&pFVar14->ID_ActionName);
        local_80 = FFieldNotificationClassDescriptor::KeyText.BitNumber;
        local_88 = FFieldNotificationClassDescriptor::KeyText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      }
      goto LAB_14beb046a;
    }
  }
  HideAllKey(this);
LAB_14beb046a:
  DestructItems<FKey,int>((FKey *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FKey *)local_f8.AllocatorInstance.Data == (FKey *)0x0) {
    return;
  }
  FMemory::Free(local_f8.AllocatorInstance.Data);
  return;
}

// SetInputKey @ 14beb04c0

void __thiscall UDS_VM_InputKey::SetInputKey(UDS_VM_InputKey *this,EDS_KeyActionType param_1)

{
  bool bVar1;
  EDS_InputDeviceType local_res18 [8];
  FWeakObjectPtr local_res20;
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_res20);
  }
  SetInputKey(this,local_res18,param_1);
  return;
}

// SetLongPress @ 14beb2500

void __thiscall UDS_VM_InputKey::SetLongPress(UDS_VM_InputKey *this,EDS_KeyActionType param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  UDS_LongPressProcessor *pUVar1;
  bool bVar2;
  ADS_PlayerController *pAVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  float fVar6;
  FWeakObjectPtr local_res18;
  UDS_VM_InputKey *local_res20;
  uint uStack_4c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if ((bVar2) && ((this->LongPressProcessor).field0_0x0.DebugPtr != (UDS_LongPressProcessor *)0x0))
  {
    pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
    fVar6 = ADS_PlayerController::GetLongPressTime(pAVar3,param_1);
    pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
    bVar2 = ADS_PlayerController::IsLongPressKey(pAVar3,param_1);
    if (this->bIsLongPress != bVar2) {
      pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      this->bIsLongPress = bVar2;
      pUVar1->bUsableLongPress = bVar2;
      ((this->LongPressProcessor).field0_0x0.DebugPtr)->LongPressTime = fVar6;
      pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      this_00 = &pUVar1->OnLongPressEndDelegate;
      if (this->bIsLongPress == false) {
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                   &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressRatioDelegate);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_48);
        local_30 = &(pUVar1->OnLongPressEndDelegate).field_0x8;
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_InputKey____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar4[3] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res20);
          puVar4[4] = OnLongPressSuccessEvent;
          puVar4[5] = (ulonglong)uStack_4c << 0x20;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pUVar1->OnLongPressRatioDelegate,(FWriteAccessScope *)&local_48);
        local_30 = &(pUVar1->OnLongPressRatioDelegate).field_0x8;
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_InputKey____A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar4[3] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res20);
          puVar4[4] = SetLongPressRatio;
          puVar4[5] = (ulonglong)uStack_4c << 0x20;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
          return;
        }
      }
    }
  }
  return;
}

// SetLongPressRatio @ 14beb2760

void __thiscall UDS_VM_InputKey::SetLongPressRatio(UDS_VM_InputKey *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LongPressRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LongPressRatio.FieldName;
  if (*param_1 != this->LongPressRatio) {
    this->LongPressRatio = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_Combination @ 14beba8a0

void __thiscall UDS_VM_InputKey::SetVis_Combination(UDS_VM_InputKey *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_Combination.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Combination.FieldName;
  if (this->Vis_Combination != *param_1) {
    this->Vis_Combination = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_FirstKey @ 14beba8f0

void __thiscall UDS_VM_InputKey::SetVis_FirstKey(UDS_VM_InputKey *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_FirstKey.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_FirstKey.FieldName;
  if (this->Vis_FirstKey != param_1) {
    this->Vis_FirstKey = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_FirstKey_LongPress @ 14beba940

void __thiscall
UDS_VM_InputKey::SetVis_FirstKey_LongPress(UDS_VM_InputKey *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_FirstKey_LongPress.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_FirstKey_LongPress.FieldName;
  if (this->Vis_FirstKey_LongPress != param_1) {
    this->Vis_FirstKey_LongPress = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_SecondKey @ 14beba990

void __thiscall UDS_VM_InputKey::SetVis_SecondKey(UDS_VM_InputKey *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_SecondKey.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_SecondKey.FieldName;
  if (this->Vis_SecondKey != param_1) {
    this->Vis_SecondKey = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_Text @ 14beba9e0

void __thiscall UDS_VM_InputKey::SetVis_Text(UDS_VM_InputKey *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_Text.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Text.FieldName;
  if (this->Vis_Text != *param_1) {
    this->Vis_Text = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bebc500

void __thiscall UDS_VM_InputKey::UnbindModel(UDS_VM_InputKey *this)

{
  UDS_LongPressProcessor *pUVar1;
  bool bVar2;
  UDS_InputEvent *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeInputDeviceType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnChangeInputKey,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnInputUIEvent,this);
  }
  pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LongPressProcessor *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->OnLongPressEndDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressRatioDelegate);
  }
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 0x32),this);
  }
  return;
}

