// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetAnimationFinishEvent_WrapperImpl @ 14b5fb700

void __cdecl UDS_VM_BuffInfo::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b5fb710

UClass * __cdecl UDS_VM_BuffInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_BuffInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_BuffInfo",
               &Z_Registration_Info_UClass_UDS_VM_BuffInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_BuffInfo,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_BuffInfo>,InternalVTableHelperCtorCaller<UDS_VM_BuffInfo>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_BuffInfo.InnerSingleton;
}

// UDS_VM_BuffInfo @ 14b600890

UDS_VM_BuffInfo * __thiscall
UDS_VM_BuffInfo::UDS_VM_BuffInfo(UDS_VM_BuffInfo *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_BuffInfo__6B_;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)&local_res8);
  this->BuffID = 0;
  this->bUpdateBuffMessage = false;
  this->bShowCoolTime = false;
  this->BGIconID = 0;
  this->IconID = 0;
  (this->BuffNameText).StringTableType = None;
  (this->BuffNameText).StringTableID = 0;
  (this->BuffNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BuffNameText).StringEnumTableNameID.Number = 0;
  (this->BuffNameText).DateTime.Ticks = 0;
  (this->BuffNameText).TimeSpan.Ticks = 0;
  (this->BuffNameText).TimeExpressionType = None;
  (this->BuffNameText).IsExpression = false;
  (this->BuffNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffNameText).UniqueString.Data.ArrayNum = 0;
  (this->BuffNameText).UniqueString.Data.ArrayMax = 0;
  (this->BuffNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffNameText).FormatArgs.ArrayNum = 0;
  (this->BuffNameText).FormatArgs.ArrayMax = 0;
  this->Vis_CoolTime = Collapsed;
  FText::FText(&this->CoolTimeText);
  (this->RequestCloseEvent).bIsActivate = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  return this;
}

// UDS_VM_BuffInfo @ 14b600a00

UDS_VM_BuffInfo * __thiscall
UDS_VM_BuffInfo::UDS_VM_BuffInfo(UDS_VM_BuffInfo *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_BuffInfo__6B_;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)&local_res8);
  this->BuffID = 0;
  this->bUpdateBuffMessage = false;
  this->bShowCoolTime = false;
  this->BGIconID = 0;
  this->IconID = 0;
  (this->BuffNameText).StringTableType = None;
  (this->BuffNameText).StringTableID = 0;
  (this->BuffNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BuffNameText).StringEnumTableNameID.Number = 0;
  (this->BuffNameText).DateTime.Ticks = 0;
  (this->BuffNameText).TimeSpan.Ticks = 0;
  (this->BuffNameText).TimeExpressionType = None;
  (this->BuffNameText).IsExpression = false;
  (this->BuffNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffNameText).UniqueString.Data.ArrayNum = 0;
  (this->BuffNameText).UniqueString.Data.ArrayMax = 0;
  (this->BuffNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffNameText).FormatArgs.ArrayNum = 0;
  (this->BuffNameText).FormatArgs.ArrayMax = 0;
  this->Vis_CoolTime = Collapsed;
  FText::FText(&this->CoolTimeText);
  (this->RequestCloseEvent).bIsActivate = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  return this;
}

// ~UDS_VM_BuffInfo @ 14b601dc0

void __thiscall UDS_VM_BuffInfo::~UDS_VM_BuffInfo(UDS_VM_BuffInfo *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_BuffInfo__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  pIVar2 = (this->CoolTimeText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->BuffNameText).FormatArgs.AllocatorInstance.Data,
             (this->BuffNameText).FormatArgs.ArrayNum);
  pFVar3 = (this->BuffNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BuffNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603bc0

IClassDescriptor * __thiscall UDS_VM_BuffInfo::GetFieldNotificationDescriptor(UDS_VM_BuffInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_BuffInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6043a0

UClass * __cdecl UDS_VM_BuffInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_BuffInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_BuffInfo",
               &Z_Registration_Info_UClass_UDS_VM_BuffInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_BuffInfo,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_BuffInfo>,InternalVTableHelperCtorCaller<UDS_VM_BuffInfo>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_BuffInfo.InnerSingleton;
}

// GetTickableTickType @ 14b604820

ETickableTickType __thiscall UDS_VM_BuffInfo::GetTickableTickType(UDS_VM_BuffInfo *this)

{
  return Conditional;
}

// IsUpdate @ 14b604830

bool __thiscall UDS_VM_BuffInfo::IsUpdate(UDS_VM_BuffInfo *this)

{
  return this->bUpdateBuffMessage == true;
}

// StaticRegisterNativesUDS_VM_BuffInfo @ 14b604960

void __cdecl UDS_VM_BuffInfo::StaticRegisterNativesUDS_VM_BuffInfo(void)

{
  return;
}

// __VTableCtorCaller @ 14b605770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_BuffInfo::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_BuffInfo__6B_;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Visibility = Collapsed;
    FText::FText((FText *)&this[1].VMName.Number);
    *(undefined1 *)&this[1].TextPropertyIDList.ArrayNum = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].ViewModelContext.Object = 0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].VMName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// CloseWidget @ 14bdb35c0

void __thiscall UDS_VM_BuffInfo::CloseWidget(UDS_VM_BuffInfo *this)

{
  FName local_18;
  int local_10;
  
  (this->RequestCloseEvent).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnAnimationFinished @ 14bdca040

void __thiscall
UDS_VM_BuffInfo::OnAnimationFinished(UDS_VM_BuffInfo *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->RequestCloseEvent).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bdd3210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_BuffInfo::OnSetViewModel(UDS_VM_BuffInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext *pFVar3;
  FName FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UClass *pUVar7;
  UDS_CharBuffData *this_00;
  FDS_BuffInfo *pFVar8;
  FDS_BuffBaseTableRow *pFVar9;
  UDS_EntityManager *this_01;
  UDS_DataBase *this_02;
  ulong64 uVar10;
  ulong64 uVar11;
  FName *pFVar12;
  ESlateVisibility EVar13;
  FName *pFVar14;
  undefined1 auStackY_298 [32];
  FName local_258;
  int local_250;
  FName local_248;
  int local_240;
  TSharedPtr<FDS_ViewModelContext_BuffInfo,1> local_238;
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  UObject *local_208 [2];
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FDS_Text local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar3 = param_1->Object;
  if (pFVar3 == (FDS_ViewModelContext *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_BuffInfo::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_178.Ptr,0x1f,L"InViewModelContext is nullptr.");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    (this->RequestCloseEvent).bIsActivate = true;
    local_240 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
    local_248 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_248);
    goto LAB_14bdd3995;
  }
  local_188.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188.Object = pFVar3;
  SafeCast<FDS_ViewModelContext_BuffInfo>(&local_238,&local_188);
  if (local_238.Object == (FDS_ViewModelContext_BuffInfo *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_BuffInfo::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,0x27,L"context is nullptr.");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    (this->RequestCloseEvent).bIsActivate = true;
    local_240 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
    local_248 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_248);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.SharedReferenceCount.ReferenceController);
    goto LAB_14bdd3995;
  }
  local_208[0] = FWeakObjectPtr::Get(&((local_238.Object)->Value).WeakPtr);
  if (local_208[0] == (UObject *)0x0) {
LAB_14bdd3446:
    local_208[0] = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_CharBuffData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&local_208[0]->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_208[0]->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bdd3446;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_208[0]);
  }
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)local_208);
  bVar5 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharBuffData,(void *)0x0);
  if (bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_BuffInfo::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,0x2f,L"CharBuffData is nullptr.");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    (this->RequestCloseEvent).bIsActivate = true;
    local_240 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
    local_248 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_248);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.SharedReferenceCount.ReferenceController);
    goto LAB_14bdd3995;
  }
  this->BuffID = (local_238.Object)->BuffID;
  this->bUpdateBuffMessage = (local_238.Object)->bUpdateBuffMessage;
  this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
  pFVar8 = UDS_CharBuffData::GetBuffInfo(this_00,&this->BuffID);
  if (pFVar8 == (FDS_BuffInfo *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_BuffInfo::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,0x3a,L"buffInfo is nullptr. (%d)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
  }
  else {
    pFVar9 = FDS_BuffBaseTableRow::Get((longlong)this->BuffID,true);
    FVar4 = FFieldNotificationClassDescriptor::IconID.FieldName;
    if (pFVar9 != (FDS_BuffBaseTableRow *)0x0) {
      if (this->IconID != pFVar9->ID_Icon) {
        local_1f0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
        this->IconID = pFVar9->ID_Icon;
        local_1f8 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
      }
      local_1d8.StringTableType = None;
      local_1d8.StringTableID = 0;
      local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1d8.StringEnumTableNameID.Number = 0;
      local_1d8.DateTime.Ticks = 0;
      local_1d8.TimeSpan.Ticks = 0;
      local_1d8.TimeExpressionType = None;
      local_1d8.IsExpression = false;
      local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.UniqueString.Data.ArrayNum = 0;
      local_1d8.UniqueString.Data.ArrayMax = 0;
      local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.FormatArgs.ArrayNum = 0;
      local_1d8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_1d8,&pFVar9->ID_Name);
      iVar1 = FFieldNotificationClassDescriptor::BuffNameText.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::BuffNameText.FieldName;
      FDS_Text::operator=(&this->BuffNameText,&local_1d8);
      local_1e8 = FVar4;
      local_1e0 = iVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data,
                 local_1d8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1d8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.UniqueString.Data.AllocatorInstance.Data);
      }
      this_01 = UDS_EntityManager::GetInst();
      if (this_01 == (UDS_EntityManager *)0x0) {
LAB_14bdd3709:
        CloseWidget(this);
      }
      else {
        this_02 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
        uVar10 = UDS_DataBase::GetEntityID(this_02);
        uVar11 = UDS_EntityManager::GetCurrentMainCharEntityID(this_01,true);
        iVar1 = FFieldNotificationClassDescriptor::BuffNameStyleID.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::BuffNameStyleID.FieldName;
        if (uVar10 == uVar11) {
          if (pFVar8->BuffApplyType == Buff) {
            if (this->BuffNameStyleID != 0x87c) {
              this->BuffNameStyleID = 0x87c;
              goto LAB_14bdd37b7;
            }
          }
          else if (pFVar8->BuffApplyType == UniqueBuff) {
            if (this->BuffNameStyleID != 0x886) {
              this->BuffNameStyleID = 0x886;
LAB_14bdd37b7:
              local_250 = iVar1;
              local_258 = FVar4;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_258);
            }
          }
          else if (this->BuffNameStyleID != 0x84a) {
            this->BuffNameStyleID = 0x84a;
            goto LAB_14bdd37b7;
          }
        }
        else {
          if ((local_238.Object)->TriggeredEntityID != uVar11) goto LAB_14bdd3709;
          if (((pFVar8->BuffApplyType == DeBuff) || (pFVar8->BuffApplyType == UniqueBuff)) &&
             (this->BuffNameStyleID != 0x872)) {
            this->BuffNameStyleID = 0x872;
            local_250 = iVar1;
            local_258 = FVar4;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_258);
          }
        }
        iVar1 = FFieldNotificationClassDescriptor::BGIconID.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::BGIconID.FieldName;
        if ((pFVar8->BuffApplyType == Buff) || (pFVar8->BuffApplyType == UniqueBuff)) {
          if (this->BGIconID != 0x7d2) {
            this->BGIconID = 0x7d2;
            local_210 = iVar1;
            local_218 = FVar4;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
          }
          if ((local_238.Object)->bAnimation == true) {
            pFVar12 = ::FName::FName(&local_248,"Buff");
            pFVar14 = &local_228;
            (this->AnimationEvent).AnimationName = *pFVar12;
            (this->AnimationEvent).AnimationEventType = PlayForward;
            local_228 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
            local_220 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
            goto LAB_14bdd3950;
          }
        }
        else {
          if (this->BGIconID != 0x7d3) {
            this->BGIconID = 0x7d3;
            local_220 = iVar1;
            local_228 = FVar4;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
          }
          if ((local_238.Object)->bAnimation == true) {
            pFVar12 = ::FName::FName(&local_248,"DeBuff");
            pFVar14 = &local_218;
            (this->AnimationEvent).AnimationName = *pFVar12;
            (this->AnimationEvent).AnimationEventType = PlayForward;
            local_218 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
            local_210 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
LAB_14bdd3950:
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
          }
        }
        EVar13 = SelfHitTestInvisible;
        if ((local_238.Object)->bShowCoolTime != true) {
          EVar13 = Collapsed;
        }
        SetVis_CoolTime(this,EVar13);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_238.SharedReferenceCount.ReferenceController);
      goto LAB_14bdd3995;
    }
  }
  CloseWidget(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
LAB_14bdd3995:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bddf170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_BuffInfo::OnUpdate(UDS_VM_BuffInfo *this,float param_1)

{
  TVector2<double> *pTVar1;
  EDS_BuffApplyType EVar2;
  longlong lVar3;
  TVector2<double>_u_0 TVar4;
  TVector2<double>_u_0 TVar5;
  double dVar6;
  bool bVar7;
  UDS_DataBase *this_00;
  FDS_EntityBase *pFVar8;
  FWeakObjectPtr *this_01;
  UObject *pUVar9;
  UDS_CharBuffData *this_02;
  FDS_BuffInfo *pFVar10;
  UDS_HudManager *this_03;
  float fVar11;
  ulong64 local_res8;
  undefined1 local_res18 [16];
  TVector<double>_u_0 local_38;
  
  bVar7 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharBuffData,(void *)0x0);
  if ((!bVar7) && (this->BuffID != 0)) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
    local_res8 = UDS_DataBase::GetEntityID(this_00);
    pFVar8 = FDS_EntityBase::GetEntityBase(&local_res8);
    if (pFVar8 != (FDS_EntityBase *)0x0) {
      pTVar1 = &this->ScreenPosition;
      (pTVar1->field0_0x0)._s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      this_01 = (FWeakObjectPtr *)(**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,local_res18);
      pUVar9 = FWeakObjectPtr::Get(this_01);
      lVar3 = *(longlong *)(pUVar9 + 0xb);
      local_38._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_38._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_38._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_38._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar3 != 0) {
        local_38._0_4_ = *(undefined4 *)(lVar3 + 0x210);
        local_38._4_4_ = *(undefined4 *)(lVar3 + 0x214);
        local_38._8_4_ = *(undefined4 *)(lVar3 + 0x218);
        local_38._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
        local_38._s_0.Z = *(double *)(lVar3 + 0x220);
      }
      DS_Util::ProjectWorldToScreen((TVector<double> *)&local_38._s_0,pTVar1);
      this_02 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
      pFVar10 = UDS_CharBuffData::GetBuffInfo(this_02,&this->BuffID);
      if (pFVar10 != (FDS_BuffInfo *)0x0) {
        EVar2 = pFVar10->BuffApplyType;
        if ((EVar2 == Buff) || (EVar2 == UniqueBuff)) {
          dVar6 = (this->ScreenPosition).field0_0x0._s_0.Y + __real_4024000000000000;
          (pTVar1->field0_0x0)._s_0.X = (pTVar1->field0_0x0)._s_0.X - __real_4049000000000000;
          (this->ScreenPosition).field0_0x0._s_0.Y = dVar6;
        }
        else if (EVar2 == DeBuff) {
          dVar6 = (this->ScreenPosition).field0_0x0._s_0.Y - _UNK_1527b1598;
          TVar4._8_4_ = SUB84(dVar6,0);
          TVar4._s_0.X = (pTVar1->field0_0x0)._s_0.X - ___xmm_40240000000000004049000000000000;
          TVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          pTVar1->field0_0x0 = TVar4;
        }
      }
      this_03 = UDS_HudManager::GetInst();
      if (this_03 != (UDS_HudManager *)0x0) {
        fVar11 = UDS_HudManager::GetUIScale(this_03);
        dVar6 = (this->ScreenPosition).field0_0x0._s_0.Y *
                (__real_3ff0000000000000 / (double)fVar11);
        TVar5._8_4_ = SUB84(dVar6,0);
        TVar5._s_0.X = (pTVar1->field0_0x0)._s_0.X * (__real_3ff0000000000000 / (double)fVar11);
        TVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        pTVar1->field0_0x0 = TVar5;
      }
      local_38._8_4_ = FFieldNotificationClassDescriptor::ScreenPosition.BitNumber;
      local_38._s_0.X = (double)FFieldNotificationClassDescriptor::ScreenPosition.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      return;
    }
  }
  (this->RequestCloseEvent).bIsActivate = true;
  local_38._8_4_ = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  local_38._s_0.X = (double)FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// SetBGIcon @ 14bde3600

void __thiscall UDS_VM_BuffInfo::SetBGIcon(UDS_VM_BuffInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::BGIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BGIconID.FieldName;
  if (this->BGIconID != *param_1) {
    this->BGIconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetBuffIcon @ 14bde3720

void __thiscall UDS_VM_BuffInfo::SetBuffIcon(UDS_VM_BuffInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != *param_1) {
    this->IconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetBuffNameStyleID @ 14bde3770

void __thiscall UDS_VM_BuffInfo::SetBuffNameStyleID(UDS_VM_BuffInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::BuffNameStyleID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BuffNameStyleID.FieldName;
  if (this->BuffNameStyleID != *param_1) {
    this->BuffNameStyleID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetBuffNameText @ 14bde37c0

void __thiscall UDS_VM_BuffInfo::SetBuffNameText(UDS_VM_BuffInfo *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::BuffNameText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BuffNameText.FieldName;
  FDS_Text::operator=(&this->BuffNameText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCoolTime @ 14bde4d90

void __thiscall UDS_VM_BuffInfo::SetCoolTime(UDS_VM_BuffInfo *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::CoolTimeText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CoolTimeText.FieldName;
  bVar5 = FText::IdenticalTo(&this->CoolTimeText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->CoolTimeText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->CoolTimeText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->CoolTimeText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetVis_CoolTime @ 14bdea240

void __thiscall UDS_VM_BuffInfo::SetVis_CoolTime(UDS_VM_BuffInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_CoolTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_CoolTime.FieldName;
  if (this->Vis_CoolTime != param_1) {
    this->Vis_CoolTime = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdeb990

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_BuffInfo::UnbindModel(UDS_VM_BuffInfo *this)

{
  bool bVar1;
  UDS_LanguageManager *pUVar2;
  UDS_CharBuffData *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharBuffData,(void *)0x0);
  if ((!bVar1) && (0 < this->BuffID)) {
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
    UDS_CharBuffData::GetBuffInfo(this_00,&this->BuffID);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->BuffID = 0;
  (this->CharBuffData).WeakPtr = local_res8;
  return;
}

